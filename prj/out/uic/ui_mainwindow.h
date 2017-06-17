/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "czujniki.hh"
#include "trasa.hh"
#include "wykres.hh"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *start_button;
    QPushButton *stop_button;
    QPushButton *clear_button;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    Czujniki *foto_label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    Trasa *trasa;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSlider *skaler;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_enc1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QProgressBar *p_bar_enc1;
    QLabel *label_3;
    Wykres *plot_enc1;
    QLabel *label_enc2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QProgressBar *p_bar_enc2;
    QLabel *label_2;
    Wykres *plot_enc2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(1042, 749);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setWindowOpacity(1);
        MainWindow->setAutoFillBackground(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_7 = new QHBoxLayout(centralWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        start_button = new QPushButton(centralWidget);
        start_button->setObjectName(QString::fromUtf8("start_button"));

        horizontalLayout_6->addWidget(start_button);

        stop_button = new QPushButton(centralWidget);
        stop_button->setObjectName(QString::fromUtf8("stop_button"));

        horizontalLayout_6->addWidget(stop_button);

        clear_button = new QPushButton(centralWidget);
        clear_button->setObjectName(QString::fromUtf8("clear_button"));

        horizontalLayout_6->addWidget(clear_button);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        foto_label = new Czujniki(centralWidget);
        foto_label->setObjectName(QString::fromUtf8("foto_label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(foto_label->sizePolicy().hasHeightForWidth());
        foto_label->setSizePolicy(sizePolicy);
        foto_label->setPixmap(QPixmap(QString::fromUtf8(":/LED/img/PCB.png")));

        horizontalLayout_5->addWidget(foto_label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_3->addWidget(label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        trasa = new Trasa(centralWidget);
        trasa->setObjectName(QString::fromUtf8("trasa"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(trasa->sizePolicy().hasHeightForWidth());
        trasa->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(trasa);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label);

        skaler = new QSlider(centralWidget);
        skaler->setObjectName(QString::fromUtf8("skaler"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(skaler->sizePolicy().hasHeightForWidth());
        skaler->setSizePolicy(sizePolicy2);
        skaler->setValue(50);
        skaler->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(skaler);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_3);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_enc1 = new QLabel(centralWidget);
        label_enc1->setObjectName(QString::fromUtf8("label_enc1"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_enc1->sizePolicy().hasHeightForWidth());
        label_enc1->setSizePolicy(sizePolicy3);
        label_enc1->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_5->addWidget(label_enc1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        p_bar_enc1 = new QProgressBar(centralWidget);
        p_bar_enc1->setObjectName(QString::fromUtf8("p_bar_enc1"));
        p_bar_enc1->setValue(0);
        p_bar_enc1->setTextVisible(false);
        p_bar_enc1->setOrientation(Qt::Vertical);
        p_bar_enc1->setTextDirection(QProgressBar::BottomToTop);

        verticalLayout_4->addWidget(p_bar_enc1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_4);

        plot_enc1 = new Wykres(centralWidget);
        plot_enc1->setObjectName(QString::fromUtf8("plot_enc1"));
        sizePolicy1.setHeightForWidth(plot_enc1->sizePolicy().hasHeightForWidth());
        plot_enc1->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(plot_enc1);


        verticalLayout_5->addLayout(horizontalLayout_2);

        label_enc2 = new QLabel(centralWidget);
        label_enc2->setObjectName(QString::fromUtf8("label_enc2"));
        sizePolicy3.setHeightForWidth(label_enc2->sizePolicy().hasHeightForWidth());
        label_enc2->setSizePolicy(sizePolicy3);
        label_enc2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_5->addWidget(label_enc2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        p_bar_enc2 = new QProgressBar(centralWidget);
        p_bar_enc2->setObjectName(QString::fromUtf8("p_bar_enc2"));
        p_bar_enc2->setValue(0);
        p_bar_enc2->setTextVisible(false);
        p_bar_enc2->setOrientation(Qt::Vertical);
        p_bar_enc2->setInvertedAppearance(false);
        p_bar_enc2->setTextDirection(QProgressBar::BottomToTop);

        verticalLayout->addWidget(p_bar_enc2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        plot_enc2 = new Wykres(centralWidget);
        plot_enc2->setObjectName(QString::fromUtf8("plot_enc2"));
        sizePolicy1.setHeightForWidth(plot_enc2->sizePolicy().hasHeightForWidth());
        plot_enc2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(plot_enc2);


        verticalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_7->addLayout(verticalLayout_5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1042, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(p_bar_enc2, SIGNAL(valueChanged(int)), label_2, SLOT(setNum(int)));
        QObject::connect(p_bar_enc1, SIGNAL(valueChanged(int)), label_3, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        start_button->setText(QApplication::translate("MainWindow", "START", 0, QApplication::UnicodeUTF8));
        stop_button->setText(QApplication::translate("MainWindow", "STOP", 0, QApplication::UnicodeUTF8));
        clear_button->setText(QApplication::translate("MainWindow", "Clear data", 0, QApplication::UnicodeUTF8));
        foto_label->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "ROBOT's ROUTE", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "set scale:", 0, QApplication::UnicodeUTF8));
        label_enc1->setText(QApplication::translate("MainWindow", "LEFT ENCODER", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        plot_enc1->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Wykres</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_enc2->setText(QApplication::translate("MainWindow", "RIGHT ENCODER", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
