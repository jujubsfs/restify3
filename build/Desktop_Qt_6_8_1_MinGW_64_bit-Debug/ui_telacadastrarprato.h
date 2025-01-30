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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *inserir_nome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *inserir_preco;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *inserir_categoria;
    QPushButton *pushButton;

    void setupUi(QDialog *telacadastrarprato)
    {
        if (telacadastrarprato->objectName().isEmpty())
            telacadastrarprato->setObjectName("telacadastrarprato");
        telacadastrarprato->resize(400, 300);
        layoutWidget = new QWidget(telacadastrarprato);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 361, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        inserir_nome = new QLineEdit(layoutWidget);
        inserir_nome->setObjectName("inserir_nome");

        horizontalLayout_2->addWidget(inserir_nome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        inserir_preco = new QDoubleSpinBox(layoutWidget);
        inserir_preco->setObjectName("inserir_preco");

        horizontalLayout_3->addWidget(inserir_preco);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        inserir_categoria = new QComboBox(layoutWidget);
        inserir_categoria->addItem(QString());
        inserir_categoria->addItem(QString());
        inserir_categoria->addItem(QString());
        inserir_categoria->addItem(QString());
        inserir_categoria->setObjectName("inserir_categoria");

        horizontalLayout_4->addWidget(inserir_categoria);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(layoutWidget);
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
        inserir_categoria->setItemText(0, QCoreApplication::translate("telacadastrarprato", "Entrada", nullptr));
        inserir_categoria->setItemText(1, QCoreApplication::translate("telacadastrarprato", "Principal", nullptr));
        inserir_categoria->setItemText(2, QCoreApplication::translate("telacadastrarprato", "Sobremesa", nullptr));
        inserir_categoria->setItemText(3, QCoreApplication::translate("telacadastrarprato", "Bebida", nullptr));

        pushButton->setText(QCoreApplication::translate("telacadastrarprato", "Salvar Prato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telacadastrarprato: public Ui_telacadastrarprato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACADASTRARPRATO_H
