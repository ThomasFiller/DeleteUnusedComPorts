/********************************************************************************
** Form generated from reading UI file 'settingsComPort.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSCOMPORT_H
#define UI_SETTINGSCOMPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_settingsComPort
{
public:
    QGroupBox *selectBox;
    QGridLayout *gridLayout;
    QComboBox *serialPortInfoListBox;
    QLabel *descriptionLabel;
    QLabel *manufacturerLabel;
    QLabel *serialNumberLabel;
    QLabel *locationLabel;
    QLabel *vidLabel;
    QLabel *pidLabel;
    QPushButton *applyButton;

    void setupUi(QDialog *settingsComPort)
    {
        if (settingsComPort->objectName().isEmpty())
            settingsComPort->setObjectName(QStringLiteral("settingsComPort"));
        settingsComPort->resize(792, 371);
        settingsComPort->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        selectBox = new QGroupBox(settingsComPort);
        selectBox->setObjectName(QStringLiteral("selectBox"));
        selectBox->setGeometry(QRect(9, 10, 631, 351));
        selectBox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(selectBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        serialPortInfoListBox = new QComboBox(selectBox);
        serialPortInfoListBox->setObjectName(QStringLiteral("serialPortInfoListBox"));
        serialPortInfoListBox->setStyleSheet(QLatin1String("background-color: rgb(10, 10, 10);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(serialPortInfoListBox, 0, 0, 1, 1);

        descriptionLabel = new QLabel(selectBox);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        gridLayout->addWidget(descriptionLabel, 1, 0, 1, 1);

        manufacturerLabel = new QLabel(selectBox);
        manufacturerLabel->setObjectName(QStringLiteral("manufacturerLabel"));

        gridLayout->addWidget(manufacturerLabel, 2, 0, 1, 1);

        serialNumberLabel = new QLabel(selectBox);
        serialNumberLabel->setObjectName(QStringLiteral("serialNumberLabel"));

        gridLayout->addWidget(serialNumberLabel, 3, 0, 1, 1);

        locationLabel = new QLabel(selectBox);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));

        gridLayout->addWidget(locationLabel, 4, 0, 1, 1);

        vidLabel = new QLabel(selectBox);
        vidLabel->setObjectName(QStringLiteral("vidLabel"));

        gridLayout->addWidget(vidLabel, 5, 0, 1, 1);

        pidLabel = new QLabel(selectBox);
        pidLabel->setObjectName(QStringLiteral("pidLabel"));

        gridLayout->addWidget(pidLabel, 6, 0, 1, 1);

        applyButton = new QPushButton(settingsComPort);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(640, 120, 141, 61));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        applyButton->setFont(font);

        retranslateUi(settingsComPort);

        QMetaObject::connectSlotsByName(settingsComPort);
    } // setupUi

    void retranslateUi(QDialog *settingsComPort)
    {
        settingsComPort->setWindowTitle(QApplication::translate("settingsComPort", "Settings", Q_NULLPTR));
        selectBox->setTitle(QApplication::translate("settingsComPort", "Select Serial Port", Q_NULLPTR));
        descriptionLabel->setText(QApplication::translate("settingsComPort", "Description:", Q_NULLPTR));
        manufacturerLabel->setText(QApplication::translate("settingsComPort", "Manufacturer:", Q_NULLPTR));
        serialNumberLabel->setText(QApplication::translate("settingsComPort", "Serial number:", Q_NULLPTR));
        locationLabel->setText(QApplication::translate("settingsComPort", "Location:", Q_NULLPTR));
        vidLabel->setText(QApplication::translate("settingsComPort", "Vendor ID:", Q_NULLPTR));
        pidLabel->setText(QApplication::translate("settingsComPort", "Product ID:", Q_NULLPTR));
        applyButton->setText(QApplication::translate("settingsComPort", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settingsComPort: public Ui_settingsComPort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSCOMPORT_H
