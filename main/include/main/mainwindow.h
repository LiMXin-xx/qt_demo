//
// Created by LiMXin-PC on 2023/4/11.
//

#ifndef QT_DEMO_MAINWINDOW_H
#define QT_DEMO_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;

};


#endif //QT_DEMO_MAINWINDOW_H
