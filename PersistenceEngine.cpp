#include "Lab10.h"

void PersistenceEngine::save(BookRepo& repo,char* filename)
{
	std::fstream fout;
	
	//delete the content
	fout.open(filename, std::ofstream::out | std::ofstream::trunc);
	//write the content
	for(int i = 0; i < repo.get_repo().size(); ++i)
	{
		fout << "Title: " << repo.get_repo()[i].get_title() << '\n';
		fout << "Author: " << repo.get_repo()[i].get_author() << '\n';
		fout << "Description: " << repo.get_repo()[i].get_description() << '\n';
		fout << "Genre: " << repo.get_repo()[i].get_gen() << '\n';
		fout << "Link: " << repo.get_repo()[i].get_link() << '\n';
		fout << "Year: " << repo.get_repo()[i].get_year() << '\n';
	}
	//close the file
	fout.close();
}

BookRepo PersistenceEngine::load(BookRepo& repo, char* filename)
{
	BookRepo test_repo;
	
	//open file
	std::fstream fin;
	
	fin.open(filename, std::ifstream::in);
	//write the content
	char line[101];
	char title[100] = {};
	char author[100] = {};
	char description[100] = {};
	char link[100] = {};
	char genre[100] = {};
	char concat_year[100] = {};
	int year;
	int i = 0;
	int x = 0;

	while (fin.getline(line,100,'\n'))
	{

		//title copy
		if(x == 0)
		{
			strcpy_s(title, "");
			strcat_s(title, line + 7);
			x++;
		}else if (x == 1) //author copy
		{
			strcpy_s(author, "");
			strcat_s(author, line + 8);
			x++;
		}
		else if (x == 2) //description copy
		{
			strcpy_s(description, "");
			strcat_s(description, line + 13);
			x++;
		}
		else if (x == 3) //genre copy
		{
			strcpy_s(genre, "");
			strcat_s(genre, line + 7);
			x++;
		}
		else if (x == 4) //link copy
		{
			strcpy_s(link , "");
			strcat_s(link, line + 6);
			x++;
		}
		else if (x == 5) //year copy
		{
			strcpy_s(concat_year, "");
			strcat_s(concat_year, line + 6);
			year = 0;
			for (int j = 0; j < strlen(concat_year); ++j)
				year = year * 10 + (int)concat_year[j] - '0';

			x = 0;
			Book test_book(title, author, genre, description, link, year);
			test_repo.add_book(test_book);
			i++;
		}
	}
	//close the file
	fin.close();

	return test_repo;
}
