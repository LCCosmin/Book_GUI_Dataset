#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "BookRepo.h"

bool ctrl_add_book(Book book, BookRepo &repo);
bool ctrl_rmv_book(char* title, char* author, BookRepo &repo);
//Overide
int ctrl_upd_book(char* title, char* author, BookRepo &repo);
int ctrl_upd_book(Book book, BookRepo &repo, int pos);

void ctrl_save_csv(BookRepo& repo, char* filename);
void ctrl_save_json(BookRepo& repo, char* filename);
void ctrl_save_mysql(BookRepo& repo, char* filename);
void ctrl_save_yaml(BookRepo& repo, char* filename);

void ctrl_load_csv(BookRepo& repo, char* filename);
void ctrl_load_json(BookRepo& repo, char* filename);
void ctrl_load_mysql(BookRepo& repo, char* filename);
void ctrl_load_yaml(BookRepo& repo, char* filename);

QCoreApplication* createApplication(int& argc, char* argv[]);
std::string toUtf8(const QString& s);
#endif