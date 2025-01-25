/********************************************************************************
** Form generated from reading UI file 'tela1.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELA1_H
#define UI_TELA1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_tela1
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *tela1)
    {
        if (tela1->objectName().isEmpty())
            tela1->setObjectName("tela1");
        tela1->resize(850, 560);
        tela1->setStyleSheet(QString::fromUtf8("background-color: #556B2F"));
        label = new QLabel(tela1);
        label->setObjectName("label");
        label->setGeometry(QRect(600, -60, 381, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagem/em cima.png")));
        label_2 = new QLabel(tela1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-10, 50, 261, 461));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imagem/esquerda.png")));
        label_3 = new QLabel(tela1);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(610, 210, 471, 411));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imagem/embaixo.png")));
        label_4 = new QLabel(tela1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(240, 40, 360, 200));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imagem/logotipo-removebg-preview.png")));
        lineEdit = new QLineEdit(tela1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(340, 320, 200, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255,249,87)"));
        lineEdit_2 = new QLineEdit(tela1);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(340, 380, 200, 30));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255,249,87)"));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);

        retranslateUi(tela1);

        QMetaObject::connectSlotsByName(tela1);
    } // setupUi

    void retranslateUi(QDialog *tela1)
    {
        tela1->setWindowTitle(QCoreApplication::translate("tela1", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("tela1", "Login", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("tela1", "Senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela1: public Ui_tela1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA1_H
