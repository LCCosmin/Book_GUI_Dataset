#ifndef SAVEWINDOW_H
#define SAVEWINDOW_H
#include "PersistenceEngineFromYAML.h"
#include "ui_SaveWindow.h"

namespace Ui
{
	class SaveWindow;
}

class SaveWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit SaveWindow(BookRepo repo, QWidget* parent = Q_NULLPTR);

private:
	Ui::SaveWindowClass ui;
	BookRepo m_repo;

	QPushButton* saveButton;

	QLineEdit* filename;

	QTextBrowser* messageStatus;

	QRadioButton* csvButton;
	QRadioButton* jsonButton;
	QRadioButton* yamlButton;
	QRadioButton* sqlButton;

public slots:
	void onBtnClickedSave(bool checked = false);

};
#endif
