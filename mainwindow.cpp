#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPalette>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    if (checked==true)
    {
        this->showFullScreen();
    }
    else
        this->showNormal();
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    QPalette*palette;
    palette=new QPalette(1);
    ui->lcdNumber->setPalette(palette);
}
