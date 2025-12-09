#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>
#include <vector>
#include <iostream>
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
    Author(std::string author, std::string bio);
    void addBooks(Book* books);
    void Display() const;
    friend std::ostream &operator<<(std::ostream &os, const Author &a);
};

#endif // AUTHOR_H
