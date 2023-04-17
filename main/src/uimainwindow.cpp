//
// Created by LiMXin-PC on 2023/4/13.
//

// You may need to build the project (run Qt uic code generator) to get "ui_UiMainWindow.h" resolved
/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : uimainwindow.c
  * @brief          : uimainwindow program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023.
  * All rights reserved.
  *
  * 
  * 
  * 
  *
  ******************************************************************************
  */
/* USER CODE END Header */
#include "main/uimainwindow.h"
#include "ui_uimainwindow.h"
#include <QString>
#include <QDebug>
#include <QPalette>
#include <QColor>
#include <QFont>
#include <QPixmap>
#include <QMovie>
#include <QDialog>
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>
#include <QMessageBox>
#include <QInputDialog>
#include <QLabel>

UiMainWindow::UiMainWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::UiMainWindow) {
    //01 设置窗口
    setFixedSize(1024, 768);
    //02 UI settings
    ui->setupUi(this);
    ui->textBrowser->setFixedSize(300,300);

    ui->statusbar->showMessage("Welcome", 3000);
    ui->pushButton->setFixedSize(100, 30);
    ui->pushButton_2->setFixedSize(100, 30);
    ui->pushButton_3->setFixedSize(100, 30);
    ui->pushButton_font->setFixedSize(100,30);
    ui->pushButton_message->setFixedSize(100,30);
    ui->pushButton_input->setFixedSize(100,30);
    ui->pushButton_back->setFixedSize(100,30);
    ui->pushButton_4->setFixedSize(100,30);


    //03-1 创建对话框-模态对话框
//    auto dialog1 = new QDialog(this);
//    dialog1->setAttribute(Qt::WA_DeleteOnClose);
//    dialog1->setWindowTitle(tr("Welcome to dialog"));
//    dialog1->exec();

    //03-2 创建对话框-非模态对话框
//    auto *dialog2 = new QDialog(this);
//    dialog2->setAttribute(Qt::WA_DeleteOnClose);
//    dialog2->setWindowTitle(tr("Hello world"));
//    dialog2->show();

    //04 fileDialog
    connect(ui->pushButton, &QPushButton::clicked,
            this, &UiMainWindow::on_pushButton_clicked);

    connect(ui->pushButton_2, &QPushButton::clicked,
            this, &UiMainWindow::on_popButton_2_clicked);

    connect(ui->pushButton_3, &QPushButton::clicked,
            this, &UiMainWindow::on_popButton_3_clicked);

    connect(ui->pushButton_font, &QPushButton::clicked,
            this, &UiMainWindow::on_popButton_font_clicked);

    connect(ui->pushButton_message, &QPushButton::clicked,
            this, &UiMainWindow::on_popButton_message_clicked);

    connect(ui->pushButton_input, &QPushButton::clicked,
            this, &UiMainWindow::on_popButton_input_clicked);

    connect(ui->pushButton_back, SIGNAL(clicked(bool)),
            this, SIGNAL(backToLogin()));

    //05 创建标签
    //05-1 代码创建显示文本
    auto *label1 = new QLabel(this);
    label1->setText("代码创建标签");
    label1->move(400, 200);
    //05-2 ui创建显示htm
    ui->label->setText("<a href=\"https://www.baidu.com\">百度一下</a>");
    ui->label->setOpenExternalLinks(true);
    //05-3 标签显示图片
    QPixmap pixmap_label;
//    pixmap_label.load(":/img/resources/image/na.png");
    ui->label_img->setPixmap(QPixmap(":/img/resources/image/na.png"));
    ui->label_img->setScaledContents(true);
    //05-4显示动画gif
    auto *label_gif = new QLabel(this);
    label_gif->resize(100,100);
    label_gif->move(600,100);

    auto *movie1 = new QMovie(":/img/resources/image/biting.gif");
    label_gif->setMovie(movie1);
    label_gif->setScaledContents(true);
    movie1->start();

    connect(ui->pushButton_4, &QPushButton::clicked,
            this,[=](){
        movie1->stop();
    });

}

UiMainWindow::~UiMainWindow() {
    delete ui;
}

void UiMainWindow::on_pushButton_clicked() {
    QString fileName = QFileDialog::getOpenFileName(
            this, tr("打开文件"),
            "../",
            tr("Images (*.png *.xpm *.jpg);;Text (*.txt)"));

    if (!fileName.isEmpty()) {
        ui->textBrowser->append(fileName);
    }
}

void UiMainWindow::on_popButton_2_clicked() {
    QStringList files = QFileDialog::getOpenFileNames(
            this,
            "打开文件",
            "../",
            "Images (*.png *.xpm *.jpg)");

    for (int i = 0; i < files.count(); i++) {
//        qDebug() << files.at(i);
        ui->textBrowser->append(files.at(i));
    }
}

void UiMainWindow::on_popButton_3_clicked() {
    QPalette pal = ui->textBrowser->palette();//获取现有palette
    QColor iniColor = pal.color(QPalette::Text);//现有文字颜色
    QColor color = QColorDialog::getColor(iniColor, this, "选择颜色");//颜色对话框

    if (color.isValid()) {
        pal.setColor(QPalette::Text, color);
        ui->textBrowser->setPalette(pal);
    }
}

void UiMainWindow::on_popButton_font_clicked() {

    bool ok;

    QFont iniFont = ui->textBrowser->font();
    QFont font = QFontDialog::getFont(&ok, iniFont, this);

    if (ok) {
        // the user clicked OK and font is set to the font the user selected
        ui->textBrowser->setFont(font);
    }

}

void UiMainWindow::on_popButton_message_clicked() {
    //错误弹窗
//    QMessageBox::critical(this,"critical","程序出现错误");
    //警告弹窗
//    QMessageBox::warning(this,"warning","程序出现警告");
    //消息弹窗
//    QMessageBox::information(this, "information", "程序运行正常",
//                             QMessageBox::Ok, QMessageBox::NoButton);
    //消息选择弹窗
    QMessageBox::StandardButton ret;
    ret = QMessageBox::question(this, "question", "文件已修改 是否保存",
                                QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel,
                                QMessageBox::NoButton);

    if (ret == QMessageBox::Yes) {
        qDebug() << "正在保存";
    } else if (ret == QMessageBox::Cancel) {
        qDebug() << "取消";
    } else {
        qDebug() << "不保存";
    }
}

void UiMainWindow::on_popButton_input_clicked() {
    //生成输入文本对话框
    bool ok;
    QString text = QInputDialog::getText(this, tr("输入文本对话框"),
                                         tr("请输入文字"), QLineEdit::Normal,
                                         "demo", &ok);
    if (ok && !text.isEmpty())
        ui->textBrowser->append(text);
}
