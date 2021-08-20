/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWin
{
public:
    QWidget *centralWidget;
    QLabel *lblMeasureState;
    QPushButton *btnDeleteUnusedComPorts;

    void setupUi(QMainWindow *MainWin)
    {
        if (MainWin->objectName().isEmpty())
            MainWin->setObjectName(QStringLiteral("MainWin"));
        MainWin->resize(1084, 589);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWin->sizePolicy().hasHeightForWidth());
        MainWin->setSizePolicy(sizePolicy);
        MainWin->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        centralWidget = new QWidget(MainWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblMeasureState = new QLabel(centralWidget);
        lblMeasureState->setObjectName(QStringLiteral("lblMeasureState"));
        lblMeasureState->setGeometry(QRect(20, 390, 961, 81));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblMeasureState->sizePolicy().hasHeightForWidth());
        lblMeasureState->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        lblMeasureState->setFont(font);
        lblMeasureState->setStyleSheet(QLatin1String("background-color: rgb(108, 108, 108);\n"
"color: rgb(237, 237, 237);"));
        lblMeasureState->setMargin(1);
        btnDeleteUnusedComPorts = new QPushButton(centralWidget);
        btnDeleteUnusedComPorts->setObjectName(QStringLiteral("btnDeleteUnusedComPorts"));
        btnDeleteUnusedComPorts->setGeometry(QRect(510, 280, 471, 101));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnDeleteUnusedComPorts->sizePolicy().hasHeightForWidth());
        btnDeleteUnusedComPorts->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(16);
        btnDeleteUnusedComPorts->setFont(font1);
        MainWin->setCentralWidget(centralWidget);

        retranslateUi(MainWin);

        QMetaObject::connectSlotsByName(MainWin);
    } // setupUi

    void retranslateUi(QMainWindow *MainWin)
    {
        MainWin->setWindowTitle(QApplication::translate("MainWin", "Updater", Q_NULLPTR));
        lblMeasureState->setText(QApplication::translate("MainWin", "---", Q_NULLPTR));
        btnDeleteUnusedComPorts->setText(QApplication::translate("MainWin", "Delete unused COM Ports", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWin: public Ui_MainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
