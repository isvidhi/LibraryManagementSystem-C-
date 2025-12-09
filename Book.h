#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <cstring>
#include <string>

class Book {
private:
    char* title;
    std::string author;
    int pages;

    static int count;

public:
    Book();
    Book(const char* t, std::string a, int p);
    // Book(const Book& other);

    // Book& operator=(const Book &other);

    ~Book();

    void display() const;

    static int getCount();

    friend std::ostream& operator<<(std::ostream& os, const Book& b);

};


#endif // BOOK_H
