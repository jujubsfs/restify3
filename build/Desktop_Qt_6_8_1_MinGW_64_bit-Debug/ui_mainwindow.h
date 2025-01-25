/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pushButton_2
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btnComecar;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *pushButton_2)
    {
        if (pushButton_2->objectName().isEmpty())
            pushButton_2->setObjectName("pushButton_2");
        pushButton_2->resize(850, 560);
        centralwidget = new QWidget(pushButton_2);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(318, 264, 311, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(36);
        font.setItalic(true);
        label->setFont(font);
        label->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label->setStyleSheet(QString::fromUtf8("color: rgb(245, 233, 195);"));
        btnComecar = new QPushButton(centralwidget);
        btnComecar->setObjectName("btnComecar");
        btnComecar->setGeometry(QRect(350, 410, 150, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Print")});
        btnComecar->setFont(font1);
        btnComecar->setStyleSheet(QString::fromUtf8("background-color : rgb(255, 249, 87)"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 40, 350, 200));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imagem/logotipo-removebg-preview.png")));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(600, -60, 381, 341));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imagem/em cima.png")));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-10, 50, 261, 461));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imagem/esquerda.png")));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(610, 210, 471, 411));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/imagem/embaixo.png")));
        pushButton_2->setCentralWidget(centralwidget);
        btnComecar->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_2->raise();
        label->raise();
        menubar = new QMenuBar(pushButton_2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 850, 26));
        pushButton_2->setMenuBar(menubar);
        statusbar = new QStatusBar(pushButton_2);
        statusbar->setObjectName("statusbar");
        pushButton_2->setStatusBar(statusbar);

        retranslateUi(pushButton_2);

        QMetaObject::connectSlotsByName(pushButton_2);
    } // setupUi

    void retranslateUi(QMainWindow *pushButton_2)
    {
        pushButton_2->setWindowTitle(QCoreApplication::translate("pushButton_2", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("pushButton_2", "RESTIFY", nullptr));
        btnComecar->setText(QCoreApplication::translate("pushButton_2", "Come\303\247ar", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pushButton_2: public Ui_pushButton_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
