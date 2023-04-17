//
// Created by LiMXin-PC on 2023/4/11.
//

#include "main/student.h"
#include <QDebug>

Student::Student(QObject *parent) : QObject(parent) {

}

void Student::treat() {
    qDebug() << "请老师吃饭";
}

void Student::treat(QString food) {
    qDebug() << "请老师吃饭" << food;
}
