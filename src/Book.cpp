//
// Created by Sangharsh Seth on 25/09/24.
//
#include "../headers/Book.h"

// Default constructor
Book::Book() : isbn(""), title(""), author(""), isBorrowed(false) {}

// Parameterized constructor
Book::Book(const std::string& isbn, const std::string& title, const std::string& author)
    : isbn(isbn), title(title), author(author), isBorrowed(false) {}

// Getters
std::string Book::getISBN() const {
    return isbn;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

bool Book::getIsBorrowed() const {
    return isBorrowed;
}

// Mark book as borrowed
void Book::borrowBook() {
    isBorrowed = true;
}

// Mark book as returned
void Book::returnBook() {
    isBorrowed = false;
}