//
// Created by Sangharsh Seth on 25/09/24.
//

#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string isbn;
    std::string title;
    std::string author;
    bool isBorrowed;

public:
    // Constructors
    Book();
    Book(const std::string& isbn, const std::string& title, const std::string& author);

    // Getters
    std::string getISBN() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    bool getIsBorrowed() const;

    // Borrow and return functionality
    void borrowBook();
    void returnBook();
};

#endif //BOOK_H
