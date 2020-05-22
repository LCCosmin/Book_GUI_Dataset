#include "Lab10.h"

PersistenceEngineFromCSV::PersistenceEngineFromCSV(BookRepo repo, char* filename)
{
	for(int i = 0; i < repo.get_repo().size(); ++i)
		m_repo.add_book(repo.get_repo()[i]);
	
	strcpy_s(m_filename, filename);
}

void PersistenceEngineFromCSV::set_filename(char* filename)
{
	strcpy_s(m_filename, filename);
}

void PersistenceEngineFromCSV::set_repo(BookRepo repo)
{
	for (int i = 0; i < repo.get_repo().size(); ++i)
		m_repo.add_book(repo.get_repo()[i]);
}
