#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<cmath>
#include <QPainter>
#include<QLocale>
#include <iostream>
#include<string>
#include<QString>
#include<info.hh>
#include"odbieranie.hh"
#include"transparam.hh"
#include<QStatusBar>
#define INF 2147483647


using namespace std;

extern Data* dane;

/*!
 * \brief Konstruktor okna głównego
 * \param parent - wskaźnik na rodzica
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer=new QTimer;
    cz=0;

    connect(timer, SIGNAL(timeout()), this, SLOT(refresh()));
    connect(ui->trasa, SIGNAL(mousePressed()),this, SLOT(info()));

    ui->stop_button->setDisabled(true);
    ui->clear_button->setDisabled(true);

}
/*!
 * \brief Destruktor okna glównego
 */
MainWindow::~MainWindow()
{
    delete ui;
}





/*!
 * \brief Aktualizacja danych oraz okna głownego wywołana sygnałem z timera.
 * Odbywa się co 50 ms.
 */
void MainWindow::refresh()
{
 if(start_flag){
string bufor;
cz=cz+0.05;

  if(RS232_Odbierz(desk(),bufor,1000,50)) {
        if(dane->addData(bufor,cz)){
            ui->trasa->set_scale(ui->skaler->value());
            on_p_bar_enc1_valueChanged(dane->enc1().at((dane->enc1().size()-1)));
            on_p_bar_enc2_valueChanged(dane->enc2().at((dane->enc2().size()-1)));

            ui->plot_enc1->plot(dane->timeval(),dane->enc1());
            ui->plot_enc2->plot(dane->timeval(),dane->enc2());
            ui->trasa->update();
            ui->foto_label->update();
        }
  }



}
else {
    on_p_bar_enc1_valueChanged(0);
    on_p_bar_enc2_valueChanged(0);
    }




}



void MainWindow::on_p_bar_enc2_valueChanged(const int &value)
{

    ui->p_bar_enc2->setValue(value);
}

void MainWindow::on_p_bar_enc1_valueChanged(const int &value)
{

    ui->p_bar_enc1->setValue(value);

}
/*!
 * \brief Slot połaczony z sygnalem od MouseEvent widgetu Trasa.
 */
void MainWindow::info()
{
    Info *win=new Info();
    win->show();
    win->setFocus();
    win->showText((ui->trasa->ind()));
}
/*!
 * \brief Slot połaczony z wciśnięciem przycisku CLEAR
 * Wyczyszczenie danych znajdujących się w wektorach
 */
void MainWindow::on_clear_button_clicked()
{
 dane->clearData();
 cz=0;
 refresh();
}

/*!
 * \brief Slot połaczony z wciśnięciem przycisku START.
 * Uruchomienie czytania z portu USB0 i ustawienie parametrów transmisji.
 * Ustawienie odpowiednich ikon aktywnych.
 */
void MainWindow::on_start_button_clicked()
{
    if ((desk_portu = open("/dev/ttyACM0",O_RDWR | O_NONBLOCK)) < 0) {
      cerr << ":( Blad otwarcia portu USB0" << endl;
       //exit(1);
    }
    else SetTransParam(desk_portu);

    start_flag=true;
    ui->start_button->setDisabled(true);
    ui->stop_button->setDisabled(false);
    timer->start(TIMER_PERIOD);
    ui->clear_button->setDisabled(false);
}

/*!
 * \brief Slot połaczony z wciśnięciem przycisku STOP
 * Ustawienie odpowiednich ikon. Zatrzymanie timera.
 */

void MainWindow::on_stop_button_clicked()
{
    start_flag=false;
    ui->start_button->setDisabled(false);
    ui->stop_button->setDisabled(true);

    timer->stop();
}
