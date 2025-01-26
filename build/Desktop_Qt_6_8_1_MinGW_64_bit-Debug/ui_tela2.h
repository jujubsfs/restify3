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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tela2
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *tela2)
    {
        if (tela2->objectName().isEmpty())
            tela2->setObjectName("tela2");
        tela2->resize(809, 441);
        tela2->setStyleSheet(QString::fromUtf8("background-color: #556B2F"));
        label = new QLabel(tela2);
        label->setObjectName("label");
        label->setGeometry(QRect(600, -60, 381, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagem/em cima.png")));
        label_3 = new QLabel(tela2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(570, 230, 471, 231));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imagem/embaixo.png")));
        label_4 = new QLabel(tela2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-20, 110, 261, 461));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imagem/esquerda.png")));
        pushButton_2 = new QPushButton(tela2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(320, 350, 161, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(12);
        font.setBold(true);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255,249,87)"));
        lineEdit = new QLineEdit(tela2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(300, 230, 201, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background: rgb(255, 185, 1);"));
        label_6 = new QLabel(tela2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(290, 120, 216, 67));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font1.setPointSize(36);
        font1.setItalic(true);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(245, 233, 195)"));
        lineEdit_2 = new QLineEdit(tela2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(300, 280, 201, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background: rgb(255, 185, 1);"));

        retranslateUi(tela2);

        QMetaObject::connectSlotsByName(tela2);
    } // setupUi

    void retranslateUi(QDialog *tela2)
    {
        tela2->setWindowTitle(QCoreApplication::translate("tela2", "Dialog", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("tela2", "Come\303\247ar", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("tela2", "Login", nullptr));
        label_6->setText(QCoreApplication::translate("tela2", "RESTIFY", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("tela2", "Senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tela2: public Ui_tela2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA2_H
