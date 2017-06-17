
#ifndef DATA_HH
#define DATA_HH
#include<QVector>
#include<QString>
#include<string>

#define TIME_PRESCALER 50
#define BUFOR_LENGTH 19

using namespace std;
/*!
 * \brief Klasa przechowuje w wektorach zmienne typu double (dla enkoderów) i bool (dla czujników linii) odpowiadające poszczególnym czujnikom oraz wektor przechowujacy chwile czasu w których dokonano pomiaru (w sec)
 */
class Data
{
private:
    /*!
     * \brief wektor przechowujacy wartoscii predkosci wyrazonej w procentach (obr/sec predkości maksymalnej) z enkodera lewego
     */
    QVector<double> qv_enc1;
    /*!
     * \brief wektor przechowujący wartości predkosci wyrażonej w procentach (obr/sec predkości maksymalnej) z enkodera prawego
     */
    QVector<double> qv_enc2;
   // QVector<double> qv_t;
    /*!
     * \brief wektor przechowujacy odczyty czujnika linii pierwszego od lewej
     */
    QVector<bool> qv_foto1;

    /*!
     * \brief wektor przechowujacy odczyty czujnika linii drugiego od lewej
     */
    QVector<bool> qv_foto2;
    /*!
     * \brief wektor przechowujacy odczyty czujnika linii trzeciego od lewej
     */
    QVector<bool> qv_foto3;
    /*!
     * \brief wektor przechowujacy odczyty czujnika linii czwartego od lewej
     */
    QVector<bool> qv_foto4;
    /*!
     * \brief wektor przechowujacy odczyty czujnika linii piatego od lewej
     */
    QVector<bool> qv_foto5;
    /*!
     * \brief wektor przechowujacy odczyty czujnika linii szóstego od lewej
     */
    QVector<bool> qv_foto6;
    /*!
     * \brief wektor przechowujacy odczyty czujnika linii siódmego od lewej
     */
    QVector<bool> qv_foto7;
    /*!
     * \brief Wektor przechowujący dane o czasie w sec
     */
    QVector<double> time;
public:
    Data();
    bool addData(const string &bufor, const double &t);
    bool checkData(const string &bufor);
    void clearData();
    /*!
     * \brief Metoda zwracająca wektor z wartościami prędkości z encodera lewego
     * \return wektor qv_enc1
     */
    const QVector<double>  enc1(){return qv_enc1;}
    /*!
     * \brief Metoda zwracająca wektor z wartościami prędkości z encodera prawego
     * \return wektor qv_enc2
     */
    const QVector<double>  enc2(){return qv_enc2;}
    /*!
     * \brief Metoda zwracająca wektor z wektor z wartosciami z czujnika linii 1
     * \return wektor qv_foto1
     */
    const QVector<bool>  foto1(){return qv_foto1;}
    /*!
     * \brief Metoda zwracająca wektor z wektor z wartosciami z czujnika linii 2
     * \return wektor qv_foto2
     */
    const  QVector<bool>  foto2(){return qv_foto2;}
    /*!
     * \brief Metoda zwracająca wektor z wektor z wartosciami z czujnika linii 3
     * \return wektor qv_foto3
     */
    const QVector<bool>  foto3(){return qv_foto3;}
    /*!
     * \brief Metoda zwracająca wektor z wektor z wartosciami z czujnika linii 4
     * \return wektor qv_foto4
     */
    const QVector<bool>  foto4(){return qv_foto4;}
    /*!
     * \brief Metoda zwracająca wektor z wektor z wartosciami z czujnika linii 5
     * \return wektor qv_foto5
     */
    const QVector<bool>  foto5(){return qv_foto5;}
    /*!
     * \brief Metoda zwracająca wektor z wektor z wartosciami z czujnika linii 6
     * \return wektor qv_foto6
     */
    const QVector<bool>  foto6(){return qv_foto6;}
    /*!
     * \brief Metoda zwracająca wektor z wektor z wartosciami z czujnika linii 7
     * \return wektor qv_foto7
     */
    const QVector<bool>  foto7(){return qv_foto7;}
    /*!
     * \brief Metoda zwracająca wektor z chwilami czasowymi w których nastapiły pomiary
     * \return wektor time
     */
    const QVector<double>  timeval(){return time;}
};




#endif // DATA_HH
