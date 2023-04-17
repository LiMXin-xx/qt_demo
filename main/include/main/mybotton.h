//
// Created by LiMXin-PC on 2023/4/11.
//

#ifndef QT_DEMO_MYBOTTON_H
#define QT_DEMO_MYBOTTON_H

#include <QWidget>
#include <QPushButton>


QT_BEGIN_NAMESPACE
namespace Ui { class MyBotton; }
QT_END_NAMESPACE

class MyBotton : public QPushButton {
Q_OBJECT

public:
    explicit MyBotton(QWidget *parent = nullptr);

    ~MyBotton() override;

signals:
    
public slots:

private:
    Ui::MyBotton *ui;
};


#endif //QT_DEMO_MYBOTTON_H
