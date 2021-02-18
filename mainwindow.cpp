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
    
    connect(menu_bar, SIGNAL(SendInfo(double, bool)), this, SLOT(addCounter(double, bool)));
    
    //ui->moneyCount->addItem("sex");
    //qDebug() << ui->moneyCount->currentItem();
}

void MainWindow::on_DeleteButton_clicked()
{
    if(ui->moneyCount->currentItem() != nullptr) {
        totalMoney -= ui->moneyCount->currentItem()->text().toDouble();
        
        QString writelnstr = "Итого: " + QString::number(totalMoney);        
        ui->totalMoney->setText(writelnstr);
        
        delete ui->moneyCount->currentItem();
    }
}

void MainWindow::addCounter(double money, bool isIncome) {
    QString writelnstr;
    
    if(isIncome == 1) {
        totalMoney += money;
    } else {
        totalMoney -= money;
        writelnstr.append("-");
    }
    
    writelnstr.append(QString::number(money));
    
    ui->moneyCount->addItem(writelnstr);
    
    writelnstr = "Итого: " + QString::number(totalMoney);
    
    ui->totalMoney->setText(writelnstr);
}
