#ifndef PERSISTENCE_ENGINE_H
#define PERSISTENCE_ENGINE_H
#include "Controller.h"

class PersistenceEngine
{
public:
	virtual void save(BookRepo &repo, char *filename);
	virtual BookRepo load(BookRepo &repo, char *filename);
};

#endif
