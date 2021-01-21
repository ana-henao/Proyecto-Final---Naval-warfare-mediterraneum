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
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_6;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_10;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_11;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QComboBox *comboBox_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
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
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(40, 40));
        pushButton_4->setMaximumSize(QSize(16777215, 16777215));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pictures/izq.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(pushButton_4, 3, 0, 1, 1);

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

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(40, 40));
        pushButton_5->setMaximumSize(QSize(70, 16777215));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pictures/der.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(pushButton_5, 3, 2, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(40, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pictures/arriba.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(pushButton_2, 2, 1, 1, 1);

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

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(40, 40));
        pushButton_6->setMaximumSize(QSize(16777215, 40));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pictures/abajo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon3);
        pushButton_6->setIconSize(QSize(40, 40));

        gridLayout_2->addWidget(pushButton_6, 4, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 6, 5, -1);
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(0, 40));
        pushButton_10->setMaximumSize(QSize(16777215, 40));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
""));

        verticalLayout_3->addWidget(pushButton_10);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 6, 5, -1);
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(0, 40));
        pushButton_11->setMaximumSize(QSize(16777215, 40));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));

        verticalLayout_4->addWidget(pushButton_11);

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

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(40, 40));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_8->setIcon(icon1);
        pushButton_8->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(pushButton_8, 3, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_11, 3, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 2, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_13, 4, 2, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(40, 40));
        pushButton_7->setMaximumSize(QSize(70, 16777215));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(40, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(pushButton_3, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(40, 40));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_9->setIcon(icon3);
        pushButton_9->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(pushButton_9, 4, 1, 1, 1);

        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(comboBox_2, 1, 1, 1, 2);

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
        pushButton_4->setText(QString());
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Seleccione Barco", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Balsa", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "Vela", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "Kayak", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "Barco Peque\303\261o", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "Barco Largo", nullptr));

        comboBox->setCurrentText(QApplication::translate("MainWindow", "Seleccione Barco", nullptr));
        pushButton_5->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Angulo", nullptr));
        pushButton_6->setText(QString());
        pushButton_10->setText(QApplication::translate("MainWindow", "Disparar", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "Disparar", nullptr));
        pushButton_8->setText(QString());
        pushButton_7->setText(QString());
        pushButton_3->setText(QString());
        pushButton_9->setText(QString());
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "Seleccione Barco", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "Balsa", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("MainWindow", "Vela", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("MainWindow", "Kayak", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("MainWindow", "Barco peque\303\261o", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("MainWindow", "Barco Largo", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "Angulo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
