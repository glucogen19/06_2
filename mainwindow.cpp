#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    int num1 = 255;
    int num2 = 123;

    QString strNum1;
    strNum1.setNum(num1);

    QString strNum2;
    strNum2.setNum(num2);

    textLabel1 = new QLabel(this);
    textLabel1->setText("num1 = " + strNum1);
    textLabel1->setFont(QFont("Times New Roman",16,QFont::Bold));
    textLabel1->setGeometry(5, 0, 150, 30);

    textLabel2 = new QLabel(this);
    textLabel2->setText("num2 = " + strNum2);
    textLabel2->setFont(QFont("Times New Roman",16,QFont::Bold));
    textLabel2->setGeometry(5, 50, 150, 30);
}

MainWindow::~MainWindow()
{
}
