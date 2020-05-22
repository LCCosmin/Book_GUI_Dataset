#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H
#include "PersistenceEngineFromYAML.h"
#include "ui_AdminWindow.h"

namespace Ui
{
	class AdminWindow;
}

class AdminWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit AdminWindow(BookRepo repo, QWidget* parent = Q_NULLPTR);

private:
	~AdminWindow();
	Ui::AdminWindowClass ui;
	BookRepo m_repo;
	std::stack<Book> m_undo;
	std::stack<Book> m_redo;
	std::stack<int> m_undo_c;
	std::stack<int> m_redo_c;
	
	QPushButton* addButton;
	QPushButton* rmvButton;
	QPushButton* updButton;
	QPushButton* displayButton;
	QPushButton* exitButton;
	QPushButton* switchUser;
	QPushButton* saveButton;
	QPushButton* loadButton;

	QLineEdit* m_title_text;
	QLineEdit* m_author_text;
	QLineEdit* m_description_text;
	QLineEdit* m_genre_text;
	QLineEdit* m_link_text;
	QLineEdit* m_year_text;
	QLineEdit* m_load_text;
	
	QTextBrowser* m_add_text;
	QTextBrowser* m_display_text;

	QTimer* m_timer;

	QLabel* lbl_time;
	
	bool ui_check_file_exists(const std::string& name);

public slots:
	void onBtnClickedAdd(bool checked = false);
	void onBtnClickedRmv(bool checked = false);
	void onBtnClickedUpd(bool checked = false);
	void onBtnClickedDisplay(bool checked = false);
	void onBtnClickedExit(bool checked = false);
	void onBtnClickedSwitch(bool checked = false);
	void onBtnClickedSave(bool checked = false);
	void onBtnClickedLoad(bool checked = false);
	void UpdateTime();
	void undoIt();
	void redoIt();
};
#endif
