#ifndef BOOK_H
#define BOOK_H
#include "Main.h"
class Book
{
private:
	char m_title[100];
	char m_author[100];
	char m_gen[10];
	char m_description[100];
	char m_link[100];
	int m_year;

public:
	Book();
	Book(char* title, char* author, char* gen, char* description, char* link, int year);

	char* get_title() { return m_title; }
	char* get_author() { return  m_author; }
	char* get_gen() { return m_gen; }
	char* get_description() { return m_description; }
	char* get_link() { return m_link; }
	int get_year() { return m_year; }

	void set_title(char* title);
	void set_author(char* author);
	void set_gen(char* gen);
	void set_description(char* description);
	void set_link(char* link);
	void set_year(int link);

};
#endif