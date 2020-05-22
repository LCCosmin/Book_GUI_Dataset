#include "MainWindow.h"

int main(int argc, char *argv[])
{
	QScopedPointer<QCoreApplication> app(createApplication(argc, argv));

	BookRepo repo;
	MainWindow w(repo);
	w.show();

	return app->exec();
	
}
