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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telacontabilizarpedido
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QTableView *tableView;
    QPushButton *pushButton_2;

    void setupUi(QDialog *telacontabilizarpedido)
    {
        if (telacontabilizarpedido->objectName().isEmpty())
            telacontabilizarpedido->setObjectName("telacontabilizarpedido");
        telacontabilizarpedido->resize(505, 337);
        widget = new QWidget(telacontabilizarpedido);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 481, 311));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
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
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");

        horizontalLayout_3->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");

        verticalLayout_2->addWidget(tableView);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);


        retranslateUi(telacontabilizarpedido);

        QMetaObject::connectSlotsByName(telacontabilizarpedido);
    } // setupUi

    void retranslateUi(QDialog *telacontabilizarpedido)
    {
        telacontabilizarpedido->setWindowTitle(QCoreApplication::translate("telacontabilizarpedido", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("telacontabilizarpedido", "registrar pedido no sistema", nullptr));
        label_2->setText(QCoreApplication::translate("telacontabilizarpedido", "Pratos Dispon\303\255veis", nullptr));
        label_3->setText(QCoreApplication::translate("telacontabilizarpedido", "Quantidade", nullptr));
        pushButton->setText(QCoreApplication::translate("telacontabilizarpedido", "Adicionar ao Pedido", nullptr));
        label_4->setText(QCoreApplication::translate("telacontabilizarpedido", "Pedido Atualizado", nullptr));
        pushButton_2->setText(QCoreApplication::translate("telacontabilizarpedido", "Confirmar Pedido", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telacontabilizarpedido: public Ui_telacontabilizarpedido {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACONTABILIZARPEDIDO_H
