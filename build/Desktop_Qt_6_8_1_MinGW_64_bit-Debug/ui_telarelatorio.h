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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telarelatorio
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView;

    void setupUi(QDialog *telarelatorio)
    {
        if (telarelatorio->objectName().isEmpty())
            telarelatorio->setObjectName("telarelatorio");
        telarelatorio->resize(400, 300);
        widget = new QWidget(telarelatorio);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 10, 361, 271));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(telarelatorio);

        QMetaObject::connectSlotsByName(telarelatorio);
    } // setupUi

    void retranslateUi(QDialog *telarelatorio)
    {
        telarelatorio->setWindowTitle(QCoreApplication::translate("telarelatorio", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("telarelatorio", "Relat\303\263rio Atualizado dos Pedidos", nullptr));
        pushButton->setText(QCoreApplication::translate("telarelatorio", "menos vendidos", nullptr));
        pushButton_2->setText(QCoreApplication::translate("telarelatorio", "sem filtros", nullptr));
        pushButton_3->setText(QCoreApplication::translate("telarelatorio", "mais vendidos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telarelatorio: public Ui_telarelatorio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELARELATORIO_H
