#include "Lab10.h"

Book::Book()
{
	strcpy_s(m_author, "");
	strcpy_s(m_title, "");
	strcpy_s(m_gen, "");
	strcpy_s(m_description, "");
	strcpy_s(m_link, "");
	m_year = -1;
}

Book::Book(char* title, char* author, char* gen, char* description, char* link, int year)
{
	strcpy_s(m_author, author);
	strcpy_s(m_title, title);
	strcpy_s(m_gen, gen);
	strcpy_s(m_description, description);
	strcpy_s(m_link, link);
	m_year = year;
}

void Book::set_author(char* author)
{
	strcpy_s(m_author, author);
}

void Book::set_description(char* description)
{
	strcpy_s(m_description, description);
}

void Book::set_gen(char* gen)
{
	strcpy_s(m_gen, gen);
}

void Book::set_link(char* link)
{
	strcpy_s(m_link, link);
}

void Book::set_title(char* title)
{
	strcpy_s(m_title, title);
}

void Book::set_year(int year)
{
	m_year = year;
}
