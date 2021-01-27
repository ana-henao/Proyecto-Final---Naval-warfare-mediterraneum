/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView_2;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView_3;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QPushButton *izq1;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *der1;
    QPushButton *up1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *down1;
    QVBoxLayout *verticalLayout_3;
    QComboBox *tipo1;
    QPushButton *Disparar1;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QComboBox *tipo2;
    QPushButton *Disparar2;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *der2;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *izq2;
    QPushButton *up2;
    QPushButton *down2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 803);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setMinimumSize(QSize(700, 400));
        graphicsView_2->setMaximumSize(QSize(16777215, 440));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/fondo azul mar blue wallpaper (46)-829110_800.jpeg);"));

        gridLayout->addWidget(graphicsView_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        graphicsView_3 = new QGraphicsView(centralwidget);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setMinimumSize(QSize(200, 50));
        graphicsView_3->setMaximumSize(QSize(200, 50));
        graphicsView_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(graphicsView_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, -1, 5, -1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 34, 255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMinimumSize(QSize(200, 50));
        graphicsView->setMaximumSize(QSize(200, 50));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(graphicsView);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 3);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(8, -1, 8, -1);
        izq1 = new QPushButton(centralwidget);
        izq1->setObjectName(QString::fromUtf8("izq1"));
        izq1->setMinimumSize(QSize(40, 40));
        izq1->setMaximumSize(QSize(16777215, 16777215));
        izq1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pictures/izq.png"), QSize(), QIcon::Normal, QIcon::Off);
        izq1->setIcon(icon);
        izq1->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(izq1, 3, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 4, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 3, 1, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaximumSize(QSize(16777215, 16777215));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(comboBox, 1, 0, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(10, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 4, 2, 1, 1);

        der1 = new QPushButton(centralwidget);
        der1->setObjectName(QString::fromUtf8("der1"));
        der1->setMinimumSize(QSize(40, 40));
        der1->setMaximumSize(QSize(70, 16777215));
        der1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pictures/der.png"), QSize(), QIcon::Normal, QIcon::Off);
        der1->setIcon(icon1);
        der1->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(der1, 3, 2, 1, 1);

        up1 = new QPushButton(centralwidget);
        up1->setObjectName(QString::fromUtf8("up1"));
        up1->setMinimumSize(QSize(40, 40));
        up1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pictures/arriba.png"), QSize(), QIcon::Normal, QIcon::Off);
        up1->setIcon(icon2);
        up1->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(up1, 2, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(55, 0));
        lineEdit->setMaximumSize(QSize(55, 16777215));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(lineEdit);


        gridLayout_2->addLayout(verticalLayout_2, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 2, 2, 1, 1);

        down1 = new QPushButton(centralwidget);
        down1->setObjectName(QString::fromUtf8("down1"));
        down1->setMinimumSize(QSize(40, 40));
        down1->setMaximumSize(QSize(16777215, 40));
        down1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pictures/abajo.png"), QSize(), QIcon::Normal, QIcon::Off);
        down1->setIcon(icon3);
        down1->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(down1, 4, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 6, 5, -1);
        tipo1 = new QComboBox(centralwidget);
        tipo1->addItem(QString());
        tipo1->addItem(QString());
        tipo1->setObjectName(QString::fromUtf8("tipo1"));

        verticalLayout_3->addWidget(tipo1);

        Disparar1 = new QPushButton(centralwidget);
        Disparar1->setObjectName(QString::fromUtf8("Disparar1"));
        Disparar1->setMinimumSize(QSize(0, 40));
        Disparar1->setMaximumSize(QSize(16777215, 40));
        Disparar1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
""));

        verticalLayout_3->addWidget(Disparar1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 6, 5, -1);
        tipo2 = new QComboBox(centralwidget);
        tipo2->addItem(QString());
        tipo2->addItem(QString());
        tipo2->setObjectName(QString::fromUtf8("tipo2"));

        verticalLayout_4->addWidget(tipo2);

        Disparar2 = new QPushButton(centralwidget);
        Disparar2->setObjectName(QString::fromUtf8("Disparar2"));
        Disparar2->setMinimumSize(QSize(0, 40));
        Disparar2->setMaximumSize(QSize(16777215, 40));
        Disparar2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));

        verticalLayout_4->addWidget(Disparar2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(8, -1, 8, -1);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 2, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_12, 4, 0, 1, 1);

        der2 = new QPushButton(centralwidget);
        der2->setObjectName(QString::fromUtf8("der2"));
        der2->setMinimumSize(QSize(40, 40));
        der2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        der2->setIcon(icon1);
        der2->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(der2, 3, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_11, 3, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 2, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_13, 4, 2, 1, 1);

        izq2 = new QPushButton(centralwidget);
        izq2->setObjectName(QString::fromUtf8("izq2"));
        izq2->setMinimumSize(QSize(40, 40));
        izq2->setMaximumSize(QSize(70, 16777215));
        izq2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        izq2->setIcon(icon);
        izq2->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(izq2, 3, 0, 1, 1);

        up2 = new QPushButton(centralwidget);
        up2->setObjectName(QString::fromUtf8("up2"));
        up2->setMinimumSize(QSize(40, 40));
        up2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        up2->setIcon(icon2);
        up2->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(up2, 2, 1, 1, 1);

        down2 = new QPushButton(centralwidget);
        down2->setObjectName(QString::fromUtf8("down2"));
        down2->setMinimumSize(QSize(40, 40));
        down2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        down2->setIcon(icon3);
        down2->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(down2, 4, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(70, 16777215));

        verticalLayout_5->addWidget(label_3);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(55, 0));
        lineEdit_2->setMaximumSize(QSize(55, 16777215));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(lineEdit_2);


        gridLayout_3->addLayout(verticalLayout_5, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(comboBox_2, 1, 1, 1, 2);


        horizontalLayout_2->addLayout(gridLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nivel", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Iniciar", nullptr));
        izq1->setText(QString());
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Seleccione Barco", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Balsa", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "Vela", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "Kayak", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "Barco Peque\303\261o", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "Barco Largo", nullptr));

        comboBox->setCurrentText(QApplication::translate("MainWindow", "Seleccione Barco", nullptr));
        der1->setText(QString());
        up1->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Angulo", nullptr));
        down1->setText(QString());
        tipo1->setItemText(0, QApplication::translate("MainWindow", "Parab\303\263lico", nullptr));
        tipo1->setItemText(1, QApplication::translate("MainWindow", "MRUA", nullptr));

        Disparar1->setText(QApplication::translate("MainWindow", "Disparar", nullptr));
        tipo2->setItemText(0, QApplication::translate("MainWindow", "Parab\303\263lico", nullptr));
        tipo2->setItemText(1, QApplication::translate("MainWindow", "MRUA", nullptr));

        Disparar2->setText(QApplication::translate("MainWindow", "Disparar", nullptr));
        der2->setText(QString());
        izq2->setText(QString());
        up2->setText(QString());
        down2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Angulo", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "Seleccione Barco", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "Balsa", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("MainWindow", "Vela", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("MainWindow", "Kayak", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("MainWindow", "Barco Peque\303\261o", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("MainWindow", "Barco Largo", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
