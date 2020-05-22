#include "AdminWindow.h"
#include "UserWindow.h"
#include "SaveWindow.h"

AdminWindow::AdminWindow(BookRepo repo, QWidget* parent) :
	QMainWindow(parent)
{
	m_repo.update_repo(repo);
	ui.setupUi(this);

	//Get the elements
	addButton = ui.centralwidget->findChild<QPushButton*>("pushAddButton");
	rmvButton = ui.centralwidget->findChild<QPushButton*>("pushRemoveButton");
	updButton = ui.centralwidget->findChild<QPushButton*>("pushUpdateButton");
	displayButton = ui.centralwidget->findChild<QPushButton*>("pushDisplayButton");
	exitButton = ui.centralwidget->findChild<QPushButton*>("pushExitButton");
	switchUser = ui.centralwidget->findChild<QPushButton*>("pushSwitchUser");
	saveButton = ui.centralwidget->findChild<QPushButton*>("pushSaveButton");
	loadButton = ui.centralwidget->findChild<QPushButton*>("pushLoadButton");
	
	m_load_text = ui.centralwidget->findChild<QLineEdit*>("loadFileName");

	//Make the connection
	connect(addButton, &QPushButton::clicked, this, &AdminWindow::onBtnClickedAdd);
	connect(rmvButton, &QPushButton::clicked, this, &AdminWindow::onBtnClickedRmv);
	connect(updButton, &QPushButton::clicked, this, &AdminWindow::onBtnClickedUpd);
	connect(displayButton, &QPushButton::clicked, this, &AdminWindow::onBtnClickedDisplay);
	connect(exitButton, &QPushButton::clicked, this, &AdminWindow::onBtnClickedExit);
	connect(switchUser, &QPushButton::clicked, this, &AdminWindow::onBtnClickedSwitch);
	connect(saveButton, &QPushButton::clicked, this, &AdminWindow::onBtnClickedSave);
	connect(loadButton, &QPushButton::clicked, this, &AdminWindow::onBtnClickedLoad);

	//Create the timer
	lbl_time = ui.centralwidget->findChild<QLabel*>("lbl_time");
	m_timer = new QTimer(this);
	connect(m_timer, SIGNAL(timeout()), this, SLOT(UpdateTime()));
	m_timer->start(1000);

	//Shortcuts
	new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Z), this, SLOT(undoIt()));
	new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_X), this, SLOT(redoIt()));

}

bool AdminWindow::ui_check_file_exists(const std::string& name)
{
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}

void AdminWindow::onBtnClickedAdd(bool checked)
{
	//Getting the elemenets as QWidgets -> QLineEdit / QTextBrowser
	m_title_text = ui.centralwidget->findChild<QLineEdit*>("titleAddText");
	m_author_text = ui.centralwidget->findChild<QLineEdit*>("authorAddText");
	m_description_text = ui.centralwidget->findChild<QLineEdit*>("descAddText");
	m_genre_text = ui.centralwidget->findChild<QLineEdit*>("genreAddText");
	m_link_text = ui.centralwidget->findChild<QLineEdit*>("linkAddText");
	m_year_text = ui.centralwidget->findChild<QLineEdit*>("yearAddText");
	m_add_text = ui.centralwidget->findChild<QTextBrowser*>("textBrowserAdd");
	
	//Conversion from QString to std::string
	std::string  title_string = toUtf8(m_title_text->displayText());
	std::string  author_string = toUtf8(m_author_text->displayText());
	std::string  description_string = toUtf8(m_description_text->displayText());
	std::string  genre_string = toUtf8(m_genre_text->displayText());
	std::string  link_string = toUtf8(m_link_text->displayText());
	std::string  year_string = toUtf8(m_year_text->displayText());

	if (title_string.empty() || author_string.empty() || description_string.empty() || genre_string.empty() || link_string.empty() || year_string.empty())
	{
		m_add_text->clear();
		m_add_text->append("<b style='font-size:14px'>You need to complete all the colums from above</b>");
	}
	else {
		//Check if the year inputed is a number
		int test = 0;
		for (int i = 0; i < year_string.length() && test == 0; ++i)
			if (year_string[i] < '0' || year_string[i] > '9')
				test = 1;
		if(test == 1)
		{
			m_add_text->clear();
			m_add_text->append("<b style='font-size:14px'>The inputed year HAS to be a NUMBER</b>");
		}
		else {
			//Conversion from std::string to char* or int
			char title_char[100];
			char author_char[100];
			char description_char[100];
			char genre_char[10];
			char link_char[100];
			int year_int = std::stoi(year_string);

			strcpy_s(title_char, title_string.c_str());
			strcpy_s(author_char, author_string.c_str());
			strcpy_s(description_char, description_string.c_str());
			strcpy_s(genre_char, genre_string.c_str());
			strcpy_s(link_char, link_string.c_str());

			//Creating the Book and adding it to the repository
			Book m(title_char, author_char, genre_char, description_char, link_char, year_int);
			m_undo.push(m);
			m_undo_c.push(1);
			
			if (ctrl_add_book(m, m_repo) == true)
			{
				//Clear the input
				m_title_text->clear();
				m_author_text->clear();
				m_description_text->clear();
				m_genre_text->clear();
				m_link_text->clear();
				m_year_text->clear();
				
				m_add_text->clear();
				m_add_text->append("<b style='font-size:14px'>Book added with success</b>");
			}
			else
			{
				//Clear the input
				m_title_text->clear();
				m_author_text->clear();
				m_description_text->clear();
				m_genre_text->clear();
				m_link_text->clear();
				m_year_text->clear();
				
				m_add_text->clear();
				m_add_text->append("<b style='font-size:14px'>Book already exists in the database</b>");
			}
			/*qDebug() << "Title: " << title_char;
			qDebug() << "Author: " << author_char;
			qDebug() << "Description: " << description_char;
			qDebug() << "Genre: " << genre_char;
			qDebug() << "Link: " << link_char;
			qDebug() << "Year: " << year_int;*/
		}
	}
}

void AdminWindow::onBtnClickedRmv(bool checked)
{
	//Getting the elemenets as QWidgets -> QLineEdit / QTextBrowser
	m_title_text = ui.centralwidget->findChild<QLineEdit*>("titleRmvText");
	m_author_text = ui.centralwidget->findChild<QLineEdit*>("authorRmvText");
	m_add_text = ui.centralwidget->findChild<QTextBrowser*>("textBrowserRmv");
	
	//Conversion from QString to std::string
	std::string  title_string = toUtf8(m_title_text->displayText());
	std::string  author_string = toUtf8(m_author_text->displayText());

	if (title_string.empty() || author_string.empty())
	{
		m_add_text->clear();
		m_add_text->append("<b style='font-size:14px'>You need to complete all the colums from above</b>");
	}
	else {
		//Conversion from std::string to char* or int
		char title_char[100];
		char author_char[100];

		strcpy_s(title_char, title_string.c_str());
		strcpy_s(author_char, author_string.c_str());
		m_undo.push(m_repo.get_book(title_char, author_char));
		
		if (ctrl_rmv_book(title_char, author_char, m_repo) == false)
		{
			m_undo.pop();
			m_add_text->clear();
			m_add_text->append("<b style='font-size:14px'>Book does not exists in the database</b>");
		}
		else
		{
			m_undo_c.push(2);
			//Clear the input
			m_title_text->clear();
			m_author_text->clear();
			m_description_text->clear();
			m_genre_text->clear();
			m_link_text->clear();
			m_year_text->clear();

			m_add_text->clear();
			m_add_text->append("<b style='font-size:14px'>Book removed with success</b>");
		}
	}
}

void AdminWindow::onBtnClickedUpd(bool checked)
{
	//Getting the elemenets as QWidgets -> QLineEdit / QTextBrowser
	m_title_text = ui.centralwidget->findChild<QLineEdit*>("titleUpdText");
	m_author_text = ui.centralwidget->findChild<QLineEdit*>("authorUpdText");
	m_description_text = ui.centralwidget->findChild<QLineEdit*>("descUpdText");
	m_genre_text = ui.centralwidget->findChild<QLineEdit*>("genreUpdText");
	m_link_text = ui.centralwidget->findChild<QLineEdit*>("linkUpdText");
	m_year_text = ui.centralwidget->findChild<QLineEdit*>("yearUpdText");
	m_add_text = ui.centralwidget->findChild<QTextBrowser*>("textBrowserUpd");

	//Conversion from QString to std::string
	std::string  title_string = toUtf8(m_title_text->displayText());
	std::string  author_string = toUtf8(m_author_text->displayText());
	std::string  description_string = toUtf8(m_description_text->displayText());
	std::string  genre_string = toUtf8(m_genre_text->displayText());
	std::string  link_string = toUtf8(m_link_text->displayText());
	std::string  year_string = toUtf8(m_year_text->displayText());

	if (title_string.empty() || author_string.empty() || description_string.empty() || genre_string.empty() || link_string.empty() || year_string.empty())
	{
		m_add_text->clear();
		m_add_text->append("<b style='font-size:14px'>You need to complete all the colums from above</b>");
	}
	else {
		//Check if the year inputed is a number
		int test = 0;
		for (int i = 0; i < year_string.length() && test == 0; ++i)
			if (year_string[i] < '0' || year_string[i] > '9')
				test = 1;
		if (test == 1)
		{
			m_add_text->clear();
			m_add_text->append("<b style='font-size:14px'>The inputed year HAS to be a NUMBER</b>");
		}
		else {
			//Conversion from std::string to char* or int
			char title_char[100];
			char author_char[100];
			char description_char[100];
			char genre_char[10];
			char link_char[100];
			int year_int = std::stoi(year_string);

			strcpy_s(title_char, title_string.c_str());
			strcpy_s(author_char, author_string.c_str());
			strcpy_s(description_char, description_string.c_str());
			strcpy_s(genre_char, genre_string.c_str());
			strcpy_s(link_char, link_string.c_str());

			//Creating the Book and adding it to the repository
			Book m(title_char, author_char, genre_char, description_char, link_char, year_int);
			int pos = ctrl_upd_book(title_char, author_char, m_repo);
			if (pos == -1)
			{
				m_add_text->clear();
				m_add_text->append("<b style='font-size:14px'>Book does not exists in the database</b>");
			}
			else
			{
				m_undo.push(m_repo.get_book(title_char, author_char));
				m_undo_c.push(3);
				if (ctrl_upd_book(m, m_repo, pos) == 1)
				{
					//Clear the input
					m_title_text->clear();
					m_author_text->clear();
					m_description_text->clear();
					m_genre_text->clear();
					m_link_text->clear();
					m_year_text->clear();
					
					m_add_text->clear();
					m_add_text->append("<b style='font-size:14px'>Book updated with success</b>");
				}
				else
				{
					m_add_text->clear();
					m_add_text->append("<b style=font-size:14px'>Book does not exists in the database</b>");
				}
			}
			/*qDebug() << "Title: " << title_char;
			qDebug() << "Author: " << author_char;
			qDebug() << "Description: " << description_char;
			qDebug() << "Genre: " << genre_char;
			qDebug() << "Link: " << link_char;
			qDebug() << "Year: " << year_int;*/
		}
	}
}

void AdminWindow::onBtnClickedDisplay(bool checked)
{
	m_display_text = ui.centralwidget->findChild<QTextBrowser*>("textBrowserDisplay");
	
	if (m_repo.get_repo().empty())
	{
		m_display_text->clear();
		m_display_text->append("<b style='font-size:14px'>There are not books in the database</b>");
	}
	else
	{
		m_display_text->clear();
		for(int i  = 0; i < m_repo.get_repo().size(); ++i)
		{
			std::string title(m_repo.get_repo()[i].get_title());
			std::string author(m_repo.get_repo()[i].get_author());
			std::string description(m_repo.get_repo()[i].get_description());
			std::string genre(m_repo.get_repo()[i].get_gen());
			std::string link(m_repo.get_repo()[i].get_link());
			std::string year = std::to_string((m_repo.get_repo()[i].get_year()));

			QString title_qstring = QString::fromStdString("<b style='font-size:14px'>Title: </b>" + title);
			QString author_qstring = QString::fromStdString("<b style='font-size:14px'>Author: </b>" + author);
			QString description_qstring = QString::fromStdString("<b style='font-size:14px'>Description: </b>" + description);
			QString genre_qstring = QString::fromStdString("<b style='font-size:14px'>Genre: </b>" + genre);
			QString link_qstring = QString::fromStdString("<b style='font-size:14px'>Link: </b>" + link);
			QString year_qstring = QString::fromStdString("<b style='font-size:14px'>Year: </b>" + year);
			QString number = QString::fromStdString("Book# " + std::to_string(i + 1));

			m_display_text->append("------------------------------------------------");
			m_display_text->append(number);
			m_display_text->append(title_qstring);
			m_display_text->append(author_qstring);
			m_display_text->append(description_qstring);
			m_display_text->append(genre_qstring);
			m_display_text->append(link_qstring);
			m_display_text->append(year_qstring);
			m_display_text->append("------------------------------------------------");
		}
	}
}

void AdminWindow::onBtnClickedExit(bool checked)
{
	close();
}

void AdminWindow::onBtnClickedSwitch(bool checked)
{
	UserWindow* w = new UserWindow(m_repo);
	w->show();
	close();
}

