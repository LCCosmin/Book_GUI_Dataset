#include "Lab10.h"

bool ctrl_add_book(Book book, BookRepo &repo)
{
	if (repo.find_book(book) == -1)
	{
		repo.add_book(book);
		return true;
	}
	return false;
}

bool ctrl_rmv_book(char* title, char* author, BookRepo &repo)
{
	Book test_book(title, author, "", "", "", -1);
	int pos = repo.find_book(test_book);


	if (pos != -1)
	{
		repo.rmv_book(pos);
		return true;
	}
	return false;
}

int ctrl_upd_book(char* title, char* author, BookRepo &repo)
{
	Book test_book(title, author, "", "", "", -1);

	return repo.find_book(test_book);
}

int ctrl_upd_book(Book book, BookRepo &repo, int pos)
{
	repo.upd_book(book, pos);
	return 1;
}

void ctrl_save_csv(BookRepo& repo, char* file)
{
	PersistenceEngineFromCSV make_save(repo, file);

	make_save.save(make_save.get_repo(), make_save.get_filename());
}

void ctrl_save_json(BookRepo& repo, char*file)
{
	PersistenceEngineFromJSON make_save(repo, file);

	make_save.save(make_save.get_repo(), make_save.get_filename());
}

void ctrl_save_mysql(BookRepo& repo, char* file)
{
	PersistenceEngineFromSQL make_save(repo, file);

	make_save.save(make_save.get_repo(), make_save.get_filename());
}

void ctrl_save_yaml(BookRepo& repo, char* file)
{
	PersistenceEngineFromYAML make_save(repo, file);

	make_save.save(make_save.get_repo(), make_save.get_filename());
}

void ctrl_load_csv(BookRepo& repo, char* file)
{
	PersistenceEngineFromCSV make_save(repo, file);

	repo.update_repo(make_save.load(make_save.get_repo(), make_save.get_filename()));
}

void ctrl_load_json(BookRepo& repo, char* file)
{
	PersistenceEngineFromJSON make_save(repo, file);

	repo.update_repo(make_save.load(make_save.get_repo(), make_save.get_filename()));
}

void ctrl_load_mysql(BookRepo& repo, char* file)
{
	PersistenceEngineFromSQL make_save(repo, file);

	repo.update_repo(make_save.load(make_save.get_repo(), make_save.get_filename()));
}

void ctrl_load_yaml(BookRepo& repo, char* file)
{
	PersistenceEngineFromYAML make_save(repo, file);

	//make_save.load(make_save.get_repo(), make_save.get_filename());

	repo.update_repo(make_save.load(make_save.get_repo(), make_save.get_filename()));
}

QCoreApplication* createApplication(int& argc, char* argv[])
{
	for (int i = 1; i < argc; ++i)
		if (!qstrcmp(argv[i], "-no-gui"))
			return new QCoreApplication(argc, argv);
	return new QApplication(argc, argv);
}

std::string toUtf8(const QString& s)
{
	QByteArray sUtf8 = s.toUtf8();
	return std::string(sUtf8.constData(), sUtf8.size());
}