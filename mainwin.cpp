#include "mainwin.h"
#include "ui_mainwin.h"
#include <QEventLoop>

MainWin::MainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWin)
{
    ui->setupUi(this);
    ui->btnDeleteUnusedComPorts->setStyleSheet(BUTTON_COLOR BUTTON_COLOR_PRESSED );
    ui->lblMeasureState->setStyleSheet(LABEL_STYLE);
}

MainWin::~MainWin()
{
    delete ui;
}

void MainWin::on_btnDeleteUnusedComPorts_clicked()
{
    ui->lblMeasureState->setText("Delete Com Ports");

    ui->lblMeasureState->setStyleSheet(LABEL_STYLE);

    qprocessDeleteComPorts = new QProcess(this);

    //qprocessDeleteComPorts->setProgram("C:/Software_PC/ComPortsLoeschen/ComNameArbiterTool");
    qprocessDeleteComPorts->setProgram("ComNameArbiterTool");
    qprocessDeleteComPorts->setArguments(QStringList() << "/r");

    qprocessDeleteComPorts->start();

    qDebug() << "Program: "<<qprocessDeleteComPorts->program();
    qDebug() << "Arguments: "<<qprocessDeleteComPorts->arguments();
}
