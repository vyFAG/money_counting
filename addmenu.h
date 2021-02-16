#ifndef ADDMENU_H
#define ADDMENU_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class addMenu : public QMainWindow
{
    Q_OBJECT
public:
    addMenu(QWidget *parent = nullptr);
    
private:
    QPushButton* button;
    QLineEdit* textSpace;
    QLabel* text;
    
    QRadioButton* incomeButton;
    QRadioButton* outcomeButton;
    
    QVBoxLayout* mainLayout;
    
    QHBoxLayout* generalLayout;
};

#endif // ADDMENU_H
