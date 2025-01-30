/********************************************************************************
** Form generated from reading UI file 'telacontabilizarpedido.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACONTABILIZARPEDIDO_H
#define UI_TELACONTABILIZARPEDIDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_telacontabilizarpedido
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QSpinBox *spinBox;
    QPushButton *adicionarAoPedido;
    QLabel *label_4;
    QPushButton *confirmarPedido;
    QListWidget *listWidget;

    void setupUi(QDialog *telacontabilizarpedido)
    {
        if (telacontabilizarpedido->objectName().isEmpty())
            telacontabilizarpedido->setObjectName("telacontabilizarpedido");
        telacontabilizarpedido->resize(850, 560);
        telacontabilizarpedido->setStyleSheet(QString::fromUtf8("background-color: #556B2F"));
        label = new QLabel(telacontabilizarpedido);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 20, 501, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(telacontabilizarpedido);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 191, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_2->setFont(font1);
        comboBox = new QComboBox(telacontabilizarpedido);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 120, 811, 31));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(telacontabilizarpedido);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 180, 171, 16));
        label_3->setFont(font1);
        spinBox = new QSpinBox(telacontabilizarpedido);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(20, 210, 811, 31));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        adicionarAoPedido = new QPushButton(telacontabilizarpedido);
        adicionarAoPedido->setObjectName("adicionarAoPedido");
        adicionarAoPedido->setGeometry(QRect(20, 260, 811, 29));
        adicionarAoPedido->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(telacontabilizarpedido);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 310, 171, 20));
        label_4->setFont(font1);
        confirmarPedido = new QPushButton(telacontabilizarpedido);
        confirmarPedido->setObjectName("confirmarPedido");
        confirmarPedido->setGeometry(QRect(20, 510, 811, 29));
        confirmarPedido->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        listWidget = new QListWidget(telacontabilizarpedido);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 340, 811, 161));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));

        retranslateUi(telacontabilizarpedido);

        QMetaObject::connectSlotsByName(telacontabilizarpedido);
    } // setupUi

    void retranslateUi(QDialog *telacontabilizarpedido)
    {
        telacontabilizarpedido->setWindowTitle(QCoreApplication::translate("telacontabilizarpedido", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("telacontabilizarpedido", "registrar pedido no sistema", nullptr));
        label_2->setText(QCoreApplication::translate("telacontabilizarpedido", "Pratos Dispon\303\255veis", nullptr));
        label_3->setText(QCoreApplication::translate("telacontabilizarpedido", "Quantidade", nullptr));
        adicionarAoPedido->setText(QCoreApplication::translate("telacontabilizarpedido", "Adicionar ao Pedido", nullptr));
        label_4->setText(QCoreApplication::translate("telacontabilizarpedido", "Pedido Atualizado", nullptr));
        confirmarPedido->setText(QCoreApplication::translate("telacontabilizarpedido", "Confirmar Pedido", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telacontabilizarpedido: public Ui_telacontabilizarpedido {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACONTABILIZARPEDIDO_H
