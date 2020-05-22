#include "UserWindow.h"
#include "SaveWindow.h"
#include "AdminWindow.h"

UserWindow::UserWindow(BookRepo repo, QWidget* parent) :
	QMainWindow(parent)
{
	m_repo.update_repo(repo);
	ui.setupUi(this);

	m_i = 0;
	
	//Get the elements
	switchUser = ui.centralwidget->findChild<QPushButton*>("pushSwitchUser");
	displayBooklistButton = ui.centralwidget->findChild<QPushButton*>("pushDisplayButton");
	saveBooklistButton = ui.centralwidget->findChild<QPushButton*>("pushSaveButton");
	loadBooklistButton = ui.centralwidget->findChild<QPushButton*>("pushLoadButton");
	exitButton = ui.centralwidget->findChild<QPushButton*>("pushExitButton");
	searchBookButton = ui.centralwidget->findChild<QPushButton*>("pushSearchButton");
	yesAnswerButton = ui.centralwidget->findChild<QPushButton*>("pushYesAnswer");
	noContinueAnswerButton = ui.centralwidget->findChild<QPushButton*>("pushNoContinueAnswer");
	noEndAnswerButton = ui.centralwidget->findChild<QPushButton*>("pushNoEndAnswer");
	
	m_load_value = ui.centralwidget->findChild<QLineEdit*>("loadNameFile");
	m_search_value = ui.centralwidget->findChild<QLineEdit*>("searchBooksText");

	m_status_value = ui.centralwidget->findChild<QTextBrowser*>("displayStatusSearch");
	m_display_books = ui.centralwidget->findChild<QTextBrowser*>("displayTextSearch");
	m_display_booklist = ui.centralwidget->findChild<QTextBrowser*>("textBrowserDisplay");
	
	//Make the connections
	connect(switchUser, &QPushButton::clicked, this, &UserWindow::onBtnClickedSwitch);
	connect(searchBookButton, &QPushButton::clicked, this, &UserWindow::onBtnClickedSearch);
	connect(yesAnswerButton, &QPushButton::clicked, this, &UserWindow::onBtnClickedYes);
	connect(noContinueAnswerButton, &QPushButton::clicked, this, &UserWindow::onBtnClickedNoContinue);
	connect(noEndAnswerButton, &QPushButton::clicked, this, &UserWindow::onBtnClickedNoEnd);
	connect(displayBooklistButton, &QPushButton::clicked, this, &UserWindow::onBtnClickedDisplay);
	connect(exitButton, &QPushButton::clicked, this, &UserWindow::onBtnClickedExit);
	connect(saveBooklistButton, &QPushButton::clicked, this, &UserWindow::onBtnClickedSave);
	connect(loadBooklistButton, &QPushButton::clicked, this, &UserWindow::onBtnClickedLoad);

	//Create the timer
	lbl_time = ui.centralwidget->findChild<QLabel*>("lbl_time");
	m_timer = new QTimer(this);
	connect(m_timer, SIGNAL(timeout()), this, SLOT(UpdateTime()));
	m_timer->start(1000);

	//Shortcuts
	new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Z), this, SLOT(undoIt()));
	new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_X), this, SLOT(redoIt()));
}

void UserWindow::onBtnClickedSwitch(bool checked)
{
	AdminWindow* w = new AdminWindow(m_repo);
	w->show();
	close();
}

void UserWindow::onBtnClickedSearch(bool checked)
{
	std::string  search_string = toUtf8(m_search_value->displayText());

	if (m_repo.get_repo().empty())
	{
		m_display_books->append("------------------------------------------------");
		m_display_books->append("<b>There are no books in the database</b>");
		m_display_books->append("------------------------------------------------");
	}
	else {
		if (search_string.empty())
		{
			disable_buttons_enable();

			for (m_i = 0; m_i < m_repo.get_repo().size(); ++m_i)
			{
				m_status_value->clear();
				m_display_books->clear();
				std::string title(m_repo.get_repo()[m_i].get_title());
				std::string author(m_repo.get_repo()[m_i].get_author());
				std::string description(m_repo.get_repo()[m_i].get_description());
				std::string genre(m_repo.get_repo()[m_i].get_gen());
				std::string link(m_repo.get_repo()[m_i].get_link());
				std::string year = std::to_string((m_repo.get_repo()[m_i].get_year()));

				QString title_qstring = QString::fromStdString("<b style='font-size:14px'>Title: </b>" + title);
				QString author_qstring = QString::fromStdString("<b style='font-size:14px'>Author: </b>" + author);
				QString description_qstring = QString::fromStdString("<b style='font-size:14px'>Description: </b>" + description);
				QString genre_qstring = QString::fromStdString("<b style='font-size:14px'>Genre: </b>" + genre);
				QString link_qstring = QString::fromStdString("<b style='font-size:14px'>Link: </b>" + link);
				QString year_qstring = QString::fromStdString("<b style='font-size:14px'>Year: </b>" + year);
				QString number = QString::fromStdString("Book# " + std::to_string(m_i + 1));

				m_display_books->append("------------------------------------------------");
				m_display_books->append(number);
				m_display_books->append(title_qstring);
				m_display_books->append(author_qstring);
				m_display_books->append(description_qstring);
				m_display_books->append(genre_qstring);
				m_display_books->append(link_qstring);
				m_display_books->append(year_qstring);
				m_display_books->append("------------------------------------------------");
				m_display_books->append("<b>You have 10 seconds to decide on the book</b>");

				QTest::qWait(10000);
			}
			enable_buttons_disable();
			m_status_value->clear();
			m_display_books->clear();
		}
		else
		{
			BookRepo temp_bookrepo;
			temp_bookrepo.update_repo(get_temp_repo());
			if (temp_bookrepo.get_repo().empty())
			{
				m_search_value->clear();
				m_search_value->setText("There are no Books that meet the filter");
			}
			else {
				disable_buttons_enable();

				for (m_i = 0; m_i < temp_bookrepo.get_repo().size(); ++m_i)
				{
					m_status_value->clear();
					m_display_books->clear();
					std::string title(temp_bookrepo.get_repo()[m_i].get_title());
					std::string author(temp_bookrepo.get_repo()[m_i].get_author());
					std::string description(temp_bookrepo.get_repo()[m_i].get_description());
					std::string genre(temp_bookrepo.get_repo()[m_i].get_gen());
					std::string link(temp_bookrepo.get_repo()[m_i].get_link());
					std::string year = std::to_string((temp_bookrepo.get_repo()[m_i].get_year()));

					QString title_qstring = QString::fromStdString("<b style='font-size:14px'>Title: </b>" + title);
					QString author_qstring = QString::fromStdString("<b style='font-size:14px'>Author: </b>" + author);
					QString description_qstring = QString::fromStdString("<b style='font-size:14px'>Description: </b>" + description);
					QString genre_qstring = QString::fromStdString("<b style='font-size:14px'>Genre: </b>" + genre);
					QString link_qstring = QString::fromStdString("<b style='font-size:14px'>Link: </b>" + link);
					QString year_qstring = QString::fromStdString("<b style='font-size:14px'>Year: </b>" + year);
					QString number = QString::fromStdString("Book# " + std::to_string(m_i + 1));

					m_display_books->append("------------------------------------------------");
					m_display_books->append(number);
					m_display_books->append(title_qstring);
					m_display_books->append(author_qstring);
					m_display_books->append(description_qstring);
					m_display_books->append(genre_qstring);
					m_display_books->append(link_qstring);
					m_display_books->append(year_qstring);
					m_display_books->append("------------------------------------------------");
					m_display_books->append("<b>You have 10 seconds to decide on the book</b>");

					QTest::qWait(10000);
				}
				enable_buttons_disable();
				m_status_value->clear();
				m_display_books->clear();
			}
		}
	}
}

BookRepo UserWindow::get_temp_repo()
{
	std::string  search_string = toUtf8(m_search_value->displayText());
	BookRepo temp_repo;
	const char* genre = search_string.c_str();
	
	for (int i = 0; i < m_repo.get_repo().size(); ++i)
		if (strcmp(genre, m_repo.get_repo()[i].get_gen()) == 0)
			temp_repo.add_book(m_repo.get_repo()[i]);
	return temp_repo;
}

void UserWindow::disable_buttons_enable()
{
	//disable buttons
	searchBookButton->setEnabled(false);
	switchUser->setEnabled(false);
	displayBooklistButton->setEnabled(false);
	saveBooklistButton->setEnabled(false);
	loadBooklistButton->setEnabled(false);
	exitButton->setEnabled(false);

	//disable texts editors
	m_load_value->setEnabled(false);
	m_search_value->setEnabled(false);

	//disable displayers
	m_display_booklist->setEnabled(false);

	//enable buttons
	m_display_books->setEnabled(true);
	m_status_value->setEnabled(true);
	yesAnswerButton->setEnabled(true);
	noContinueAnswerButton->setEnabled(true);
	noEndAnswerButton->setEnabled(true);
}

void UserWindow::enable_buttons_disable()
{
	//enable buttons
	searchBookButton->setEnabled(true);
	switchUser->setEnabled(true);
	displayBooklistButton->setEnabled(true);
	saveBooklistButton->setEnabled(true);
	loadBooklistButton->setEnabled(true);
	exitButton->setEnabled(true);

	//enable texts editors
	m_load_value->setEnabled(true);
	m_search_value->setEnabled(true);

	//enable displayers
	m_display_booklist->setEnabled(true);

	//disable buttons
	m_display_books->setEnabled(false);
	m_status_value->setEnabled(false);
	yesAnswerButton->setEnabled(false);
	noContinueAnswerButton->setEnabled(false);
	noEndAnswerButton->setEnabled(false);
}

void UserWindow::onBtnClickedYes(bool checked)
{
	m_status_value->clear();
	m_status_value->append("<b style='font-size: 14px;'>Book added to booklist with success</b>");
	m_booklist.add_book(m_repo.get_repo()[m_i]);
	m_undo.push(m_repo.get_repo()[m_i]);
	m_undo_c.push(1);
}

void UserWindow::onBtnClickedNoContinue(bool checked)
{
	m_status_value->clear();
	m_status_value->append("<b style='font-size: 14px;'>Book will not be added to the booklist</b>");
}

void UserWindow::onBtnClickedNoEnd(bool checked)
{
	m_i = m_repo.get_repo().size() + 1;
	m_status_value->clear();
	m_status_value->append("<b style='font-size: 14px;'>Book will not be added to the booklis and the display will end</b>");
}

void UserWindow::onBtnClickedDisplay(bool checked)
{
	if (m_booklist.get_repo().empty())
	{
		m_display_booklist->clear();
		m_display_booklist->append("<b style='font-size:14px'>There are not books in the booklist</b>");
	}
	else
	{
		m_display_booklist->clear();
		for (int i = 0; i < m_booklist.get_repo().size(); ++i)
		{
			std::string title(m_booklist.get_repo()[i].get_title());
			std::string author(m_booklist.get_repo()[i].get_author());
			std::string description(m_booklist.get_repo()[i].get_description());
			std::string genre(m_booklist.get_repo()[i].get_gen());
			std::string link(m_booklist.get_repo()[i].get_link());
			std::string year = std::to_string((m_booklist.get_repo()[i].get_year()));

			QString title_qstring = QString::fromStdString("<b style='font-size:14px'>Title: </b>" + title);
			QString author_qstring = QString::fromStdString("<b style='font-size:14px'>Author: </b>" + author);
			QString description_qstring = QString::fromStdString("<b style='font-size:14px'>Description: </b>" + description);
			QString genre_qstring = QString::fromStdString("<b style='font-size:14px'>Genre: </b>" + genre);
			QString link_qstring = QString::fromStdString("<b style='font-size:14px'>Link: </b>" + link);
			QString year_qstring = QString::fromStdString("<b style='font-size:14px'>Year: </b>" + year);
			QString number = QString::fromStdString("Book# " + std::to_string(i + 1));

			m_display_booklist->append("-------------------------------------------");
			m_display_booklist->append(number);
			m_display_booklist->append(title_qstring);
			m_display_booklist->append(author_qstring);
			m_display_booklist->append(description_qstring);
			m_display_booklist->append(genre_qstring);
			m_display_booklist->append(link_qstring);
			m_display_booklist->append(year_qstring);
			m_display_booklist->append("-------------------------------------------");
		}
	}
}

void UserWindow::onBtnClickedExit(bool checked)
{
	close();
}

bool UserWindow::ui_check_file_exists(const std::string& name)
{
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}

void UserWindow::onBtnClickedLoad(bool checked)
{
	std::string  filename_string = toUtf8(m_load_value->displayText());
	char* filename_chr = (char*)filename_string.c_str();

	if (ui_check_file_exists(filename_string) == true)
	{
		if (filename_string[filename_string.size() - 1] == 'v')
		{
			ctrl_load_csv(m_booklist, filename_chr);
			m_load_value->clear();
			m_load_value->setText("Booklist updated with success");
		}
		else if (filename_string[filename_string.size() - 1] == 'n')
		{
			ctrl_load_json(m_booklist, filename_chr);
			m_load_value->clear();
			m_load_value->setText("Booklist updated with success");
		}
		else if (filename_string[filename_string.size() - 1] == 'l' && filename_string[filename_string.size() - 2] == 'm')
		{
			ctrl_load_yaml(m_booklist, filename_chr);
			m_load_value->clear();
			m_load_value->setText("Booklist updated with success");
		}
		else if (filename_string[filename_string.size() - 1] == 'l')
		{
			ctrl_load_mysql(m_booklist, filename_chr);
			m_load_value->clear();
			m_load_value->setText("Booklist updated with success");
		}
		else
		{
			m_load_value->clear();
			m_load_value->setText("The file does not exists");
		}
	}
	else
	{
		m_load_value->clear();
		m_load_value->setText("The file does not exists");
	}
}

void UserWindow::onBtnClickedSave(bool checked)
{
	SaveWindow* w = new SaveWindow(m_repo);
	w->show();
}

void UserWindow::UpdateTime()
{
	lbl_time->setText(QTime::currentTime().toString("hh:mm:ss"));
}

UserWindow::~UserWindow()
{
	delete switchUser;
	delete searchBookButton;
	delete displayBooklistButton;
	delete saveBooklistButton;
	delete loadBooklistButton;
	delete exitButton;
	delete yesAnswerButton;
	delete noContinueAnswerButton;
	delete noEndAnswerButton;

	delete m_search_value;
	delete m_load_value;

	delete m_status_value;
	delete m_display_books;
	delete m_display_booklist;

	delete m_timer;

	delete lbl_time;
}

void UserWindow::undoIt()
{
	m_display_booklist = ui.centralwidget->findChild<QTextBrowser*>("textBrowserDisplay");
	int pos;
	if (m_undo.empty())
	{
		m_display_booklist->clear();
		m_display_booklist->append("<b style='font-size:14px'>There are no undo operations available !</b>");
	}
	else {
		switch (m_undo_c.top())
		{
		case 1:
			m_redo.push(m_undo.top());
			m_redo_c.push(1);
			m_undo_c.pop();
			ctrl_rmv_book(m_undo.top().get_title(), m_undo.top().get_author(), m_booklist);
			m_undo.pop();
			m_display_booklist->clear();
			m_display_booklist->append("<b style='font-size:14px'>Operation undid with success !</b>");
			break;
		case 2:
			m_redo.push(m_undo.top());
			ctrl_add_book(m_undo.top(), m_booklist);
			m_redo_c.push(2);
			m_undo.pop();
			m_undo_c.pop();
			m_display_booklist->clear();
			m_display_booklist->append("<b style='font-size:14px'>Operation undid with success !</b>");
			break;
		case 3:
			pos = ctrl_upd_book(m_undo.top().get_title(), m_undo.top().get_author(), m_booklist);
			m_redo.push(m_booklist.get_book(m_undo.top().get_title(), m_undo.top().get_author()));
			m_redo_c.push(3);
			ctrl_upd_book(m_undo.top(), m_booklist, pos);
			m_display_booklist->clear();
			m_undo_c.pop();
			m_undo.pop();
			m_display_booklist->append("<b style='font-size:14px'>Operation undid with success !</b>");
			break;
		}
	}
}

void UserWindow::redoIt()
{
	m_display_booklist = ui.centralwidget->findChild<QTextBrowser*>("textBrowserDisplay");
	int pos;

	if (m_redo.empty())
	{
		m_display_booklist->clear();
		m_display_booklist->append("<b style='font-size:14px'>There are no redo operations available !</b>");
	}
	else {
		switch (m_redo_c.top())
		{
		case 1:
			m_undo.push(m_redo.top());
			ctrl_add_book(m_redo.top(), m_booklist);
			m_undo_c.push(1);
			m_redo.pop();
			m_redo_c.pop();
			m_display_booklist->clear();
			m_display_booklist->append("<b style='font-size:14px'>Operation redid with success !</b>");
			break;
		case 2:
			m_undo.push(m_redo.top());
			m_undo_c.push(2);
			m_redo_c.pop();
			ctrl_rmv_book(m_redo.top().get_title(), m_redo.top().get_author(), m_booklist);
			m_redo.pop();
			m_display_booklist->clear();
			m_display_booklist->append("<b style='font-size:14px'>Operation redid with success !</b>");
			break;
		case 3:
			m_undo.push(m_booklist.get_book(m_redo.top().get_title(), m_redo.top().get_author()));
			m_undo_c.push(3);
			pos = ctrl_upd_book(m_redo.top().get_title(), m_redo.top().get_author(), m_booklist);
			ctrl_upd_book(m_redo.top(), m_booklist, pos);
			m_redo_c.pop();
			m_redo.pop();
			m_display_booklist->clear();
			m_display_booklist->append("<b style='font-size:14px'>Operation redid with success !</b>");
			break;

		}
	}
}