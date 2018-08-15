#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>
#include<QDateTime>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    showTime();
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start(1000);
    /*showTime(){

        QTime time = QTime::currentTime();
        QString time_text= time.toString("hh : mm : ss");
        ui->Digital_clock->setText(time_text);
        }*/


}
void MainWindow::showTime(){

        QTime time = QTime::currentTime();
        QString time_text= time.toString("hh : mm : ss");
        ui->Digital_clock->setText(time_text);
        }


MainWindow::~MainWindow()
{
    delete ui;
}
