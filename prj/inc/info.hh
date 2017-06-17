#ifndef INFO_HH
#define INFO_HH

#include<QLabel>
#include<QPushButton>
#include <QWidget>
#include<QMessageBox>
#include"data.hh"

/*!
 * \brief Okienko wyswitlajace informacje w danym punkcie trasy, dziedziczy po QMessageBox
 */
class Info : public QMessageBox
{
    Q_OBJECT

public:
    /*!
     * \brief Konstruktor klasy Info
     * \param parent - wskaźnik na rodzica
     */
    explicit Info(QWidget *parent = nullptr);

signals:

public slots:
    /*!
     * \brief Wyświetlanie danych w okienku
     * \param i - indeks punktu który jest wyswietlany
     */
    void showText(const int &i);
};

#endif // INFO_HH
