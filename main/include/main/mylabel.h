//
// Created by LiMXin-PC on 2023/4/14.
//

/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : mylabel.h
  * @brief          : Header for mylabel.cpp file.
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
#ifndef QT_DEMO_MYLABEL_H
#define QT_DEMO_MYLABEL_H

#include <QLabel>

class MyLabel : public QLabel {
Q_OBJECT
public:
    explicit MyLabel(QWidget *parent = nullptr);

signals:

public slots:

protected:
    void mousePressEvent(QMouseEvent *ev);

    void mouseReleaseEvent(QMouseEvent *ev);

    void mouseMoveEvent(QMouseEvent *ev);

};

#endif //QT_DEMO_MYLABEL_H
