//
// Created by LiMXin-PC on 2023/4/11.
//

#ifndef QT_DEMO_WIDGET_H
#define QT_DEMO_WIDGET_H

#include <QWidget>
#include <main/teacher.h>
#include <main/student.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget {
Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);

    ~Widget() override;

    void ClassOver();

    Teacher *teacher;
    Student *student;
protected:

    void closeEvent(QCloseEvent *event);

    void resizeEvent(QResizeEvent *event);

    bool event(QEvent *event);

    void paintEvent(QPaintEvent *event);


private:
    Ui::Widget *ui;
};


#endif //QT_DEMO_WIDGET_H
