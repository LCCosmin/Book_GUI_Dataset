#include "SaveWindow.h"

SaveWindow::SaveWindow(BookRepo repo, QWidget* parent) :
	QMainWindow(parent)
{
	m_repo.update_repo(repo);
	ui.setupUi(this);

	//Get the elements;
	saveButton = ui.centralwidget->findChild<QPushButton*>("pushSaveButton");

	filename = ui.centralwidget->findChild<QLineEdit*>("saveFileNameText");

	messageStatus = ui.centralwidget->findChild<QTextBrowser*>("saveStatus");

	csvButton = ui.centralwidget->findChild<QRadioButton*>("csvRadioButton");
	jsonButton = ui.centralwidget->findChild<QRadioButton*>("jsonRadioButton");
	yamlButton = ui.centralwidget->findChild<QRadioButton*>("yamlRadioButton");
	sqlButton = ui.centralwidget->findChild<QRadioButton*>("sqlRadioButton");

	connect(saveButton, &QPushButton::clicked, this, &SaveWindow::onBtnClickedSave);
}

void SaveWindow::onBtnClickedSave(bool checked)
{
	std::string  filename_string = toUtf8(filename->displayText());
	char* filename_chr = (char*)filename_string.c_str();

	if(csvButton->isChecked())
	{
		strcat(filename_chr, ".csv");
		ctrl_save_csv(m_repo, filename_chr);
	}
	else if(jsonButton->isChecked())
	{
		strcat(filename_chr, ".json");
		ctrl_save_json(m_repo, filename_chr);
	}
	else if(yamlButton->isChecked())
	{
		strcat(filename_chr, ".yaml");
		ctrl_save_yaml(m_repo, filename_chr);
	}
	else
	{
		strcat(filename_chr, ".sql");
		ctrl_save_mysql(m_repo, filename_chr);
	}

	messageStatus->clear();
	messageStatus->append("<b>Repository saved with success</b>");
	QTest::qWait(2000);
	close();
}
