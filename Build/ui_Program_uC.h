/********************************************************************************
** Form generated from reading UI file 'Program_uC.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAM_UC_H
#define UI_PROGRAM_UC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Program_uC
{
public:
    QLabel *lblOutputEspProg;
    QLabel *lblWriting;

    void setupUi(QDialog *Program_uC)
    {
        if (Program_uC->objectName().isEmpty())
            Program_uC->setObjectName(QStringLiteral("Program_uC"));
        Program_uC->resize(917, 449);
        Program_uC->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        lblOutputEspProg = new QLabel(Program_uC);
        lblOutputEspProg->setObjectName(QStringLiteral("lblOutputEspProg"));
        lblOutputEspProg->setGeometry(QRect(10, 10, 901, 351));
        lblOutputEspProg->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lblOutputEspProg->setFrameShape(QFrame::Box);
        lblOutputEspProg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblOutputEspProg->setMargin(5);
        lblWriting = new QLabel(Program_uC);
        lblWriting->setObjectName(QStringLiteral("lblWriting"));
        lblWriting->setGeometry(QRect(10, 370, 901, 71));
        lblWriting->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lblWriting->setFrameShape(QFrame::Box);
        lblWriting->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblWriting->setMargin(5);

        retranslateUi(Program_uC);

        QMetaObject::connectSlotsByName(Program_uC);
    } // setupUi

    void retranslateUi(QDialog *Program_uC)
    {
        Program_uC->setWindowTitle(QApplication::translate("Program_uC", "State Programmer", Q_NULLPTR));
        lblOutputEspProg->setText(QApplication::translate("Program_uC", "Output Programmer", Q_NULLPTR));
        lblWriting->setText(QApplication::translate("Program_uC", "Progress", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Program_uC: public Ui_Program_uC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAM_UC_H
