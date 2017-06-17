#include "trasa.hh"

#include<iostream>
#include<QPoint>
extern Data* dane;
using namespace std;

/*!
 * \brief
 *
 * Inicjalizuje tło, wypełnia je na białym kolorem
 *
 */
Trasa::Trasa(QWidget *parent) : QWidget(parent)
{
      setAutoFillBackground(true);
      setPalette(QPalette(Qt::white));

}


/*!
 * \brief
 *
 * Kolejne miejsca rysowane są jako punkty, a aktualne położenie jet rysowane na czerwono.
 * Wykorzystuje ustawioną skalę.
*/
void Trasa::paintEvent(QPaintEvent  *)
{

    double prev_fi=0;
    double prev_x=0;
    double prev_y=0;
    QPainter painter(this);

    qv_x.clear();
    qv_y.clear();
   painter.translate(width()/2, height()/2);
   for(int i=0;i<dane->enc1().size();++i){
   double fi = prev_fi+TIME_PRESCALER_SEC*(dane->enc2()[i]-dane->enc1()[i])/15*R/D;
   double x=prev_x+TIME_PRESCALER_SEC*(dane->enc1()[i]+dane->enc2()[i])/15*R*cos(fi*M_PI/180)/2;
   double y=prev_y+TIME_PRESCALER_SEC*(dane->enc1()[i]+dane->enc2()[i])/15*R*sin(fi*M_PI/180)/2;
   (i==dane->enc1().size()-1) ? painter.setBrush(Qt::red) : painter.setBrush(Qt::black);
   QPoint p(scale*x,scale*y);

     (i==dane->enc1().size()-1) ? painter.drawEllipse(p, 3,3) : painter.drawEllipse(p, 1,1);
    prev_x=x;
    prev_y=y;
    prev_fi=fi;
    qv_x.append(scale*x+width()/2);
    qv_y.append(scale*y+height()/2);


    }


}

/*!
 * \brief Metoda obsługująca klikniecie myszka na widget.
 *
 * Sprawdza dane dla punktu położonego w odpowiedniu małej odległości od miejsca, w którym kliknięto myszką.
 * \param ev - MouseEvent zawiera dane o miejscu klikniecia myszka
 */

void Trasa::mousePressEvent(QMouseEvent *ev)
{
    int min_distance=INFINITY;
    for(int i=0;i<qv_x.size();++i){

        if(abs(ev->x()-qv_x.at(i))<3&&abs(ev->y()-qv_y.at(i))<3&&abs(ev->x()-qv_x.at(i))<min_distance){
            min_distance=abs(ev->x()-qv_x.at(i));
            index=i;

        }
    }
      emit mousePressed();

}
