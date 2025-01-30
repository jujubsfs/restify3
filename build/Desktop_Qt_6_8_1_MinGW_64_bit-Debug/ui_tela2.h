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
    QLineEdit *lineEdit_2;
    QLabel *label_2;

    void setupUi(QDialog *tela2)
    {
        if (tela2->objectName().isEmpty())
            tela2->setObjectName("tela2");
        tela2->resize(879, 522);
        tela2->setStyleSheet(QString::fromUtf8("background-color: #556B2F"));
        label = new QLabel(tela2);
        label->setObjectName("label");
        label->setGeometry(QRect(670, -50, 381, 341));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagem/em cima.png")));
        label_3 = new QLabel(tela2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(600, 310, 471, 231));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imagem/embaixo.png")));
        label_4 = new QLabel(tela2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-10, 20, 261, 461));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imagem/esquerda.png")));
        pushButton_2 = new QPushButton(tela2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(380, 420, 161, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(16);
        font.setBold(true);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 183, 0);\n"
"background-color: rgb(253, 236, 208);\n"
"border: 1px solid gray;\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        lineEdit = new QLineEdit(tela2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(360, 330, 201, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Script")});
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background: rgb(255, 185, 1);"));
        lineEdit_2 = new QLineEdit(tela2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(360, 370, 201, 31));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background: rgb(255, 185, 1);"));
        label_2 = new QLabel(tela2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 40, 341, 271));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imagem/logotipo_frigideira.png")));
        label_3->raise();
        label_4->raise();
        pushButton_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label->raise();
        label_2->raise();

        retranslateUi(tela2);

        QMetaObject::connectSlotsByName(tela2);
    } // setupUi

    void retranslateUi(QDialog *tela2)
    {
        tela2->setWindowTitle(QCoreApplication::translate("tela2", "Dialog", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("tela2", "come\303\247ar!", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("tela2", "Login", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("tela2", "Senha", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tela2: public Ui_tela2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELA2_H
