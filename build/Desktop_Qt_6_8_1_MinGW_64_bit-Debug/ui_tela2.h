/********************************************************************************
** Form generated from reading UI file 'tela2.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA2_H
#define UI_TELA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela2
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_5;

    void setupUi(QDialog *tela2)
    {
        if (tela2->objectName().isEmpty())
            tela2->setObjectName("tela2");
        tela2->resize(850, 560);
        tela2->setStyleSheet(QString::fromUtf8("background-color: #556B2F"));
        label = new QLabel(tela2);
        label->setObjectName("label");
        label->setGeometry(QRect(600, -60, 381, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagem/em cima.png")));
        label_2 = new QLabel(tela2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 30, 361, 200));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imagem/logotipo-removebg-preview.png")));
        label_3 = new QLabel(tela2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(610, 210, 471, 411));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imagem/embaixo.png")));
        label_4 = new QLabel(tela2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-10, 50, 261, 461));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imagem/esquerda.png")));
        pushButton = new QPushButton(tela2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(355, 430, 150, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255,249,87)"));
        label_5 = new QLabel(tela2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(325, 290, 291, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font1.setPointSize(36);
        font1.setItalic(true);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(245, 233, 195)"));

        retranslateUi(tela2);

        QMetaObject::connectSlotsByName(tela2);
    } // setupUi

    void retranslateUi(QDialog *tela2)
    {
        tela2->setWindowTitle(QCoreApplication::translate("tela2", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("tela2", "Come\303\247ar", nullptr));
        label_5->setText(QCoreApplication::translate("tela2", "RESTIFY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela2: public Ui_tela2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA2_H
