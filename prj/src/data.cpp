#include "data.hh"
#include<iostream>

using namespace std;

Data::Data()
{

}
/*!
 * \brief Metoda wczytująca dane z bufora odczytanego z portu szeregowego do wektorów
 *
 * \param bufor - referencja do odczytanego bufora danych odczytany z urzadzenia string z danymi
 * \return zwraca true gdy dane zostały poprawnie dodane a false gdy się nie powiodło dodawanie
 */
bool Data::addData(const string &bufor, const double &t)
{
    bool ok;

    if(checkData(bufor)){

        for(int i = 0; i < 2; ++i) {
            string subString = bufor.substr(i*4+1, 4);
            QString *str=new QString(subString.c_str());
            int odczyt=str->toInt(&ok,16);
                switch(i){
                case 0: qv_enc1.append(odczyt/(655.36));
                    //cout<<"dodano enc1";
                    break;
                case 1: qv_enc2.append(odczyt/655.36);
                    break;

                }

                }
        for(int i = 2; i < 9; ++i) {
            string subString = bufor.substr(i+9, 1);
            QString *str=new QString(subString.c_str());
            bool odczyt;
            str->toInt(&ok,10) ? odczyt=true: odczyt=false;
                switch(i){
                case 2: qv_foto1.append(odczyt);
                    break;
                case 3: qv_foto2.append(odczyt);
                    break;
                case 4: qv_foto3.append(odczyt);
                    break;
                case 5: qv_foto4.append(odczyt);
                    break;
                case 6: qv_foto5.append(odczyt);
                    break;
                case 7: qv_foto6.append(odczyt);
                    break;
                case 8: qv_foto7.append(odczyt);
                    break;

                }

                }
        time.append(t);
        return true;
    }
return false;
}
/*!
 * \brief Metoda dokonuje sprawdzenia poprawnosci otrzymanej wiadomosci, długosc+suma kontrolna.
 *
 * Suma kontrolna liczona jest jako suma wartości z wszystkich czujników modulo 256. Dodatkowo sprawdzana jest też długość stinga.
 *
 * RAMKA:
 * string w postaci:
 * x + (4*enc1 w hex) +(4*enc2 w hex)+ 7*foto(0 lub 1)+ sumakontrolna(2*hex)
 *
 * \param bufor - referencja do stringa odczytannego z urzadzenia
 * \return zwraca true gdy dane poprawne lub false jesli niepoprawne
 */
bool Data::checkData(const string &bufor)
{

    bool ok;
    if(bufor.substr(0,1)!="x"||bufor.length()!=BUFOR_LENGTH) {
        cout<<endl<<"Error! dlugosc! "<<bufor.length()<<endl;
        //cout<<bufor<<endl;
        return false;
    }
    else{
    int control_sum=0;
    for(int i = 0; i < 2; ++i) {
        string subString = bufor.substr(i*4+1, 4);
        QString *str=new QString(subString.c_str());
        int odczyt=str->toInt(&ok,16);
        control_sum+=odczyt;
            }
    for(int i = 2; i < 9; ++i) {
        string subString = bufor.substr(i+7, 1);
        QString *str=new QString(subString.c_str());
        int odczyt=str->toInt(&ok,10);
        control_sum+=odczyt;
            }
    string subString = bufor.substr(16, 2);
    QString *str=new QString(subString.c_str());
    int sum=str->toInt(&ok,16);
    if (sum==control_sum%256) return true;
    else {

        cout<<"Error! zła suma"<<endl;
        return false;

    }
    }
    return false;
}

/*!
 * \brief Metoda usuwa dane z wszystkich wektorów.
 */
void Data::clearData()
{
    qv_enc1.clear();
    qv_enc2.clear();
    qv_foto1.clear();
    qv_foto2.clear();
    qv_foto3.clear();
    qv_foto4.clear();
    qv_foto5.clear();
    qv_foto6.clear();
    qv_foto7.clear();
    time.clear();

}

