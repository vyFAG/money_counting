#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
private slots:    
    void on_addButton_clicked();    
    void on_DeleteButton_clicked();
    void addCounter(double, bool);

private:
    Ui::MainWindow *ui;
    double totalMoney;
};
#endif // MAINWINDOW_H