void AdminWindow::onBtnClickedLoad(bool checked)
{
	std::string  filename_string = toUtf8(m_load_text->displayText());
	char* filename_chr = (char*)filename_string.c_str();

	if (ui_check_file_exists(filename_string) == true)
	{
		if (filename_string[filename_string.size() - 1] == 'v')
		{
			ctrl_load_csv(m_repo, filename_chr);
			m_load_text->clear();
			m_load_text->setText("Repository updated with success");
		}
		else if (filename_string[filename_string.size() - 1] == 'n')
		{
			ctrl_load_json(m_repo, filename_chr);
			m_load_text->clear();
			m_load_text->setText("Repository updated with success");
		}
		else if (filename_string[filename_string.size() - 1] == 'l' && filename_string[filename_string.size() - 2] == 'm')
		{
			ctrl_load_yaml(m_repo, filename_chr);
			m_load_text->clear();
			m_load_text->setText("Repository updated with success");
		}
		else if (filename_string[filename_string.size() - 1] == 'l')
		{
			ctrl_load_mysql(m_repo, filename_chr);
			m_load_text->clear();
			m_load_text->setText("Repository updated with success");
		}
		else
		{
			m_load_text->clear();
			m_load_text->setText("The file does not exists");
		}
	}
	else
	{
		m_load_text->clear();
		m_load_text->setText("The file does not exists");
	}
	
}

void AdminWindow::onBtnClickedSave(bool checked)
{
	SaveWindow* w = new SaveWindow(m_repo);
	w->show();
}

void AdminWindow::UpdateTime()
{
	lbl_time->setText(QTime::currentTime().toString("hh:mm:ss"));
}

AdminWindow::~AdminWindow()
{
	delete addButton;
	delete rmvButton;
	delete updButton;
	delete displayButton;
	delete exitButton;
	delete switchUser;
	delete saveButton;
	delete loadButton;

	delete m_title_text;
	delete m_author_text;
	delete m_description_text;
	delete m_genre_text;
	delete m_link_text;
	delete m_year_text;
	delete m_load_text;

	delete m_add_text;
	delete m_display_text;

	delete m_timer;

	delete lbl_time;
}

void AdminWindow::undoIt()
{
	m_display_text = ui.centralwidget->findChild<QTextBrowser*>("textBrowserDisplay");
	int pos;
	if (m_undo.empty())
	{
		m_display_text->clear();
		m_display_text->append("<b style='font-size:14px'>There are no undo operations available !</b>");
	}
	else {
		switch (m_undo_c.top())
		{
		case 1:
			m_redo.push(m_undo.top());
			m_redo_c.push(1);
			m_undo_c.pop();
			ctrl_rmv_book(m_undo.top().get_title(), m_undo.top().get_author(), m_repo);
			m_undo.pop();
			m_display_text->clear();
			m_display_text->append("<b style='font-size:14px'>Operation undid with success !</b>");
			break;
		case 2:
			m_redo.push(m_undo.top());
			ctrl_add_book(m_undo.top(), m_repo);
			m_redo_c.push(2);
			m_undo.pop();
			m_undo_c.pop();
			m_display_text->clear();
			m_display_text->append("<b style='font-size:14px'>Operation undid with success !</b>");
			break;
		case 3:
			pos = ctrl_upd_book(m_undo.top().get_title(), m_undo.top().get_author(), m_repo);
			m_redo.push(m_repo.get_book(m_undo.top().get_title(), m_undo.top().get_author()));
			m_redo_c.push(3);
			ctrl_upd_book(m_undo.top(), m_repo, pos);
			m_display_text->clear();
			m_undo_c.pop();
			m_undo.pop();
			m_display_text->append("<b style='font-size:14px'>Operation undid with success !</b>");
			break;
		}
	}
}

void AdminWindow::redoIt()
{
	m_display_text = ui.centralwidget->findChild<QTextBrowser*>("textBrowserDisplay");
	int pos;

	if (m_redo.empty())
	{
		m_display_text->clear();
		m_display_text->append("<b style='font-size:14px'>There are no redo operations available !</b>");
	}
	else {
		switch (m_redo_c.top())
		{
		case 1:
			m_undo.push(m_redo.top());
			ctrl_add_book(m_redo.top(), m_repo);
			m_undo_c.push(1);
			m_redo.pop();
			m_redo_c.pop();
			m_display_text->clear();
			m_display_text->append("<b style='font-size:14px'>Operation redid with success !</b>");
			break;
		case 2:
			m_undo.push(m_redo.top());
			m_undo_c.push(2);
			m_redo_c.pop();
			ctrl_rmv_book(m_redo.top().get_title(), m_redo.top().get_author(), m_repo);
			m_redo.pop();
			m_display_text->clear();
			m_display_text->append("<b style='font-size:14px'>Operation redid with success !</b>");
			break;
		case 3:
			m_undo.push(m_repo.get_book(m_redo.top().get_title(), m_redo.top().get_author()));
			m_undo_c.push(3);
			pos = ctrl_upd_book(m_redo.top().get_title(), m_redo.top().get_author(), m_repo);
			ctrl_upd_book(m_redo.top(), m_repo, pos);
			m_redo_c.pop();
			m_redo.pop();
			m_display_text->clear();
			m_display_text->append("<b style='font-size:14px'>Operation redid with success !</b>");
			break;

		}
	}
}
