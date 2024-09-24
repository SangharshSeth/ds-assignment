//
// Created by Sangharsh Seth on 25/09/24.
//

#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "BST.h"
#include <unordered_map>
#include <queue>

class Library {
private:
    std::unordered_map<std::string, Book> booksByISBN;  // Store books by ISBN
    BST booksByTitle;                                   // Store books by title
    std::queue<std::string> waitlist;                   // Waitlist for books

public:
    // Constructor
    Library();

    // Book management
    void addBook(const Book& book);
    void removeBook(const std::string& isbn);
    Book* searchByISBN(const std::string& isbn);
    Book* searchByTitle(const std::string& title);

    // Borrow and return functionality
    bool borrowBook(const std::string& isbn, const std::string& studentName);
    void returnBook(const std::string& isbn);

    // Display methods
    void displayAvailableBooksByTitle() const;
};

#endif //LIBRARY_H
