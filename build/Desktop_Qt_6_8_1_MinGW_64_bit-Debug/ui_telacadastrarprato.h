/********************************************************************************
** Form generated from reading UI file 'telacadastrarprato.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACADASTRARPRATO_H
#define UI_TELACADASTRARPRATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telacadastrarprato
{
public:
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label;
    QDoubleSpinBox *inserir_preco;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *inserir_nome;
    QLabel *label_4;
    QComboBox *inserir_categoria;

    void setupUi(QDialog *telacadastrarprato)
    {
        if (telacadastrarprato->objectName().isEmpty())
            telacadastrarprato->setObjectName("telacadastrarprato");
        telacadastrarprato->resize(850, 560);
        telacadastrarprato->setStyleSheet(QString::fromUtf8("background-color: #556B2F"));
        label_5 = new QLabel(telacadastrarprato);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 70, 491, 201));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/imagem/logotipo-removebg-preview.png")));
        pushButton = new QPushButton(telacadastrarprato);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 520, 93, 29));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        label = new QLabel(telacadastrarprato);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 20, 422, 52));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        inserir_preco = new QDoubleSpinBox(telacadastrarprato);
        inserir_preco->setObjectName("inserir_preco");
        inserir_preco->setGeometry(QRect(20, 400, 811, 31));
        inserir_preco->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        label_3 = new QLabel(telacadastrarprato);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 360, 161, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_3->setFont(font1);
        label_2 = new QLabel(telacadastrarprato);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 280, 161, 31));
        QFont font2;
        font2.setBold(true);
        label_2->setFont(font2);
        inserir_nome = new QLineEdit(telacadastrarprato);
        inserir_nome->setObjectName("inserir_nome");
        inserir_nome->setGeometry(QRect(20, 310, 811, 31));
        inserir_nome->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        label_4 = new QLabel(telacadastrarprato);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 440, 161, 16));
        label_4->setFont(font1);
        inserir_categoria = new QComboBox(telacadastrarprato);
        inserir_categoria->addItem(QString());
        inserir_categoria->addItem(QString());
        inserir_categoria->addItem(QString());
        inserir_categoria->addItem(QString());
        inserir_categoria->setObjectName("inserir_categoria");
        inserir_categoria->setGeometry(QRect(20, 470, 811, 31));
        inserir_categoria->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        label_5->raise();

        retranslateUi(telacadastrarprato);

        QMetaObject::connectSlotsByName(telacadastrarprato);
    } // setupUi

    void retranslateUi(QDialog *telacadastrarprato)
    {
        telacadastrarprato->setWindowTitle(QCoreApplication::translate("telacadastrarprato", "Dialog", nullptr));
        label_5->setText(QString());
        pushButton->setText(QCoreApplication::translate("telacadastrarprato", "Salvar Prato", nullptr));
        label->setText(QCoreApplication::translate("telacadastrarprato", "Inserir Prato ao Sistema", nullptr));
        label_3->setText(QCoreApplication::translate("telacadastrarprato", "Pre\303\247o", nullptr));
        label_2->setText(QCoreApplication::translate("telacadastrarprato", "Nome do Prato", nullptr));
        label_4->setText(QCoreApplication::translate("telacadastrarprato", "Categoria", nullptr));
        inserir_categoria->setItemText(0, QCoreApplication::translate("telacadastrarprato", "Entrada", nullptr));
        inserir_categoria->setItemText(1, QCoreApplication::translate("telacadastrarprato", "Principal", nullptr));
        inserir_categoria->setItemText(2, QCoreApplication::translate("telacadastrarprato", "Sobremesa", nullptr));
        inserir_categoria->setItemText(3, QCoreApplication::translate("telacadastrarprato", "Bebida", nullptr));

    } // retranslateUi

};

namespace Ui {
    class telacadastrarprato: public Ui_telacadastrarprato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACADASTRARPRATO_H
