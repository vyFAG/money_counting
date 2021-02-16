#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addmenu.h"
#include <QDebug>
#include <QMessageBox>
#include <QInputDialog>

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

void MainWindow::on_addButton_clicked()
{   
    addMenu* menu_bar = new addMenu;
    menu_bar->show();
    
    //ui->moneyCount->addItem("sex");
    qDebug() << ui->moneyCount->currentItem();
}

void MainWindow::on_DeleteButton_clicked()
{
    if(ui->moneyCount->currentItem() != nullptr) {
        
        delete ui->moneyCount->currentItem();
    }
}
