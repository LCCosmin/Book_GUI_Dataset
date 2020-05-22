#include "MainWindow.h"
#include "AdminWindow.h"
#include "UserWindow.h"


MainWindow::MainWindow(BookRepo repo, QWidget *parent) :
	QMainWindow(parent)
{
	m_repo.update_repo(repo);
	ui.setupUi(this);

	adminButton = ui.centralWidget->findChild<QPushButton*>("adminButton");
	userButton = ui.centralWidget->findChild<QPushButton*>("userButton");

	connect(adminButton, &QPushButton::clicked, this, &MainWindow::onBtnClickedAdmin);
	connect(userButton, &QPushButton::clicked, this, &MainWindow::onBtnClickedUser);
}

void MainWindow::onBtnClickedAdmin(bool checked)
{
	AdminWindow* w = new AdminWindow(m_repo);
	w->show();
	close();
	//qDebug() << "onBtnClicked";
}

void MainWindow::onBtnClickedUser(bool checked)
{
	UserWindow* w = new UserWindow(m_repo);
	w->show();
	close();
	//qDebug() << "onBtnClicked";
}