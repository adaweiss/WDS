#ifndef TRASA_HH
#define TRASA_HH


#include<QWidget>
#include"data.hh"
#include<QPainter>
#include<cmath>
#include<iostream>
#include<QMouseEvent>

#define R 0.02
#define D 0.1
#define TIME_PRESCALER_SEC 50
#define PAINT_PRESCALER 0.01

using namespace std;
/*!
 * \brief Widget rysujący trasę linefollowera
 */
class Trasa : public QWidget
{
    Q_OBJECT
public:
   /*!
     * \brief Konstruktor klasy Trasa
     * \param parent - wskaźnik na rodzica
     */
    Trasa(QWidget *parent);
    /*!
    * \brief Metoda zwraca index pomiaru w pobliżu ostatnio kliknięto
    * \return index danych w wektorach
    */
   const int ind(){return index;}
    /*!
     * \brief Odrysowywanie trasy wywoływane za pomoca update()
     * \param event
     */

    virtual void paintEvent(QPaintEvent *event);
    /*!
     * \brief Ustawia skale rysunku
     * \param _scale - parametr oczytany ze slidera w mainwindow
     */
    void set_scale(const int &_scale){scale=pow(10,0.04*(_scale-50)); this->update();}
    void mousePressEvent(QMouseEvent *e);
signals:
    /*!
     * \brief Sygnał emitowany w momencie nacisniecia myszki na widgecie
     */
    void    mousePressed();

private:

    double scale; /*!< skala rysunku  */
    QVector<double> qv_x;    /*!<  wektor przechowujący położenie punktów (wspolrzednej x) na widgecie    */
    QVector<double> qv_y; /*!< wektor przechowujący położenie punktów (wspolrzednej y) na widgecie    */
    int index=2000000;

//MainWindow *window;

};

#endif // TRASA_HH
