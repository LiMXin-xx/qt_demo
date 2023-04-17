//
// Created by LiMXin-PC on 2023/4/11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "ui_mainwindow.h"
#include <main/mainwindow.h>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>
#include <QFile>
#include <QDebug>

/**
 * @brief
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainWindow) {
    // 01 ui设置
    ui->setupUi(this);

    //02 设置主界面
    this->resize(800, 600);
    //02-1设置背景图
    this->setAutoFillBackground(true);
    //02-2创建背景图片控件
//    QPixmap pix_bkg = QPixmap(":/img/resources/image/bk.jpg").scaled(this->size());
//    pix_bkg.load(":/img/resources/image/bk.jpg");
    //02-3加载背景图
//    QPalette palette_bkg;
//    palette_bkg.setBrush(QPalette::Background,QBrush(pix_bkg));
//    this->setPalette(palette_bkg);

    //03 创建菜单栏
    //方法一
    auto *menubar = new QMenuBar(this);
    this->setMenuBar(menubar);
    //方法二
//    auto *menubar = menuBar();
//    this->setMenuBar(menubar);

    //03-1 创建菜单
    auto *menu1 = new QMenu("文件");
    auto *menu2 = new QMenu("编辑");
    auto *menu3 = new QMenu("构建");

    //03-2 添加菜单到菜单栏
    menubar->addMenu(menu1);
    menubar->addMenu(menu2);
    menubar->addMenu(menu3);

    //04 创建菜单项
    auto *act1 = new QAction("打开文件");
    auto *act2 = new QAction("另存为");
    auto *act3 = new QAction("关闭文件");

    //04-1 添加菜单项到菜单
    menu1->addAction(act1);
    menu1->addAction(act2);
    menu1->addAction(act3);
    connect(act3, &QAction::triggered, this, &QMainWindow::close);

    //05 创建工具栏
    auto *toolbar1 = new QToolBar(this);
//    this->addToolBar(toolbar1);
    this->addToolBar(Qt::LeftToolBarArea, toolbar1);
    //05-1 添加工具项
    auto *tool1 = new QAction("文件");
    auto *tool2 = new QAction("保存");
    auto *tool3 = new QAction("工具");
    auto *tool4 = new QAction("关闭");
    toolbar1->addAction(tool1);
    toolbar1->addAction(tool2);
    toolbar1->addAction(tool3);
    toolbar1->addAction(tool4);
    //05-2修改工具栏不可移动（默认可上下移动）
//    toolbar1->setMovable(false);
    //05-3 工具栏指定停靠区
    toolbar1->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
    //05-4 设置工具栏的浮动状态
    toolbar1->setFloatable(false);

    //06 创建状态栏
    //方法1
//    auto *statusbar1 = statusBar();
    //方法二
    auto *statusbar1 = new QStatusBar(this);
    //06-1 放置状态栏到窗口
    this->setStatusBar(statusbar1);
    //06-2 状态栏显示临时信息
//    statusbar1->showMessage("页面显示成功", 3000);
    //06-2-1 状态栏显示正式信息（一般位于状态栏左侧）
    auto *label1 = new QLabel("状态栏", this);
    statusbar1->addWidget(label1);
    //06-2-2 状态栏显示永久信息（一般位于状态栏右侧）
    auto *label2 = new QLabel("www.example.com", this);
    statusbar1->addPermanentWidget(label2);

    //07 添加铆接部件（浮动窗口）
    auto *dockwidget1 = new QDockWidget("铆接部件", this);
    this->addDockWidget(Qt::RightDockWidgetArea, dockwidget1);

    //08 添加核心部件（记事本）
    auto *edit1 = new QTextEdit("文本编辑器", this);
    this->setCentralWidget(edit1);

    //09 给菜单栏增加图片
    //09-1 创建图片控件
    QPixmap pix1;
    //09-2选择图片
    pix1.load(":/img/resources/image/na.png");
    //09-3给菜单项设置图片
    tool1->setIcon(QIcon(pix1));

}

/**
 * @brief
 */
MainWindow::~MainWindow() {
    delete ui;
}
