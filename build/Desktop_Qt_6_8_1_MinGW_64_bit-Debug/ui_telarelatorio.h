/********************************************************************************
** Form generated from reading UI file 'telarelatorio.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELARELATORIO_H
#define UI_TELARELATORIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_telarelatorio
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QDialog *telarelatorio)
    {
        if (telarelatorio->objectName().isEmpty())
            telarelatorio->setObjectName("telarelatorio");
        telarelatorio->resize(850, 560);
        telarelatorio->setStyleSheet(QString::fromUtf8("background-color: #556B2F"));
        pushButton_3 = new QPushButton(telarelatorio);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(570, 150, 271, 29));
        QFont font;
        font.setBold(true);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        pushButton_2 = new QPushButton(telarelatorio);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 150, 271, 29));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        pushButton = new QPushButton(telarelatorio);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 150, 271, 29));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        label = new QLabel(telarelatorio);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 40, 521, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Script")});
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        tableView = new QTableView(telarelatorio);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(12, 199, 831, 351));

        retranslateUi(telarelatorio);

        QMetaObject::connectSlotsByName(telarelatorio);
    } // setupUi

    void retranslateUi(QDialog *telarelatorio)
    {
        telarelatorio->setWindowTitle(QCoreApplication::translate("telarelatorio", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("telarelatorio", "mais vendidos", nullptr));
        pushButton_2->setText(QCoreApplication::translate("telarelatorio", "sem filtros", nullptr));
        pushButton->setText(QCoreApplication::translate("telarelatorio", "menos vendidos", nullptr));
        label->setText(QCoreApplication::translate("telarelatorio", "Relat\303\263rio Atualizado dos Pedidos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telarelatorio: public Ui_telarelatorio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELARELATORIO_H
