/********************************************************************************
** Form generated from reading UI file 'PasswordWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDWINDOW_H
#define UI_PASSWORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasswordWindowClass
{
public:
    QWidget *centralwidget;
    QLabel *passwordName;
    QLineEdit *passwordValue;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PasswordWindowClass)
    {
        if (PasswordWindowClass->objectName().isEmpty())
            PasswordWindowClass->setObjectName(QString::fromUtf8("PasswordWindowClass"));
        PasswordWindowClass->resize(275, 72);
        PasswordWindowClass->setMinimumSize(QSize(275, 72));
        PasswordWindowClass->setMaximumSize(QSize(275, 72));
        centralwidget = new QWidget(PasswordWindowClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        passwordName = new QLabel(centralwidget);
        passwordName->setObjectName(QString::fromUtf8("passwordName"));
        passwordName->setGeometry(QRect(20, 10, 81, 31));
        passwordValue = new QLineEdit(centralwidget);
        passwordValue->setObjectName(QString::fromUtf8("passwordValue"));
        passwordValue->setGeometry(QRect(120, 10, 141, 31));
        passwordValue->setMinimumSize(QSize(141, 31));
        passwordValue->setMaximumSize(QSize(141, 31));
        passwordValue->setAutoFillBackground(false);
        PasswordWindowClass->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(PasswordWindowClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PasswordWindowClass->setStatusBar(statusbar);

        retranslateUi(PasswordWindowClass);

        QMetaObject::connectSlotsByName(PasswordWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *PasswordWindowClass)
    {
        PasswordWindowClass->setWindowTitle(QCoreApplication::translate("PasswordWindowClass", "PasswordWindow", nullptr));
        passwordName->setText(QCoreApplication::translate("PasswordWindowClass", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordWindowClass: public Ui_PasswordWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDWINDOW_H
