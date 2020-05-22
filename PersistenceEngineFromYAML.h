#pragma once
#include "PersistenceEngineFromSQL.h"
class PersistenceEngineFromYAML : public PersistenceEngine
{
private:
	BookRepo m_repo;
	char m_filename[100];
public:
	PersistenceEngineFromYAML(BookRepo& repo, char* filename);

	void set_repo(BookRepo& repo);
	void set_filename(char* filename);

	BookRepo get_repo() { return m_repo; }
	char* get_filename() { return m_filename; }
};

