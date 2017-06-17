#include "info.hh"
#include<QVBoxLayout>
#include<QString>
#include<QMessageBox>

extern Data *dane;

/*!
 * \brief Konstruktor klasy Info.
 *
 * \param parent - wskaźnik na rodzica
 */
Info::Info(QWidget *parent ) : QMessageBox(parent)
{

setGeometry(500,300,500,300);
}
/*!

 */

void Info::showText(const int &i)
{

    this->setText(QString("Sensors at chosen point:           \n\n Enc1 = %1%\n Enc2 = %2%\n F1 = %3\n F2 = %4\n F3 = %5\n F4 = %6\n F5 = %7\n F6 = %8\n F7 = %9 \n Czas(sec) = %10 ").arg(dane->enc1().at(i)).arg(dane->enc2().at(i)).arg(dane->foto1().at(i))
                  .arg(dane->foto2().at(i)).arg(dane->foto3().at(i)).arg(dane->foto4().at(i)).arg(dane->foto5().at(i)).arg(dane->foto6().at(i)).arg(dane->foto7().at(i)).arg(dane->timeval().at(i)));
}
