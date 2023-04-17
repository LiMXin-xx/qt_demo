//
// Created by LiMXin-PC on 2023/4/13.
//

/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : uimainwindow.h
  * @brief          : Header for uimainwindow.cpp file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021.
  * All rights reserved.
  *
  * 
  * 
  * 
  *
  ******************************************************************************
  */
/* USER CODE END Header */
#ifndef QT_DEMO_UIMAINWINDOW_H
#define QT_DEMO_UIMAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class UiMainWindow; }
QT_END_NAMESPACE

class UiMainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit UiMainWindow(QWidget *parent = nullptr);

    void on_pushButton_clicked();

    void on_popButton_2_clicked();

    void on_popButton_3_clicked();

    void on_popButton_font_clicked();

    void on_popButton_message_clicked();

    void on_popButton_input_clicked();

    ~UiMainWindow() override;

protected:

private:
    Ui::UiMainWindow *ui;

signals:

    void backToLogin(void);
};


#endif //QT_DEMO_UIMAINWINDOW_H
