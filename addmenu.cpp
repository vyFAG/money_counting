#include "addmenu.h"
//#include <QString>
#include <QDebug>

addMenu::addMenu(QWidget *parent) : QMainWindow(parent)
{    
    this->setFixedSize(250, 100);
    incomeButton = new QRadioButton("Income", this);
    incomeButton->setGeometry(10, 25, 70, 20);
    outcomeButton = new QRadioButton("Outcome", this);
    outcomeButton->setGeometry(10, 55, 70, 20);
    
    text = new QLabel("Введите сумму", this);
    text->setGeometry(120, 10, 100, 20);
    
    textSpace = new QLineEdit(this);
    textSpace->setGeometry(100, 40, 120, 20);
    
    button = new QPushButton("Применить", this);
    button->setGeometry(120, 75, 80, 20);
    connect(button, SIGNAL(clicked()), this, SLOT(checkText()));
    //connect(button, SIGNAL(clicked()), this, SLOT(close()));
}

void addMenu::checkText() {
    if (textSpace->text() != "") {
        if(incomeButton->isChecked()) {
            isIncome = 1;
        } else {
            isIncome = 0;
        }
        
        emit SendInfo(textSpace->text().toDouble(), isIncome);
        this->close();
    }
}
