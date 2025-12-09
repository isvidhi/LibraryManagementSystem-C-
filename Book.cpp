#include "Book.h"
#include "author.h"


Book::Book(){}

Book::Book(const char *title, int pages)
{
    this->title = title;
    this->pages = pages;
}

void Book::addAuthors(Author *author)
{
    authors.push_back(author);
}


