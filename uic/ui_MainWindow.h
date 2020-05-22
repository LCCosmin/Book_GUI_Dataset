/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QPushButton *adminButton;
    QPushButton *userButton;
    QTextBrowser *welcomeText;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->setEnabled(true);
        MainWindowClass->resize(648, 648);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowClass->sizePolicy().hasHeightForWidth());
        MainWindowClass->setSizePolicy(sizePolicy);
        MainWindowClass->setMinimumSize(QSize(648, 648));
        MainWindowClass->setMaximumSize(QSize(648, 648));
        MainWindowClass->setMouseTracking(true);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        adminButton = new QPushButton(centralWidget);
        adminButton->setObjectName(QString::fromUtf8("adminButton"));
        adminButton->setGeometry(QRect(30, 330, 240, 240));
        adminButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        adminButton->setToolTipDuration(0);
        userButton = new QPushButton(centralWidget);
        userButton->setObjectName(QString::fromUtf8("userButton"));
        userButton->setGeometry(QRect(370, 330, 240, 240));
        welcomeText = new QTextBrowser(centralWidget);
        welcomeText->setObjectName(QString::fromUtf8("welcomeText"));
        welcomeText->setGeometry(QRect(30, 100, 591, 111));
        welcomeText->setMinimumSize(QSize(591, 111));
        welcomeText->setMaximumSize(QSize(591, 111));
        QFont font;
        font.setPointSize(11);
        welcomeText->setFont(font);
        welcomeText->setMouseTracking(false);
        MainWindowClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindowClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "Main", nullptr));
        adminButton->setText(QCoreApplication::translate("MainWindowClass", "Admin", nullptr));
        userButton->setText(QCoreApplication::translate("MainWindowClass", "User", nullptr));
        welcomeText->setHtml(QCoreApplication::translate("MainWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Comic Sans MS','cursive','sans-serif'; font-size:20pt;\">Please select the interface that you want to use</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
