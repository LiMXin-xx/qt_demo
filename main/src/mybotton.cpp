//
// Created by LiMXin-PC on 2023/4/11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MyBotton.h" resolved

#include "main/mybotton.h"
#include "ui_mybotton.h"
#include <QDebug>

MyBotton::MyBotton(QWidget *parent) :
        QPushButton(parent), ui(new Ui::MyBotton) {
//    ui->setupUi(this);
    //构建函数
    qDebug() << "MyBotton";
}

MyBotton::~MyBotton() {
//    delete ui;
    //析构函数
    qDebug() << "~MyBotton";
}
