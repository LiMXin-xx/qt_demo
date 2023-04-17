#include <QApplication>
#include <QPushButton>
#include <bsp/app.h>
#include <main/mainwindow.h>
#include <main/widget.h>
#include <main/uimainwindow.h>
#include <main/loginwidget.h>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    //01 主程序窗口
//    MainWindow main;
//    main.show();
    // 02 空白窗口
    Widget w;
    w.show();
    // 03 ui控制窗口
//    UiMainWindow ui_main;
//    ui_main.show();
    //04 login
//    LoginWidget loginGui;
//    loginGui.show();

    return QApplication::exec();
}
