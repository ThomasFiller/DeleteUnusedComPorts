#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>
#include <QtSerialPort/QtSerialPort>
#include <QDate>
#include <QTime>
#include <QFile>
#include <QDir>
#include <QSplashScreen>
#include "globalconsts.h"

#include <QNetworkConfiguration>
#include <QNetworkConfigurationManager>
#include <QNetworkSession>

#define DELAY_AFTER_SWITCHING_RELAY 200
#define WATCH_DOG_MEASURE 5000
#define WATCH_DOG_MEASURE_LED 10000
#define DELAY_BEFORE_CAM 400
#define DELAY_BETWEEN_MEASUREMENTS 1000

#define ZIP_DIR "FW_unzipped"

namespace Ui {
class MainWin;
}

class MainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWin(QWidget *parent = 0);
    ~MainWin();

    QNetworkConfiguration netcfg;
    QList<QNetworkConfiguration> netcfgList;

private slots:
    void on_btnDeleteUnusedComPorts_clicked();

public slots:

private:
    Ui::MainWin *ui;
    QProcess *qprocessDeleteComPorts;
};

#endif // MAINWIN_H
