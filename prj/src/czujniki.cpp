#include "czujniki.hh"
#include "data.hh"

#define  R_KOLA   0.075//promień albo średnica
#define GDZIE 0.135

extern Data* dane;

/*!

 */
Czujniki::Czujniki(QWidget *parent): QLabel (parent)
{

}

/*!

 */
void Czujniki::paintEvent(QPaintEvent *pEvent)
{

  QLabel::paintEvent(pEvent);

  QPainter Painter(this);
  if(dane->foto1().size()){

  for(int i =0; i<7; i++)
  {
      switch(i){
      case 0: dane->foto1().at(dane->foto1().size()-1) ?   Painter.setBrush(Qt::green) :           Painter.setBrush(Qt::red);
          break;
      case 1: dane->foto2().at(dane->foto2().size()-1) ?   Painter.setBrush(Qt::green) :           Painter.setBrush(Qt::red);
          break;
      case 2: dane->foto3().at(dane->foto3().size()-1) ?   Painter.setBrush(Qt::green) :           Painter.setBrush(Qt::red);
          break;
      case 3: dane->foto4().at(dane->foto4().size()-1) ?   Painter.setBrush(Qt::green) :           Painter.setBrush(Qt::red);
          break;
      case 4: dane->foto5().at(dane->foto5().size()-1) ?   Painter.setBrush(Qt::green) :           Painter.setBrush(Qt::red);
          break;
      case 5: dane->foto6().at(dane->foto6().size()-1) ?   Painter.setBrush(Qt::green) :           Painter.setBrush(Qt::red);
          break;
      case 6: dane->foto7().at(dane->foto7().size()-1) ?   Painter.setBrush(Qt::green) :           Painter.setBrush(Qt::red);
          break;
      }

      Painter.drawEllipse(GDZIE*this->width()+i*GDZIE*this->width()-20, GDZIE*this->height()/20, R_KOLA*this->width(), R_KOLA*this->width());


  }
}

}
