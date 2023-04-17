//
// Created by LiMXin-PC on 2023/4/14.
//

// You may need to build the project (run Qt uic code generator) to get "ui_LoginWidget.h" resolved
/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : loginwidget.c
  * @brief          : loginwidget program body
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
#include "main/loginwidget.h"
#include "ui_loginwidget.h"
#include <QString>
#include <QDebug>


LoginWidget::LoginWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::LoginWidget) {
    ui->setupUi(this);
    //登陆界面切换
    //01 创建主页面
    this->new_window = new UiMainWindow();

    connect(ui->pushButton_login, &QPushButton::clicked,
            this, [=]() {
                this->hide();
                this->new_window->show();
            });

    //02 检查返回信号
    connect(this->new_window, &UiMainWindow::backToLogin,
            this, [=]() {
                this->new_window->hide();
                this->show();
            });

    //03 QLineEdit
    ui->lineEdit->setText("请输入用户名");
    QString userName = ui->lineEdit->text();
    qDebug() << userName;

    ui->lineEdit_2->setText("请输入密码");
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_2->setTextMargins(100, 0, 0, 0);
}

LoginWidget::~LoginWidget() {
    delete ui;
}
