/********************************************************************************
** Form generated from reading UI file 'uimainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIMAINWINDOW_H
#define UI_UIMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UiMainWindow
{
public:
    QAction *actionopen_file;
    QAction *actionsave;
    QAction *actionSave_as;
    QAction *actionClose;
    QAction *actionCtrl_C;
    QAction *actionCtrl_V;
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_font;
    QPushButton *pushButton_message;
    QPushButton *pushButton_input;
    QLabel *label;
    QLabel *label_img;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *UiMainWindow)
    {
        if (UiMainWindow->objectName().isEmpty())
            UiMainWindow->setObjectName(QString::fromUtf8("UiMainWindow"));
        UiMainWindow->resize(1124, 658);
        actionopen_file = new QAction(UiMainWindow);
        actionopen_file->setObjectName(QString::fromUtf8("actionopen_file"));
        actionsave = new QAction(UiMainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        actionSave_as = new QAction(UiMainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionClose = new QAction(UiMainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionCtrl_C = new QAction(UiMainWindow);
        actionCtrl_C->setObjectName(QString::fromUtf8("actionCtrl_C"));
        actionCtrl_V = new QAction(UiMainWindow);
        actionCtrl_V->setObjectName(QString::fromUtf8("actionCtrl_V"));
        centralwidget = new QWidget(UiMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(9, 9, 256, 192));
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(9, 207, 69, 121));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 69, 69));
        toolBox->addItem(page, QString::fromUtf8("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 69, 69));
        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(9, 338, 80, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("JetBrains Mono"));
        font.setPointSize(12);
        pushButton_back->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(9, 373, 80, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(9, 402, 80, 23));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(9, 431, 75, 23));
        pushButton_font = new QPushButton(centralwidget);
        pushButton_font->setObjectName(QString::fromUtf8("pushButton_font"));
        pushButton_font->setGeometry(QRect(9, 460, 75, 23));
        pushButton_message = new QPushButton(centralwidget);
        pushButton_message->setObjectName(QString::fromUtf8("pushButton_message"));
        pushButton_message->setGeometry(QRect(9, 489, 75, 23));
        pushButton_input = new QPushButton(centralwidget);
        pushButton_input->setObjectName(QString::fromUtf8("pushButton_input"));
        pushButton_input->setGeometry(QRect(9, 518, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 312, 101, 20));
        label->setFont(font);
        label_img = new QLabel(centralwidget);
        label_img->setObjectName(QString::fromUtf8("label_img"));
        label_img->setGeometry(QRect(340, 390, 191, 121));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 540, 75, 20));
        UiMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UiMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1124, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        UiMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UiMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UiMainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(UiMainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        UiMainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionopen_file);
        menu->addAction(actionsave);
        menu->addAction(actionSave_as);
        menu->addAction(actionClose);
        menu_2->addAction(actionCtrl_C);
        menu_2->addAction(actionCtrl_V);

        retranslateUi(UiMainWindow);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UiMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UiMainWindow)
    {
        UiMainWindow->setWindowTitle(QCoreApplication::translate("UiMainWindow", "UiMainWindow", nullptr));
        actionopen_file->setText(QCoreApplication::translate("UiMainWindow", "Open file", nullptr));
        actionsave->setText(QCoreApplication::translate("UiMainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("UiMainWindow", "Save as", nullptr));
        actionClose->setText(QCoreApplication::translate("UiMainWindow", "Close", nullptr));
        actionCtrl_C->setText(QCoreApplication::translate("UiMainWindow", "Ctrl + C", nullptr));
        actionCtrl_V->setText(QCoreApplication::translate("UiMainWindow", "Ctrl +V", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("UiMainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\351\273\230\350\256\244\351\273\221\350\211\262</span></p></body></html>", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("UiMainWindow", "Page 1", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("UiMainWindow", "Page 2", nullptr));
        pushButton_back->setText(QCoreApplication::translate("UiMainWindow", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QCoreApplication::translate("UiMainWindow", "\351\200\211\346\213\251\344\270\200\344\270\252\346\226\207\344\273\266", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UiMainWindow", "\351\200\211\346\213\251\345\244\232\344\270\252\346\226\207\344\273\266", nullptr));
        pushButton_3->setText(QCoreApplication::translate("UiMainWindow", "\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        pushButton_font->setText(QCoreApplication::translate("UiMainWindow", "\351\200\211\346\213\251\345\255\227\344\275\223", nullptr));
        pushButton_message->setText(QCoreApplication::translate("UiMainWindow", "\346\266\210\346\201\257\345\257\271\350\257\235\346\241\206", nullptr));
        pushButton_input->setText(QCoreApplication::translate("UiMainWindow", "\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206", nullptr));
        label->setText(QCoreApplication::translate("UiMainWindow", "ui\345\210\233\345\273\272\346\240\207\347\255\276", nullptr));
        label_img->setText(QCoreApplication::translate("UiMainWindow", "TextLabel", nullptr));
        pushButton_4->setText(QCoreApplication::translate("UiMainWindow", "\346\232\202\345\201\234", nullptr));
        menu->setTitle(QCoreApplication::translate("UiMainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("UiMainWindow", "\347\274\226\350\276\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiMainWindow: public Ui_UiMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIMAINWINDOW_H
