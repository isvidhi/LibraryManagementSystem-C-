#include "author.h"
#include "Book.h"

Author::Author() {}

Author::Author(std::string author, std::string bio)
{
    this->author_name = author;
    this->bio = bio;
}

void Author::addBooks(Book *books)
{
    bookList.push_back(books);
    books->addAuthors(this);
}

std::ostream& operator<<(std::ostream& os, const Author& a)
{
    os << "Author: " << a.author_name << "\n";
    os << "Bio: " << a.bio << "\n";
    os << "Books written: " << a.bookList.size();
    return os;
}
