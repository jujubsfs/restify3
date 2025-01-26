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
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_teladecardapio
{
public:
    QLabel *label;

    void setupUi(QDialog *teladecardapio)
    {
        if (teladecardapio->objectName().isEmpty())
            teladecardapio->setObjectName("teladecardapio");
        teladecardapio->resize(400, 300);
        label = new QLabel(teladecardapio);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 110, 100, 16));

        retranslateUi(teladecardapio);

        QMetaObject::connectSlotsByName(teladecardapio);
    } // setupUi

    void retranslateUi(QDialog *teladecardapio)
    {
        teladecardapio->setWindowTitle(QCoreApplication::translate("teladecardapio", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("teladecardapio", "Janela ver cardapio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teladecardapio: public Ui_teladecardapio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELADECARDAPIO_H
