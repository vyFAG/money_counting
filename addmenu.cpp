#include "addmenu.h"

addMenu::addMenu(QWidget *parent) : QMainWindow(parent)
{    
    incomeButton = new QRadioButton("Income", this);
    incomeButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    
    outcomeButton = new QRadioButton("Outcome", this);
    outcomeButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    
    QVBoxLayout* radioLayout = new QVBoxLayout(this);
    
    radioLayout->addWidget(incomeButton);
    radioLayout->addWidget(outcomeButton);
    
    /*text = new QLabel(this);
    text->setText("Введите сумму");*/
    
    this->setLayout(radioLayout);
}
