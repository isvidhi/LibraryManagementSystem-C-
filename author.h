#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>
#include <vector>
// #include "Book.h"

class Book;

class Author
{
private:
    std::string author_name;
    std::string bio;
    std::vector <Book*> bookList;
public:
    Author();
    Author(std::string a, std::string bio);
    void addBooks(Book* books);
    void Display() const;
};

#endif // AUTHOR_H
