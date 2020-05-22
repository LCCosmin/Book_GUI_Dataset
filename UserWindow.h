#ifndef USERWINDOW_H
#define USERWINDOW_H
#include "PersistenceEngineFromYAML.h"
#include "ui_UserWindow.h"

namespace Ui
{
	class UserWindow;
}

class UserWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit UserWindow(BookRepo repo, QWidget* parent = Q_NULLPTR);
	
private:
	~UserWindow();
	Ui::UserWindowClass ui;
	BookRepo m_repo;
	BookRepo m_booklist;
	std::stack<int> m_undo_c;
	std::stack<int> m_redo_c;
	std::stack<Book> m_undo;
	std::stack<Book> m_redo;

	int m_i;

	QPushButton* switchUser;
	QPushButton* searchBookButton;
	QPushButton* displayBooklistButton;
	QPushButton* saveBooklistButton;
	QPushButton* loadBooklistButton;
	QPushButton* exitButton;
	QPushButton* yesAnswerButton;
	QPushButton* noContinueAnswerButton;
	QPushButton* noEndAnswerButton;

	QLineEdit* m_search_value;
	QLineEdit* m_load_value;

	QTextBrowser* m_status_value;
	QTextBrowser* m_display_books;
	QTextBrowser* m_display_booklist;

	QTimer* m_timer;

	QLabel* lbl_time;
	
	void disable_buttons_enable();
	void enable_buttons_disable();

	BookRepo get_temp_repo();
	bool UserWindow::ui_check_file_exists(const std::string& name);
	
public slots:
	void onBtnClickedSwitch(bool checked = false);
	void onBtnClickedSearch(bool checked = false);
	void onBtnClickedYes(bool checked = false);
	void onBtnClickedNoContinue(bool checked = false);
	void onBtnClickedNoEnd(bool checked = false);
	void onBtnClickedExit(bool checked = false);
	void onBtnClickedDisplay(bool checked = false);
	void onBtnClickedSave(bool checked = false);
	void onBtnClickedLoad(bool checked = false);
	void UpdateTime();
	void undoIt();
	void redoIt();
};
#endif
