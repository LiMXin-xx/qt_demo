//
// Created by LiMXin-PC on 2023/4/11.
//

#ifndef QT_DEMO_TEACHER_H
#define QT_DEMO_TEACHER_H

#include <QObject>

class Teacher : public QObject {
Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:

    void hungry();

    void hungry(QString food);

public slots:

};


#endif //QT_DEMO_TEACHER_H
