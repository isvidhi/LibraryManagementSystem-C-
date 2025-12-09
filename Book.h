#ifndef BOOK_H
#define BOOK_H


#include "author.h"
#include <vector>
#include <iostream>
#include <cstring>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int pages;
    std::string publication;
    std::vector<Author*> authors;

    static int count;

public:
    Book();
    Book(const char* t, std::string a, int p);
    // Book(const Book& other);

    // Book& operator=(const Book &other);
    void addAuthors(Author* authors);

    ~Book();

    void display() const;

    static int getCount();

    friend std::ostream& operator<<(std::ostream& os, const Book& b);

};


#endif // BOOK_H
