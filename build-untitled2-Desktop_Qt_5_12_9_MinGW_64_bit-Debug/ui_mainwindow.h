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
#include <QtWidgets/QDoubleSpinBox>
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
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *up1;
    QPushButton *down1;
    QPushButton *izq1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *angulo1;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *der1;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QComboBox *tipo1;
    QPushButton *Disparar1;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *nuevaP;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *cargar;
    QPushButton *cargarP;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *eliminar;
    QPushButton *eliminarP;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *nombrepartida;
    QPushButton *guardarP;
    QPushButton *reiniciarP;
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
    QDoubleSpinBox *angulo2;
    QComboBox *comboBox_2;
    QGraphicsView *graphicsView_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QGraphicsView *disparos1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *puntaje1;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *nivel;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_7;
    QGraphicsView *disparos2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *puntaje2;
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
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 3);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(8, -1, 8, -1);
        horizontalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 5, 0, 1, 1);

        up1 = new QPushButton(centralwidget);
        up1->setObjectName(QString::fromUtf8("up1"));
        up1->setMinimumSize(QSize(40, 40));
        up1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pictures/arriba.png"), QSize(), QIcon::Normal, QIcon::Off);
        up1->setIcon(icon);
        up1->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(up1, 3, 1, 1, 1);

        down1 = new QPushButton(centralwidget);
        down1->setObjectName(QString::fromUtf8("down1"));
        down1->setMinimumSize(QSize(40, 40));
        down1->setMaximumSize(QSize(16777215, 40));
        down1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pictures/abajo.png"), QSize(), QIcon::Normal, QIcon::Off);
        down1->setIcon(icon1);
        down1->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(down1, 5, 1, 1, 1);

        izq1 = new QPushButton(centralwidget);
        izq1->setObjectName(QString::fromUtf8("izq1"));
        izq1->setMinimumSize(QSize(40, 40));
        izq1->setMaximumSize(QSize(16777215, 16777215));
        izq1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pictures/izq.png"), QSize(), QIcon::Normal, QIcon::Off);
        izq1->setIcon(icon2);
        izq1->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(izq1, 4, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label_2);

        angulo1 = new QDoubleSpinBox(centralwidget);
        angulo1->setObjectName(QString::fromUtf8("angulo1"));
        angulo1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        angulo1->setMaximum(90.000000000000000);

        verticalLayout_2->addWidget(angulo1);


        gridLayout_2->addLayout(verticalLayout_2, 1, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 3, 2, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMaximumSize(QSize(16777215, 16777215));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(comboBox, 1, 0, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 4, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(10, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 5, 2, 1, 1);

        der1 = new QPushButton(centralwidget);
        der1->setObjectName(QString::fromUtf8("der1"));
        der1->setMinimumSize(QSize(40, 40));
        der1->setMaximumSize(QSize(70, 16777215));
        der1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pictures/der.png"), QSize(), QIcon::Normal, QIcon::Off);
        der1->setIcon(icon3);
        der1->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(der1, 4, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 3, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 6, 5, -1);
        tipo1 = new QComboBox(centralwidget);
        tipo1->addItem(QString());
        tipo1->addItem(QString());
        tipo1->setObjectName(QString::fromUtf8("tipo1"));
        tipo1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

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

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(5, -1, 5, -1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_9->addWidget(pushButton_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_8->setContentsMargins(-1, 10, -1, 10);
        nuevaP = new QPushButton(centralwidget);
        nuevaP->setObjectName(QString::fromUtf8("nuevaP"));

        verticalLayout_8->addWidget(nuevaP);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 5, -1, 5);
        cargar = new QComboBox(centralwidget);
        cargar->addItem(QString());
        cargar->setObjectName(QString::fromUtf8("cargar"));
        cargar->setMinimumSize(QSize(100, 0));
        cargar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(cargar);

        cargarP = new QPushButton(centralwidget);
        cargarP->setObjectName(QString::fromUtf8("cargarP"));

        horizontalLayout_8->addWidget(cargarP);


        verticalLayout_8->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 5, -1, 5);
        eliminar = new QComboBox(centralwidget);
        eliminar->addItem(QString());
        eliminar->setObjectName(QString::fromUtf8("eliminar"));
        eliminar->setMinimumSize(QSize(100, 0));
        eliminar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(eliminar);

        eliminarP = new QPushButton(centralwidget);
        eliminarP->setObjectName(QString::fromUtf8("eliminarP"));

        horizontalLayout_7->addWidget(eliminarP);


        verticalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 5, -1, 5);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        nombrepartida = new QLineEdit(centralwidget);
        nombrepartida->setObjectName(QString::fromUtf8("nombrepartida"));
        nombrepartida->setMinimumSize(QSize(80, 0));
        nombrepartida->setMaximumSize(QSize(520, 16777215));
        nombrepartida->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(nombrepartida);

        guardarP = new QPushButton(centralwidget);
        guardarP->setObjectName(QString::fromUtf8("guardarP"));
        guardarP->setMinimumSize(QSize(50, 0));

        horizontalLayout_6->addWidget(guardarP);


        verticalLayout_8->addLayout(horizontalLayout_6);

        reiniciarP = new QPushButton(centralwidget);
        reiniciarP->setObjectName(QString::fromUtf8("reiniciarP"));

        verticalLayout_8->addWidget(reiniciarP);


        verticalLayout_9->addLayout(verticalLayout_8);


        horizontalLayout_2->addLayout(verticalLayout_9);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 6, 5, -1);
        tipo2 = new QComboBox(centralwidget);
        tipo2->addItem(QString());
        tipo2->addItem(QString());
        tipo2->setObjectName(QString::fromUtf8("tipo2"));
        tipo2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));

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
        der2->setIcon(icon3);
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
        izq2->setIcon(icon2);
        izq2->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(izq2, 3, 0, 1, 1);

        up2 = new QPushButton(centralwidget);
        up2->setObjectName(QString::fromUtf8("up2"));
        up2->setMinimumSize(QSize(40, 40));
        up2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        up2->setIcon(icon);
        up2->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(up2, 2, 1, 1, 1);

        down2 = new QPushButton(centralwidget);
        down2->setObjectName(QString::fromUtf8("down2"));
        down2->setMinimumSize(QSize(40, 40));
        down2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        down2->setIcon(icon1);
        down2->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(down2, 4, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(70, 16777215));

        verticalLayout_5->addWidget(label_3);

        angulo2 = new QDoubleSpinBox(centralwidget);
        angulo2->setObjectName(QString::fromUtf8("angulo2"));
        angulo2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        angulo2->setMinimum(90.000000000000000);
        angulo2->setMaximum(180.000000000000000);

        verticalLayout_5->addWidget(angulo2);


        gridLayout_3->addLayout(verticalLayout_5, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(comboBox_2, 1, 1, 1, 2);


        horizontalLayout_2->addLayout(gridLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setMinimumSize(QSize(700, 405));
        graphicsView_2->setMaximumSize(QSize(16777215, 405));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/fondo azul mar blue wallpaper (46)-829110_800.jpeg);"));

        gridLayout->addWidget(graphicsView_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_6->setContentsMargins(5, -1, 5, -1);
        disparos1 = new QGraphicsView(centralwidget);
        disparos1->setObjectName(QString::fromUtf8("disparos1"));
        disparos1->setMinimumSize(QSize(200, 50));
        disparos1->setMaximumSize(QSize(200, 50));
        disparos1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 255, 255);"));

        verticalLayout_6->addWidget(disparos1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_3->setContentsMargins(-1, -1, 0, -1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(13);
        label_5->setFont(font);

        horizontalLayout_3->addWidget(label_5);

        puntaje1 = new QLabel(centralwidget);
        puntaje1->setObjectName(QString::fromUtf8("puntaje1"));
        puntaje1->setMaximumSize(QSize(16777215, 50));
        puntaje1->setFont(font);

        horizontalLayout_3->addWidget(puntaje1);


        verticalLayout_6->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(3, -1, 5, -1);
        nivel = new QLabel(centralwidget);
        nivel->setObjectName(QString::fromUtf8("nivel"));
        nivel->setMaximumSize(QSize(16777215, 50));
        nivel->setFont(font);
        nivel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(nivel);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(16777215, 50));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 34, 255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_7->setContentsMargins(5, -1, 5, -1);
        disparos2 = new QGraphicsView(centralwidget);
        disparos2->setObjectName(QString::fromUtf8("disparos2"));
        disparos2->setMinimumSize(QSize(200, 50));
        disparos2->setMaximumSize(QSize(200, 50));
        disparos2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
""));

        verticalLayout_7->addWidget(disparos2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 50));
        label_7->setFont(font);

        horizontalLayout_4->addWidget(label_7);

        puntaje2 = new QLabel(centralwidget);
        puntaje2->setObjectName(QString::fromUtf8("puntaje2"));
        puntaje2->setMaximumSize(QSize(16777215, 50));
        puntaje2->setFont(font);

        horizontalLayout_4->addWidget(puntaje2);


        verticalLayout_7->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_7);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

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
        up1->setText(QString());
        down1->setText(QString());
        izq1->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Angulo/a", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Seleccione Barco", nullptr));

        comboBox->setCurrentText(QApplication::translate("MainWindow", "Seleccione Barco", nullptr));
        der1->setText(QString());
        tipo1->setItemText(0, QApplication::translate("MainWindow", "Parab\303\263lico", nullptr));
        tipo1->setItemText(1, QApplication::translate("MainWindow", "MRUA", nullptr));

        Disparar1->setText(QApplication::translate("MainWindow", "Disparar", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Menu", nullptr));
        nuevaP->setText(QApplication::translate("MainWindow", "Nueva Partida", nullptr));
        cargar->setItemText(0, QApplication::translate("MainWindow", "Seleccione Partida", nullptr));

        cargarP->setText(QApplication::translate("MainWindow", "Cargar Partida", nullptr));
        eliminar->setItemText(0, QApplication::translate("MainWindow", "Seleccione Partida", nullptr));

        eliminarP->setText(QApplication::translate("MainWindow", "Eliminar Partida", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nombre", nullptr));
        guardarP->setText(QApplication::translate("MainWindow", "Guardar", nullptr));
        reiniciarP->setText(QApplication::translate("MainWindow", "Reiniciar Partida", nullptr));
        tipo2->setItemText(0, QApplication::translate("MainWindow", "Parab\303\263lico", nullptr));
        tipo2->setItemText(1, QApplication::translate("MainWindow", "MRUA", nullptr));

        Disparar2->setText(QApplication::translate("MainWindow", "Disparar", nullptr));
        der2->setText(QString());
        izq2->setText(QString());
        up2->setText(QString());
        down2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Angulo/a", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "Seleccione Barco", nullptr));

        label_5->setText(QApplication::translate("MainWindow", "Puntaje", nullptr));
        puntaje1->setText(QApplication::translate("MainWindow", "0", nullptr));
        nivel->setText(QApplication::translate("MainWindow", "Nivel", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Iniciar", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Puntaje", nullptr));
        puntaje2->setText(QApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
