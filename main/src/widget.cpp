//
// Created by LiMXin-PC on 2023/4/11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Widget.h" resolved

#include <main/widget.h>
#include <main/mybotton.h>
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>
#include <QCloseEvent>
#include <QResizeEvent>
#include <QEvent>
#include <QKeyEvent>
#include <QPaintEvent>
#include <QPainter>

/**
 * @brief
 * @param parent
 */
Widget::Widget(QWidget *parent) :
        QWidget(parent), ui(new Ui::Widget) {
    //01 ui
    ui->setupUi(this);
    //01 改变窗图标;
    this->setWindowTitle("第一个标题");
    // 02 设置窗口大小，可拉伸
    this->resize(800, 600);
    // 02 设置窗口大小，不可拉伸
//    this->setFixedSize(480, 320);

//    //03 创建按钮
//    QPushButton *btn1 = new QPushButton;
//    //设置按钮的父对象为窗口
//    btn1->setParent(this);
//    //设置按钮属性
//    //01 设置按钮内容
//    btn1->setText("btn1 第一个按钮");
//    //02 设置按钮位置
//    btn1->move(100, 100);
//    //设置按钮大小
//    btn1->setFixedSize(100, 100);
//    // 创建按钮2
//    QPushButton *btn2 = new QPushButton("btn2 第二个按钮", this);

//    //自定义按钮
//    MyBotton *btn3 = new MyBotton();
//    btn3->setParent(this);
//    btn3->setText("btn3 自定义");

    // 信号与槽机制
    auto *btn_signal = new QPushButton("点击关闭窗口", this);
    btn_signal->move(0, 0);
    //connect函数
    connect(btn_signal, &QPushButton::clicked, this, &Widget::close);

    //自定义与槽
//
//    this->teacher = new Teacher(this);
//    this->student = new Student(this);
    //不带参数信号与槽
//    connect(teacher, &Teacher::hungry, student, &Student::treat);
//    //按钮触发信号方法一
//    auto btn_tri1 = new QPushButton("请吃饭", this);
//    btn_tri1->move(100, 0);
//    connect(btn_tri1, &QPushButton::clicked, this, &Widget::ClassOver);
//    //按钮触发信号方法二:信号连接信号
//    auto btn_tri2 = new QPushButton("请吃饭2", this);
//    btn_tri2->move(200, 0);
//    connect(btn_tri2, &QPushButton::clicked, teacher, &Teacher::hungry);

    //带参数的信号与槽
//    QPushButton *btn_6 = new QPushButton("点击");
//    this->teacher = new Teacher(this);
//    this->student = new Student(this);
//    void (Teacher::*teacher_signal)(QString) = &Teacher::hungry;
//    void (Student::*student_slot)(QString) = &Student::treat;
//    connect(teacher,teacher_signal,student,student_slot);
//    ClassOver();

    //lambda表达式
    int m = 0;
    auto fun = [m](int a, int b)mutable {
        qDebug() << "lambda is running";
        a = 300;
        m = 200;
        return a + b;
    };

    int sum = fun(100, 200);
    qDebug() << "sum is " << sum;
    qDebug() << "m is " << m;

    //按钮lambda
    auto *btn_lambda = new QPushButton("Lambda", this);
    btn_lambda->move(100, 0);
    connect(btn_lambda, &QPushButton::clicked, this, [=]() {
                qDebug() << "按钮被按下 ";
            }
    );
}

Widget::~Widget() {
    delete ui;
}

void Widget::ClassOver() {
//    emit teacher->hungry();
    emit teacher->hungry("红烧排骨");
}

void Widget::closeEvent(QCloseEvent *event) {
    int ret = QMessageBox::question(this, "提示","是否关闭窗口");
    if (ret == QMessageBox::Yes){
        event->accept();
    }else{
        event->ignore();
    }
}

void Widget::resizeEvent(QResizeEvent *event) {
    qDebug() << "oldsize=" << event->oldSize();
    qDebug() << "newsize=" << event->size();
}

bool Widget::event(QEvent *event) {
    //判断事件类型（键盘事件）
    if (event->type() == QEvent::KeyPress) {
        //将QEvent类型的event转换为QKeyEvent
        auto *keyEvent = static_cast<QKeyEvent *>(event);
        if (keyEvent->key() == Qt::Key_Tab) {
            qDebug() << "Tab键被按下";
            return true;
        }
    }
    return QWidget::event(event);
}

void Widget::paintEvent(QPaintEvent *event) {
    qDebug() << "paintEvent";

    auto *paiter = new QPainter(this);
    paiter->drawLine(80, 100, 500, 500);
    paiter->setPen(Qt::red);
    paiter->drawRect(10, 10, 100, 200);
    paiter->drawEllipse(0, 0, 100, 200);
}

