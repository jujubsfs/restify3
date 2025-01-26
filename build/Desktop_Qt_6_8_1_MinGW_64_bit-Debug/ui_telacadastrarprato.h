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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telacadastrarprato
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *telacadastrarprato)
    {
        if (telacadastrarprato->objectName().isEmpty())
            telacadastrarprato->setObjectName("telacadastrarprato");
        telacadastrarprato->resize(400, 300);
        widget = new QWidget(telacadastrarprato);
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
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox = new QDoubleSpinBox(widget);
        doubleSpinBox->setObjectName("doubleSpinBox");

        horizontalLayout_3->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");

        horizontalLayout_4->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(telacadastrarprato);

        QMetaObject::connectSlotsByName(telacadastrarprato);
    } // setupUi

    void retranslateUi(QDialog *telacadastrarprato)
    {
        telacadastrarprato->setWindowTitle(QCoreApplication::translate("telacadastrarprato", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("telacadastrarprato", "Inserir Prato ao Sistema", nullptr));
        label_2->setText(QCoreApplication::translate("telacadastrarprato", "Nome do Prato", nullptr));
        label_3->setText(QCoreApplication::translate("telacadastrarprato", "Pre\303\247o", nullptr));
        label_4->setText(QCoreApplication::translate("telacadastrarprato", "Categoria", nullptr));
        pushButton->setText(QCoreApplication::translate("telacadastrarprato", "Salvar Prato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telacadastrarprato: public Ui_telacadastrarprato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACADASTRARPRATO_H
