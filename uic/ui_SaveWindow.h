/********************************************************************************
** Form generated from reading UI file 'SaveWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEWINDOW_H
#define UI_SAVEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveWindowClass
{
public:
    QWidget *centralwidget;
    QRadioButton *csvRadioButton;
    QRadioButton *jsonRadioButton;
    QRadioButton *yamlRadioButton;
    QRadioButton *sqlRadioButton;
    QTextBrowser *descAddValue;
    QLineEdit *saveFileNameText;
    QTextBrowser *saveStatus;
    QPushButton *pushSaveButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SaveWindowClass)
    {
        if (SaveWindowClass->objectName().isEmpty())
            SaveWindowClass->setObjectName(QString::fromUtf8("SaveWindowClass"));
        SaveWindowClass->resize(648, 282);
        SaveWindowClass->setMinimumSize(QSize(648, 282));
        SaveWindowClass->setMaximumSize(QSize(648, 282));
        SaveWindowClass->setMouseTracking(true);
        centralwidget = new QWidget(SaveWindowClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        csvRadioButton = new QRadioButton(centralwidget);
        csvRadioButton->setObjectName(QString::fromUtf8("csvRadioButton"));
        csvRadioButton->setGeometry(QRect(120, 130, 95, 20));
        csvRadioButton->setMinimumSize(QSize(95, 20));
        csvRadioButton->setMaximumSize(QSize(95, 20));
        QFont font;
        font.setPointSize(10);
        csvRadioButton->setFont(font);
        csvRadioButton->setChecked(true);
        jsonRadioButton = new QRadioButton(centralwidget);
        jsonRadioButton->setObjectName(QString::fromUtf8("jsonRadioButton"));
        jsonRadioButton->setGeometry(QRect(210, 130, 95, 20));
        jsonRadioButton->setMinimumSize(QSize(95, 20));
        jsonRadioButton->setMaximumSize(QSize(95, 20));
        jsonRadioButton->setFont(font);
        yamlRadioButton = new QRadioButton(centralwidget);
        yamlRadioButton->setObjectName(QString::fromUtf8("yamlRadioButton"));
        yamlRadioButton->setGeometry(QRect(400, 130, 95, 20));
        yamlRadioButton->setMinimumSize(QSize(95, 20));
        yamlRadioButton->setMaximumSize(QSize(95, 20));
        yamlRadioButton->setFont(font);
        sqlRadioButton = new QRadioButton(centralwidget);
        sqlRadioButton->setObjectName(QString::fromUtf8("sqlRadioButton"));
        sqlRadioButton->setGeometry(QRect(500, 130, 95, 20));
        sqlRadioButton->setMinimumSize(QSize(95, 20));
        sqlRadioButton->setMaximumSize(QSize(95, 20));
        sqlRadioButton->setFont(font);
        descAddValue = new QTextBrowser(centralwidget);
        descAddValue->setObjectName(QString::fromUtf8("descAddValue"));
        descAddValue->setGeometry(QRect(120, 20, 431, 41));
        descAddValue->setMinimumSize(QSize(431, 41));
        descAddValue->setMaximumSize(QSize(431, 41));
        saveFileNameText = new QLineEdit(centralwidget);
        saveFileNameText->setObjectName(QString::fromUtf8("saveFileNameText"));
        saveFileNameText->setGeometry(QRect(120, 70, 431, 31));
        saveFileNameText->setMinimumSize(QSize(141, 31));
        saveFileNameText->setMaximumSize(QSize(1441, 31));
        saveStatus = new QTextBrowser(centralwidget);
        saveStatus->setObjectName(QString::fromUtf8("saveStatus"));
        saveStatus->setGeometry(QRect(210, 210, 251, 41));
        saveStatus->setMinimumSize(QSize(251, 41));
        saveStatus->setMaximumSize(QSize(251, 41));
        pushSaveButton = new QPushButton(centralwidget);
        pushSaveButton->setObjectName(QString::fromUtf8("pushSaveButton"));
        pushSaveButton->setGeometry(QRect(290, 170, 93, 28));
        pushSaveButton->setMinimumSize(QSize(93, 28));
        pushSaveButton->setMaximumSize(QSize(93, 28));
        SaveWindowClass->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SaveWindowClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SaveWindowClass->setStatusBar(statusbar);

        retranslateUi(SaveWindowClass);

        QMetaObject::connectSlotsByName(SaveWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *SaveWindowClass)
    {
        SaveWindowClass->setWindowTitle(QCoreApplication::translate("SaveWindowClass", "SaveWindow", nullptr));
        csvRadioButton->setText(QCoreApplication::translate("SaveWindowClass", "CSV", nullptr));
        jsonRadioButton->setText(QCoreApplication::translate("SaveWindowClass", "JSON", nullptr));
        yamlRadioButton->setText(QCoreApplication::translate("SaveWindowClass", "YAML", nullptr));
        sqlRadioButton->setText(QCoreApplication::translate("SaveWindowClass", "SQL", nullptr));
        descAddValue->setHtml(QCoreApplication::translate("SaveWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Comic Sans MS','cursive','sans-serif'; font-size:10pt;\">Insert the file name below and select the extension</span></p></body></html>", nullptr));
        pushSaveButton->setText(QCoreApplication::translate("SaveWindowClass", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveWindowClass: public Ui_SaveWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEWINDOW_H
