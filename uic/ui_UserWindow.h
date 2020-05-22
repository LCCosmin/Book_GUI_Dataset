/********************************************************************************
** Form generated from reading UI file 'UserWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWindowClass
{
public:
    QWidget *centralwidget;
    QPushButton *pushSwitchUser;
    QPushButton *pushSearchButton;
    QTextBrowser *displayTextSearch;
    QLineEdit *searchBooksText;
    QPushButton *pushYesAnswer;
    QPushButton *pushNoContinueAnswer;
    QPushButton *pushNoEndAnswer;
    QPushButton *pushDisplayButton;
    QLineEdit *loadNameFile;
    QPushButton *pushExitButton;
    QPushButton *pushLoadButton;
    QPushButton *pushSaveButton;
    QTextBrowser *textBrowserDisplay;
    QTextBrowser *displayStatusSearch;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lbl_time;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserWindowClass)
    {
        if (UserWindowClass->objectName().isEmpty())
            UserWindowClass->setObjectName(QString::fromUtf8("UserWindowClass"));
        UserWindowClass->resize(648, 648);
        UserWindowClass->setMinimumSize(QSize(648, 648));
        UserWindowClass->setMaximumSize(QSize(648, 648));
        UserWindowClass->setTabletTracking(true);
        centralwidget = new QWidget(UserWindowClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushSwitchUser = new QPushButton(centralwidget);
        pushSwitchUser->setObjectName(QString::fromUtf8("pushSwitchUser"));
        pushSwitchUser->setGeometry(QRect(10, 350, 631, 31));
        pushSwitchUser->setMinimumSize(QSize(631, 31));
        pushSwitchUser->setMaximumSize(QSize(631, 31));
        pushSearchButton = new QPushButton(centralwidget);
        pushSearchButton->setObjectName(QString::fromUtf8("pushSearchButton"));
        pushSearchButton->setGeometry(QRect(10, 10, 241, 51));
        pushSearchButton->setMinimumSize(QSize(241, 51));
        pushSearchButton->setMaximumSize(QSize(241, 51));
        displayTextSearch = new QTextBrowser(centralwidget);
        displayTextSearch->setObjectName(QString::fromUtf8("displayTextSearch"));
        displayTextSearch->setEnabled(false);
        displayTextSearch->setGeometry(QRect(270, 10, 371, 181));
        searchBooksText = new QLineEdit(centralwidget);
        searchBooksText->setObjectName(QString::fromUtf8("searchBooksText"));
        searchBooksText->setGeometry(QRect(10, 70, 241, 51));
        searchBooksText->setMinimumSize(QSize(241, 51));
        searchBooksText->setMaximumSize(QSize(241, 51));
        pushYesAnswer = new QPushButton(centralwidget);
        pushYesAnswer->setObjectName(QString::fromUtf8("pushYesAnswer"));
        pushYesAnswer->setEnabled(false);
        pushYesAnswer->setGeometry(QRect(270, 200, 371, 41));
        pushNoContinueAnswer = new QPushButton(centralwidget);
        pushNoContinueAnswer->setObjectName(QString::fromUtf8("pushNoContinueAnswer"));
        pushNoContinueAnswer->setEnabled(false);
        pushNoContinueAnswer->setGeometry(QRect(270, 250, 371, 41));
        pushNoEndAnswer = new QPushButton(centralwidget);
        pushNoEndAnswer->setObjectName(QString::fromUtf8("pushNoEndAnswer"));
        pushNoEndAnswer->setEnabled(false);
        pushNoEndAnswer->setGeometry(QRect(270, 300, 371, 41));
        pushDisplayButton = new QPushButton(centralwidget);
        pushDisplayButton->setObjectName(QString::fromUtf8("pushDisplayButton"));
        pushDisplayButton->setGeometry(QRect(10, 390, 321, 41));
        pushDisplayButton->setMinimumSize(QSize(321, 41));
        pushDisplayButton->setMaximumSize(QSize(321, 41));
        loadNameFile = new QLineEdit(centralwidget);
        loadNameFile->setObjectName(QString::fromUtf8("loadNameFile"));
        loadNameFile->setGeometry(QRect(10, 540, 321, 31));
        loadNameFile->setMinimumSize(QSize(321, 31));
        loadNameFile->setMaximumSize(QSize(321, 31));
        pushExitButton = new QPushButton(centralwidget);
        pushExitButton->setObjectName(QString::fromUtf8("pushExitButton"));
        pushExitButton->setGeometry(QRect(10, 580, 321, 41));
        pushExitButton->setMinimumSize(QSize(321, 41));
        pushExitButton->setMaximumSize(QSize(321, 41));
        pushLoadButton = new QPushButton(centralwidget);
        pushLoadButton->setObjectName(QString::fromUtf8("pushLoadButton"));
        pushLoadButton->setGeometry(QRect(10, 490, 321, 41));
        pushLoadButton->setMinimumSize(QSize(321, 41));
        pushLoadButton->setMaximumSize(QSize(321, 41));
        pushSaveButton = new QPushButton(centralwidget);
        pushSaveButton->setObjectName(QString::fromUtf8("pushSaveButton"));
        pushSaveButton->setGeometry(QRect(10, 440, 321, 41));
        pushSaveButton->setMinimumSize(QSize(321, 41));
        pushSaveButton->setMaximumSize(QSize(321, 41));
        textBrowserDisplay = new QTextBrowser(centralwidget);
        textBrowserDisplay->setObjectName(QString::fromUtf8("textBrowserDisplay"));
        textBrowserDisplay->setGeometry(QRect(345, 390, 291, 231));
        textBrowserDisplay->setMinimumSize(QSize(291, 231));
        textBrowserDisplay->setMaximumSize(QSize(291, 231));
        displayStatusSearch = new QTextBrowser(centralwidget);
        displayStatusSearch->setObjectName(QString::fromUtf8("displayStatusSearch"));
        displayStatusSearch->setEnabled(false);
        displayStatusSearch->setGeometry(QRect(10, 140, 241, 51));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 200, 241, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lbl_time = new QLabel(layoutWidget);
        lbl_time->setObjectName(QString::fromUtf8("lbl_time"));

        horizontalLayout->addWidget(lbl_time);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        UserWindowClass->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UserWindowClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UserWindowClass->setStatusBar(statusbar);

        retranslateUi(UserWindowClass);

        QMetaObject::connectSlotsByName(UserWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *UserWindowClass)
    {
        UserWindowClass->setWindowTitle(QCoreApplication::translate("UserWindowClass", "UserWindow", nullptr));
        pushSwitchUser->setText(QCoreApplication::translate("UserWindowClass", "Switch to Admin", nullptr));
        pushSearchButton->setText(QCoreApplication::translate("UserWindowClass", "Search", nullptr));
        pushYesAnswer->setText(QCoreApplication::translate("UserWindowClass", "Yes, I want to add the book", nullptr));
        pushNoContinueAnswer->setText(QCoreApplication::translate("UserWindowClass", "No, but I want to continue with the next book", nullptr));
        pushNoEndAnswer->setText(QCoreApplication::translate("UserWindowClass", "No, but I want to finish this process", nullptr));
        pushDisplayButton->setText(QCoreApplication::translate("UserWindowClass", "Display the Booklist", nullptr));
        pushExitButton->setText(QCoreApplication::translate("UserWindowClass", "Exit Application", nullptr));
        pushLoadButton->setText(QCoreApplication::translate("UserWindowClass", "Load the Booklist", nullptr));
        pushSaveButton->setText(QCoreApplication::translate("UserWindowClass", "Save the Booklist", nullptr));
        textBrowserDisplay->setHtml(QCoreApplication::translate("UserWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("UserWindowClass", "Current Time:", nullptr));
        lbl_time->setText(QCoreApplication::translate("UserWindowClass", "00:00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWindowClass: public Ui_UserWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
