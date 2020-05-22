#include "Lab10.h"

BookRepo::BookRepo() = default;

void BookRepo::add_book(Book book)
{
	m_repo.push_back(book);
}

void BookRepo::rmv_book(int pos)
{
	m_repo.erase(m_repo.begin() + pos);
}

void BookRepo::upd_book(Book n_book,int pos)
{
	m_repo[pos].set_author(n_book.get_author());
	m_repo[pos].set_description(n_book.get_description());
	m_repo[pos].set_gen(n_book.get_gen());
	m_repo[pos].set_link(n_book.get_link());
	m_repo[pos].set_title(n_book.get_title());
	m_repo[pos].set_year(n_book.get_year());
}

Book BookRepo::get_book(char* title, char* author)
{
	Book test(title, author, "", "", "", -1);
	int pos = find_book(test);
	if (pos != -1)
		return m_repo[pos];
	return test;
}


int BookRepo::find_book(Book book)
{
	for(int i = 0; i < m_repo.size(); ++i)
	{
		if (strcmp(m_repo[i].get_author(), book.get_author()) == 0 && strcmp(m_repo[i].get_title(), book.get_title()) == 0)
			return i;
	}
	return -1;
}

void BookRepo::update_repo(BookRepo& repo)
{
	m_repo.clear();
	for (int i = 0; i < repo.get_repo().size(); ++i)
		m_repo.push_back(repo.get_repo()[i]);
}

