#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "PersistenceEngineFromYAML.h"
#include "ui_MainWindow.h"

namespace Ui
{
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT 

public:
	explicit MainWindow(BookRepo repo,QWidget *parent = Q_NULLPTR);

private:
	Ui::MainWindowClass ui;
	BookRepo m_repo;

	QTextBrowser* welcomeText;
	QPushButton* adminButton;
	QPushButton* userButton;

public slots:
	void onBtnClickedAdmin(bool checked = false);
	void onBtnClickedUser(bool checked = false);
};
#endif
