/********************************************************************************
** Form generated from reading UI file 'teladecardapio.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELADECARDAPIO_H
#define UI_TELADECARDAPIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teladecardapio
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *excluir_prato;

    void setupUi(QDialog *teladecardapio)
    {
        if (teladecardapio->objectName().isEmpty())
            teladecardapio->setObjectName("teladecardapio");
        teladecardapio->resize(400, 300);
        label = new QLabel(teladecardapio);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 293, 42));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        listWidget = new QListWidget(teladecardapio);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(30, 60, 341, 191));
        widget = new QWidget(teladecardapio);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 260, 341, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        excluir_prato = new QPushButton(widget);
        excluir_prato->setObjectName("excluir_prato");

        horizontalLayout->addWidget(excluir_prato);


        retranslateUi(teladecardapio);

        QMetaObject::connectSlotsByName(teladecardapio);
    } // setupUi

    void retranslateUi(QDialog *teladecardapio)
    {
        teladecardapio->setWindowTitle(QCoreApplication::translate("teladecardapio", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("teladecardapio", "Janela ver cardapio", nullptr));
        pushButton_2->setText(QCoreApplication::translate("teladecardapio", "editar prato", nullptr));
        excluir_prato->setText(QCoreApplication::translate("teladecardapio", "excluir prato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teladecardapio: public Ui_teladecardapio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELADECARDAPIO_H
