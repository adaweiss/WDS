#include "mainwindow.h"

#include <QApplication>
#include <QTime>
#include <QMessageBox>
#include <fstream>
#include <iostream>
#include <string>



using namespace std;


Data *dane=new Data;


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setWindowTitle("LINE FOLLOWER SENSORS");

    return a.exec();
}
