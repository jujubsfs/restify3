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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela1
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *bemvindo;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

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
        label_3->setGeometry(QRect(610, 240, 471, 411));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imagem/embaixo.png")));
        bemvindo = new QLabel(tela1);
        bemvindo->setObjectName("bemvindo");
        bemvindo->setGeometry(QRect(290, 60, 274, 38));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(20);
        bemvindo->setFont(font);
        bemvindo->setStyleSheet(QString::fromUtf8("color: rgb(255, 185, 1);"));
        bemvindo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(tela1);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(280, 140, 301, 91));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        pushButton->setAutoDefault(true);
        pushButton_2 = new QPushButton(tela1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 240, 301, 91));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        pushButton_3 = new QPushButton(tela1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(280, 340, 301, 91));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        pushButton_4 = new QPushButton(tela1);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(280, 440, 301, 91));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));

        retranslateUi(tela1);

        QMetaObject::connectSlotsByName(tela1);
    } // setupUi

    void retranslateUi(QDialog *tela1)
    {
        tela1->setWindowTitle(QCoreApplication::translate("tela1", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        bemvindo->setText(QCoreApplication::translate("tela1", "Bem Vindo ao Restify!", nullptr));
        pushButton->setText(QCoreApplication::translate("tela1", "Ver Card\303\241pio", nullptr));
        pushButton_2->setText(QCoreApplication::translate("tela1", "Inserir Prato", nullptr));
        pushButton_3->setText(QCoreApplication::translate("tela1", "Inserir Pedido", nullptr));
        pushButton_4->setText(QCoreApplication::translate("tela1", "Gerar Relat\303\263rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela1: public Ui_tela1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA1_H
