#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QtDebug"
#include <QState>
#include "QPixmap"
#include "QIcon"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_5->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Laksmipathi-212218106147","This Is Information Box");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"Lakshmipathi","Do You Like Apples",QMessageBox::Yes|QMessageBox::No);
       if(reply==QMessageBox::Yes){
           QMessageBox::information(this,"Lakshmipathi.R 6147","Yes");
       }
       else{
           QMessageBox::information(this,"Lakshmipathi.R 6147","No");
       }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"Lakshmipathi-212218106147","this is a custom message",QMessageBox::Yes|QMessageBox::No|QMessageBox::YesAll|QMessageBox::NoAll);
      if(reply==QMessageBox::Yes)
          qDebug()<< "Nothing is Displayed";
      else if(reply==QMessageBox::YesAll)
          QMessageBox::warning(this,"Lakshmipathi.R 6147","Display The Message With Warning As Yes To All");
      else if(reply==QMessageBox::No)
          qDebug() <<"Nothing Is Displayed";
      else
          QMessageBox::warning(this,"Lakshmipathi.R 6147","Dont Display The Message With Warning As Yes To All");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Lakshmipathi.R 6147","This is a Warning Message");

}

void MainWindow::on_pushButton_5_toggled(bool checked)
{
    if(checked)
       {
           qDebug()<<"Button Checked--ON--";
           ui->pushButton_5->setIcon(QIcon("C:/C++/CIA_2_Lakshmipathi_6147/on.jfif"));
            ui->pushButton_5->setIconSize(QSize(150,150));
       }
       else
       {
           qDebug()<<"Button Checked--OFF--";
           ui->pushButton_5->setIcon(QIcon("C:/C++/CIA_2_Lakshmipathi_6147/off.jpg"));
            ui->pushButton_5->setIconSize(QSize(150,150));
       }

}
