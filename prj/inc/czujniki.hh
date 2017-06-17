#ifndef CZUJNIKI_HH
#define CZUJNIKI_HH

#include"data.hh"
#include "czujniki.hh"
#include<QTimer>
#include<QLabel>
#include<cmath>
#include <QPainter>
#include <iostream>

using namespace std;

/*!
 * \brief Widget do rysowania czujników linii
 */

class Czujniki : public QLabel{

 Q_OBJECT

public:
    /*!
   * \brief Konstruktor klasy czujniki
   * \param parent - wskażnik na rodzica
   */
  Czujniki(QWidget *parent);
  /*!
   * \brief Metoda do odrysowywania czujników.
   * \param pEvent - paint event
   */
  void paintEvent(QPaintEvent *pEvent);

};
#endif // CZUJNIKI_HH
