//
// Created by LiMXin-PC on 2023/4/14.
//

/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : mylabel.c
  * @brief          : mylabel program body
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
#include "main/mylabel.h"
#include <QDebug>
#include <QMouseEvent>
#include <QString>

MyLabel::MyLabel(QWidget *parent) : QLabel(parent) {
    this->setMouseTracking(true);
}

void MyLabel::mousePressEvent(QMouseEvent *ev) {
    if (ev->button() == Qt::LeftButton) {
        qDebug() << "鼠标左键被按下";
    } else if (ev->button() == Qt::RightButton) {
        qDebug() << "鼠标右键被按下";
    } else {
        qDebug() << "鼠标被按下";
    }
}

void MyLabel::mouseReleaseEvent(QMouseEvent *ev) {
    qDebug() << "MyLabel::mouseReleaseEvent";
}

void MyLabel::mouseMoveEvent(QMouseEvent *ev) {
    qDebug() << "MyLabel::mouseMoveEvent" << ev->x() << "," << ev->y();
//    QString str;
//    str.sprintf("(%d, %d)",ev->x(),ev->y());
//    this->setText(str);
}
