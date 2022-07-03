#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCalculate_clicked()
{
    QString result;
    int firstCount, finalCount;
    int frameTarget = ui ->leFrameTarget -> text().toInt();
    int frameInit = ui ->leFrameInit -> text().toInt();
    int frameHit = ui ->leFrameHit -> text().toInt();

    firstCount = frameTarget - frameHit;
    finalCount = firstCount + frameInit;

    result = QString::number(finalCount);

    ui -> lbResultCalibration -> setText(result);
}

