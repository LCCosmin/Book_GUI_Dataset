#ifndef BOOKREPO_H
#define BOOKREPO_H
#include "Book.h"
class BookRepo
{
private:
	std::vector<Book> m_repo;
public:
	BookRepo();

	void add_book(Book book);
	void rmv_book(int pos);
	void upd_book(Book n_book, int pos);

	int find_book(Book book);
	void update_repo(BookRepo& repo);

	std::vector<Book> get_repo() { return m_repo; }

	Book get_book(char* title, char* author);

};
#endif