//
// Created by LiMXin-PC on 2023/4/14.
//

/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : loginwidget.h
  * @brief          : Header for loginwidget.cpp file.
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
#ifndef QT_DEMO_LOGINWIDGET_H
#define QT_DEMO_LOGINWIDGET_H

#include <QWidget>
#include <main/uimainwindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWidget; }
QT_END_NAMESPACE

class LoginWidget : public QWidget {
Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = nullptr);

    ~LoginWidget() override;

private:
    Ui::LoginWidget *ui;
    UiMainWindow *new_window;
};


#endif //QT_DEMO_LOGINWIDGET_H
