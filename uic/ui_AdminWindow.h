/********************************************************************************
** Form generated from reading UI file 'AdminWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include <QShortcut>

QT_BEGIN_NAMESPACE

class Ui_AdminWindowClass
{
public:
    QWidget *centralwidget;
    QPushButton *pushAddButton;
    QPushButton *pushRemoveButton;
    QPushButton *pushUpdateButton;
    QFrame *line;
    QFrame *line_2;
    QTextBrowser *titleAddValue;
    QLineEdit *titleAddText;
    QTextBrowser *authorAddValue;
    QLineEdit *authorAddText;
    QTextBrowser *genreAddValue;
    QLineEdit *genreAddText;
    QTextBrowser *descAddValue;
    QLineEdit *descAddText;
    QTextBrowser *descAddValue_2;
    QLineEdit *linkAddText;
    QTextBrowser *descAddValue_3;
    QLineEdit *yearAddText;
    QLineEdit *authorRmvText;
    QTextBrowser *titleAddValue_2;
    QTextBrowser *authorAddValue_2;
    QLineEdit *titleRmvText;
    QLineEdit *yearUpdText;
    QLineEdit *authorUpdText;
    QTextBrowser *descAddValue_4;
    QLineEdit *genreUpdText;
    QTextBrowser *descAddValue_5;
    QTextBrowser *genreAddValue_2;
    QTextBrowser *titleAddValue_3;
    QLineEdit *descUpdText;
    QTextBrowser *descAddValue_6;
    QTextBrowser *authorAddValue_3;
    QLineEdit *linkUpdText;
    QLineEdit *titleUpdText;
    QTextBrowser *textBrowserAdd;
    QPushButton *pushSwitchUser;
    QPushButton *pushDisplayButton;
    QTextBrowser *textBrowserDisplay;
    QPushButton *pushSaveButton;
    QPushButton *pushLoadButton;
    QPushButton *pushExitButton;
    QTextBrowser *textBrowserUpd;
    QTextBrowser *textBrowserRmv;
    QLineEdit *loadFileName;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lbl_time;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminWindowClass)
    {
        if (AdminWindowClass->objectName().isEmpty())
            AdminWindowClass->setObjectName(QString::fromUtf8("AdminWindowClass"));
        AdminWindowClass->setEnabled(true);
        AdminWindowClass->resize(648, 648);
        AdminWindowClass->setMinimumSize(QSize(648, 648));
        AdminWindowClass->setMaximumSize(QSize(648, 648));
        AdminWindowClass->setMouseTracking(true);
        centralwidget = new QWidget(AdminWindowClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushAddButton = new QPushButton(centralwidget);
        pushAddButton->setObjectName(QString::fromUtf8("pushAddButton"));
        pushAddButton->setGeometry(QRect(20, 20, 160, 30));
        pushAddButton->setMinimumSize(QSize(160, 30));
        pushAddButton->setMaximumSize(QSize(160, 30));
        pushRemoveButton = new QPushButton(centralwidget);
        pushRemoveButton->setObjectName(QString::fromUtf8("pushRemoveButton"));
        pushRemoveButton->setGeometry(QRect(250, 20, 160, 30));
        pushRemoveButton->setMinimumSize(QSize(160, 30));
        pushRemoveButton->setMaximumSize(QSize(160, 28));
        pushUpdateButton = new QPushButton(centralwidget);
        pushUpdateButton->setObjectName(QString::fromUtf8("pushUpdateButton"));
        pushUpdateButton->setGeometry(QRect(470, 20, 160, 30));
        pushUpdateButton->setMinimumSize(QSize(160, 30));
        pushUpdateButton->setMaximumSize(QSize(160, 30));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(200, 10, 20, 331));
        line->setMinimumSize(QSize(20, 331));
        line->setMaximumSize(QSize(20, 331));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(430, 10, 20, 331));
        line_2->setMinimumSize(QSize(20, 331));
        line_2->setMaximumSize(QSize(20, 331));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        titleAddValue = new QTextBrowser(centralwidget);
        titleAddValue->setObjectName(QString::fromUtf8("titleAddValue"));
        titleAddValue->setGeometry(QRect(10, 60, 41, 31));
        titleAddValue->setMinimumSize(QSize(41, 31));
        titleAddValue->setMaximumSize(QSize(41, 31));
        titleAddText = new QLineEdit(centralwidget);
        titleAddText->setObjectName(QString::fromUtf8("titleAddText"));
        titleAddText->setGeometry(QRect(60, 60, 141, 31));
        titleAddText->setMinimumSize(QSize(141, 31));
        titleAddText->setMaximumSize(QSize(141, 31));
        authorAddValue = new QTextBrowser(centralwidget);
        authorAddValue->setObjectName(QString::fromUtf8("authorAddValue"));
        authorAddValue->setGeometry(QRect(10, 100, 61, 31));
        authorAddValue->setMinimumSize(QSize(61, 31));
        authorAddValue->setMaximumSize(QSize(61, 31));
        authorAddText = new QLineEdit(centralwidget);
        authorAddText->setObjectName(QString::fromUtf8("authorAddText"));
        authorAddText->setGeometry(QRect(80, 100, 121, 31));
        authorAddText->setMinimumSize(QSize(121, 31));
        authorAddText->setMaximumSize(QSize(121, 31));
        genreAddValue = new QTextBrowser(centralwidget);
        genreAddValue->setObjectName(QString::fromUtf8("genreAddValue"));
        genreAddValue->setGeometry(QRect(10, 140, 51, 31));
        genreAddValue->setMinimumSize(QSize(51, 31));
        genreAddValue->setMaximumSize(QSize(51, 31));
        genreAddText = new QLineEdit(centralwidget);
        genreAddText->setObjectName(QString::fromUtf8("genreAddText"));
        genreAddText->setGeometry(QRect(70, 140, 131, 31));
        genreAddText->setMinimumSize(QSize(131, 31));
        genreAddText->setMaximumSize(QSize(131, 31));
        descAddValue = new QTextBrowser(centralwidget);
        descAddValue->setObjectName(QString::fromUtf8("descAddValue"));
        descAddValue->setGeometry(QRect(10, 180, 51, 31));
        descAddValue->setMinimumSize(QSize(51, 31));
        descAddValue->setMaximumSize(QSize(51, 31));
        descAddText = new QLineEdit(centralwidget);
        descAddText->setObjectName(QString::fromUtf8("descAddText"));
        descAddText->setGeometry(QRect(70, 180, 131, 31));
        descAddText->setMinimumSize(QSize(131, 31));
        descAddText->setMaximumSize(QSize(131, 31));
        descAddValue_2 = new QTextBrowser(centralwidget);
        descAddValue_2->setObjectName(QString::fromUtf8("descAddValue_2"));
        descAddValue_2->setGeometry(QRect(10, 220, 41, 31));
        descAddValue_2->setMinimumSize(QSize(41, 31));
        descAddValue_2->setMaximumSize(QSize(41, 31));
        linkAddText = new QLineEdit(centralwidget);
        linkAddText->setObjectName(QString::fromUtf8("linkAddText"));
        linkAddText->setGeometry(QRect(60, 220, 141, 31));
        linkAddText->setMinimumSize(QSize(141, 31));
        linkAddText->setMaximumSize(QSize(141, 31));
        descAddValue_3 = new QTextBrowser(centralwidget);
        descAddValue_3->setObjectName(QString::fromUtf8("descAddValue_3"));
        descAddValue_3->setGeometry(QRect(10, 260, 41, 31));
        descAddValue_3->setMinimumSize(QSize(41, 31));
        descAddValue_3->setMaximumSize(QSize(41, 31));
        yearAddText = new QLineEdit(centralwidget);
        yearAddText->setObjectName(QString::fromUtf8("yearAddText"));
        yearAddText->setGeometry(QRect(60, 260, 141, 31));
        yearAddText->setMinimumSize(QSize(141, 31));
        yearAddText->setMaximumSize(QSize(141, 31));
        authorRmvText = new QLineEdit(centralwidget);
        authorRmvText->setObjectName(QString::fromUtf8("authorRmvText"));
        authorRmvText->setGeometry(QRect(300, 100, 121, 31));
        authorRmvText->setMinimumSize(QSize(121, 31));
        authorRmvText->setMaximumSize(QSize(121, 31));
        titleAddValue_2 = new QTextBrowser(centralwidget);
        titleAddValue_2->setObjectName(QString::fromUtf8("titleAddValue_2"));
        titleAddValue_2->setGeometry(QRect(230, 60, 41, 31));
        titleAddValue_2->setMinimumSize(QSize(41, 31));
        titleAddValue_2->setMaximumSize(QSize(41, 31));
        authorAddValue_2 = new QTextBrowser(centralwidget);
        authorAddValue_2->setObjectName(QString::fromUtf8("authorAddValue_2"));
        authorAddValue_2->setGeometry(QRect(230, 100, 61, 31));
        authorAddValue_2->setMinimumSize(QSize(61, 31));
        authorAddValue_2->setMaximumSize(QSize(61, 31));
        titleRmvText = new QLineEdit(centralwidget);
        titleRmvText->setObjectName(QString::fromUtf8("titleRmvText"));
        titleRmvText->setGeometry(QRect(280, 60, 141, 31));
        titleRmvText->setMinimumSize(QSize(141, 31));
        titleRmvText->setMaximumSize(QSize(141, 31));
        yearUpdText = new QLineEdit(centralwidget);
        yearUpdText->setObjectName(QString::fromUtf8("yearUpdText"));
        yearUpdText->setGeometry(QRect(500, 260, 141, 31));
        yearUpdText->setMinimumSize(QSize(141, 31));
        yearUpdText->setMaximumSize(QSize(141, 31));
        authorUpdText = new QLineEdit(centralwidget);
        authorUpdText->setObjectName(QString::fromUtf8("authorUpdText"));
        authorUpdText->setGeometry(QRect(520, 100, 121, 31));
        authorUpdText->setMinimumSize(QSize(121, 31));
        authorUpdText->setMaximumSize(QSize(121, 31));
        descAddValue_4 = new QTextBrowser(centralwidget);
        descAddValue_4->setObjectName(QString::fromUtf8("descAddValue_4"));
        descAddValue_4->setGeometry(QRect(450, 220, 41, 31));
        descAddValue_4->setMinimumSize(QSize(41, 31));
        descAddValue_4->setMaximumSize(QSize(41, 31));
        genreUpdText = new QLineEdit(centralwidget);
        genreUpdText->setObjectName(QString::fromUtf8("genreUpdText"));
        genreUpdText->setGeometry(QRect(510, 140, 131, 31));
        genreUpdText->setMinimumSize(QSize(131, 31));
        genreUpdText->setMaximumSize(QSize(131, 31));
        descAddValue_5 = new QTextBrowser(centralwidget);
        descAddValue_5->setObjectName(QString::fromUtf8("descAddValue_5"));
        descAddValue_5->setGeometry(QRect(450, 180, 51, 31));
        descAddValue_5->setMinimumSize(QSize(51, 31));
        descAddValue_5->setMaximumSize(QSize(51, 31));
        genreAddValue_2 = new QTextBrowser(centralwidget);
        genreAddValue_2->setObjectName(QString::fromUtf8("genreAddValue_2"));
        genreAddValue_2->setGeometry(QRect(450, 140, 51, 31));
        genreAddValue_2->setMinimumSize(QSize(51, 31));
        genreAddValue_2->setMaximumSize(QSize(51, 31));
        titleAddValue_3 = new QTextBrowser(centralwidget);
        titleAddValue_3->setObjectName(QString::fromUtf8("titleAddValue_3"));
        titleAddValue_3->setGeometry(QRect(450, 60, 41, 31));
        titleAddValue_3->setMinimumSize(QSize(41, 31));
        descUpdText = new QLineEdit(centralwidget);
        descUpdText->setObjectName(QString::fromUtf8("descUpdText"));
        descUpdText->setGeometry(QRect(510, 180, 131, 31));
        descUpdText->setMinimumSize(QSize(131, 31));
        descUpdText->setMaximumSize(QSize(131, 31));
        descAddValue_6 = new QTextBrowser(centralwidget);
        descAddValue_6->setObjectName(QString::fromUtf8("descAddValue_6"));
        descAddValue_6->setGeometry(QRect(450, 260, 41, 31));
        descAddValue_6->setMinimumSize(QSize(41, 31));
        descAddValue_6->setMaximumSize(QSize(41, 31));
        authorAddValue_3 = new QTextBrowser(centralwidget);
        authorAddValue_3->setObjectName(QString::fromUtf8("authorAddValue_3"));
        authorAddValue_3->setGeometry(QRect(450, 100, 61, 31));
        authorAddValue_3->setMinimumSize(QSize(61, 31));
        authorAddValue_3->setMaximumSize(QSize(61, 31));
        linkUpdText = new QLineEdit(centralwidget);
        linkUpdText->setObjectName(QString::fromUtf8("linkUpdText"));
        linkUpdText->setGeometry(QRect(500, 220, 141, 31));
        linkUpdText->setMinimumSize(QSize(141, 31));
        linkUpdText->setMaximumSize(QSize(141, 31));
        titleUpdText = new QLineEdit(centralwidget);
        titleUpdText->setObjectName(QString::fromUtf8("titleUpdText"));
        titleUpdText->setGeometry(QRect(500, 60, 141, 31));
        titleUpdText->setMinimumSize(QSize(141, 31));
        titleUpdText->setMaximumSize(QSize(141, 31));
        textBrowserAdd = new QTextBrowser(centralwidget);
        textBrowserAdd->setObjectName(QString::fromUtf8("textBrowserAdd"));
        textBrowserAdd->setGeometry(QRect(10, 300, 191, 41));
        textBrowserAdd->setMinimumSize(QSize(191, 41));
        textBrowserAdd->setMaximumSize(QSize(191, 41));
        textBrowserAdd->setFrameShadow(QFrame::Sunken);
        textBrowserAdd->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowserAdd->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowserAdd->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        pushSwitchUser = new QPushButton(centralwidget);
        pushSwitchUser->setObjectName(QString::fromUtf8("pushSwitchUser"));
        pushSwitchUser->setGeometry(QRect(10, 350, 631, 31));
        pushSwitchUser->setMinimumSize(QSize(631, 31));
        pushSwitchUser->setMaximumSize(QSize(631, 31));
        pushDisplayButton = new QPushButton(centralwidget);
        pushDisplayButton->setObjectName(QString::fromUtf8("pushDisplayButton"));
        pushDisplayButton->setGeometry(QRect(10, 390, 321, 41));
        pushDisplayButton->setMinimumSize(QSize(321, 41));
        pushDisplayButton->setMaximumSize(QSize(321, 41));
        textBrowserDisplay = new QTextBrowser(centralwidget);
        textBrowserDisplay->setObjectName(QString::fromUtf8("textBrowserDisplay"));
        textBrowserDisplay->setGeometry(QRect(345, 390, 291, 231));
        textBrowserDisplay->setMinimumSize(QSize(291, 231));
        textBrowserDisplay->setMaximumSize(QSize(291, 231));
        pushSaveButton = new QPushButton(centralwidget);
        pushSaveButton->setObjectName(QString::fromUtf8("pushSaveButton"));
        pushSaveButton->setGeometry(QRect(10, 440, 321, 41));
        pushSaveButton->setMinimumSize(QSize(321, 41));
        pushSaveButton->setMaximumSize(QSize(321, 41));
        pushLoadButton = new QPushButton(centralwidget);
        pushLoadButton->setObjectName(QString::fromUtf8("pushLoadButton"));
        pushLoadButton->setGeometry(QRect(10, 490, 321, 41));
        pushLoadButton->setMinimumSize(QSize(321, 41));
        pushLoadButton->setMaximumSize(QSize(321, 41));
        pushExitButton = new QPushButton(centralwidget);
        pushExitButton->setObjectName(QString::fromUtf8("pushExitButton"));
        pushExitButton->setGeometry(QRect(10, 580, 321, 41));
        pushExitButton->setMinimumSize(QSize(321, 41));
        pushExitButton->setMaximumSize(QSize(321, 41));
        textBrowserUpd = new QTextBrowser(centralwidget);
        textBrowserUpd->setObjectName(QString::fromUtf8("textBrowserUpd"));
        textBrowserUpd->setGeometry(QRect(450, 300, 191, 41));
        textBrowserUpd->setMinimumSize(QSize(191, 41));
        textBrowserUpd->setMaximumSize(QSize(191, 41));
        textBrowserUpd->setFrameShadow(QFrame::Sunken);
        textBrowserUpd->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowserUpd->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowserUpd->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        textBrowserRmv = new QTextBrowser(centralwidget);
        textBrowserRmv->setObjectName(QString::fromUtf8("textBrowserRmv"));
        textBrowserRmv->setGeometry(QRect(230, 300, 191, 41));
        textBrowserRmv->setMinimumSize(QSize(191, 41));
        textBrowserRmv->setMaximumSize(QSize(191, 41));
        textBrowserRmv->setFrameShadow(QFrame::Sunken);
        textBrowserRmv->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowserRmv->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowserRmv->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        loadFileName = new QLineEdit(centralwidget);
        loadFileName->setObjectName(QString::fromUtf8("loadFileName"));
        loadFileName->setGeometry(QRect(10, 540, 321, 31));
        loadFileName->setMinimumSize(QSize(321, 31));
        loadFileName->setMaximumSize(QSize(321, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(230, 140, 191, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lbl_time = new QLabel(widget);
        lbl_time->setObjectName(QString::fromUtf8("lbl_time"));

        horizontalLayout->addWidget(lbl_time);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        AdminWindowClass->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AdminWindowClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdminWindowClass->setStatusBar(statusbar);

        retranslateUi(AdminWindowClass);

        QMetaObject::connectSlotsByName(AdminWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindowClass)
    {
        AdminWindowClass->setWindowTitle(QCoreApplication::translate("AdminWindowClass", "AdminWindow", nullptr));
        pushAddButton->setText(QCoreApplication::translate("AdminWindowClass", "Add Book", nullptr));
        pushRemoveButton->setText(QCoreApplication::translate("AdminWindowClass", "Remove Book", nullptr));
        pushUpdateButton->setText(QCoreApplication::translate("AdminWindowClass", "Update Book", nullptr));
        titleAddValue->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Title:</span></p></body></html>", nullptr));
        authorAddValue->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Author:</span></p></body></html>", nullptr));
        genreAddValue->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Genre:</span></p></body></html>", nullptr));
        descAddValue->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Desc:</span></p></body></html>", nullptr));
        descAddValue_2->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Link:</span></p></body></html>", nullptr));
        descAddValue_3->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Year:</span></p></body></html>", nullptr));
        titleAddValue_2->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Title:</span></p></body></html>", nullptr));
        authorAddValue_2->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Author:</span></p></body></html>", nullptr));
        descAddValue_4->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Link:</span></p></body></html>", nullptr));
        descAddValue_5->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Desc:</span></p></body></html>", nullptr));
        genreAddValue_2->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Genre:</span></p></body></html>", nullptr));
        titleAddValue_3->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Title:</span></p></body></html>", nullptr));
        descAddValue_6->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Year:</span></p></body></html>", nullptr));
        authorAddValue_3->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Author:</span></p></body></html>", nullptr));
        textBrowserAdd->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushSwitchUser->setText(QCoreApplication::translate("AdminWindowClass", "Switch to User", nullptr));
        pushDisplayButton->setText(QCoreApplication::translate("AdminWindowClass", "Display All Books", nullptr));
        textBrowserDisplay->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushSaveButton->setText(QCoreApplication::translate("AdminWindowClass", "Save Repository", nullptr));
        pushLoadButton->setText(QCoreApplication::translate("AdminWindowClass", "Load Repository", nullptr));
        pushExitButton->setText(QCoreApplication::translate("AdminWindowClass", "Exit Application", nullptr));
        textBrowserUpd->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowserRmv->setHtml(QCoreApplication::translate("AdminWindowClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("AdminWindowClass", "Current Time:", nullptr));
        lbl_time->setText(QCoreApplication::translate("AdminWindowClass", "00:00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindowClass: public Ui_AdminWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
