
#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include"wykres.hh"
#include"data.hh"
#include<czujniki.hh>
#include "trasa.hh"
#include<QTimer>
#include<QLabel>
#define TIMER_PERIOD 50


namespace Ui {
class MainWindow;
}

/*!
 * \brief Okno główne programu
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
       // Data *data;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    /*!
     * \brief Ustawia desk_portu
     * \param _deskportu - desk otwartego portu
     */
    void setDesk(const int &_deskportu){desk_portu=_deskportu;}
    /*!
     * \brief Metoda zwraca desk_portu
     * \return desk_portu
     */
    int desk(){return desk_portu;}

public slots:
    /*!
     * \brief Public slot aktualizujący dane.
     *
     */
    void refresh();
    /*!
     * \brief Slot ustawiający wartość prędkości na słupku dla encodera prawego.
     * \param value - wczytana prędkość
     *
     */
    void on_p_bar_enc2_valueChanged(const int &value);
    /*!
     * \brief Slot ustawiający wartość prędkości na słupku dla encodera lewego.
     * \param value - wczytana prędkość
     */
    void on_p_bar_enc1_valueChanged(const int &value);
    /*!
     * \brief Wyświetlanie okna Info.
     *
     * Slot który powoduje wyświetlenie okna z informacjami w danym punkcie trasy.
     * Jest aktywowany za pomocą sygnału mousePressed();
     */
    void info();


private slots:
    /*!
     * \brief Slot aktywowany za pomocą przycisku CLEAN
     *
     * Usuwa przechowywane dane.
     * Aktualizuje również wygląd okna.
     */
    void on_clear_button_clicked();
    /*!
     * \brief Slot aktywowany przyciskiem START
     *
     * Otwiera port szeregowy.
     * Ustawia odpowiednie przyciski jako aktywne.
     * Uruchamia timer
     */
    void on_start_button_clicked();
    /*!
     * \brief Slot aktywowany przyciskiem STOP.
     *
     * Ustawia odpowiednie przyciski jako aktywne.
     * Zatrzymuje timer
     */

    void on_stop_button_clicked();

private:

    float cz=0; /*!< czas w s od rozpoczecia pomiaru */

    int desk_portu;     /*!< desk otwieranego w konstruktorze portu */

    bool start_flag=false; /*!< flaga ustawiana przez nacisniecie startu  */

    Ui::MainWindow *ui; /*!< interfejs graficzny  */

    QTimer *timer; /*!< timer wyzwalajacy odczytywanie nowych danych  */
};

#endif // MAINWINDOW_H
