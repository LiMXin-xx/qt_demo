//
// Created by LiMXin-PC on 2023/4/11.
//

#ifndef QT_DEMO_STUDENT_H
#define QT_DEMO_STUDENT_H

#include <QObject>

class Student : public QObject {
Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:

public slots:

    void treat();

    void treat(QString food);

};


#endif //QT_DEMO_STUDENT_H
