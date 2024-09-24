//
// Created by Sangharsh Seth on 25/09/24.
//
#include "../headers/Library.h"
#include <iostream>

// Constructor
Library::Library() {}

// Add a book to the library
void Library::addBook(const Book& book) {
    booksByISBN[book.getISBN()] = book;
    booksByTitle.insert(book);
}

// Remove a book from the library
void Library::removeBook(const std::string& isbn) {
    Book* book = searchByISBN(isbn);
    if (book) {
        booksByISBN.erase(isbn);
        // NOTE: For simplicity, we're not handling the removal from the BST.
    }
}

// Search for a book by ISBN
Book* Library::searchByISBN(const std::string& isbn) {
    if (booksByISBN.find(isbn) != booksByISBN.end()) {
        return &booksByISBN[isbn];
    }
    return nullptr;
}

// Search for a book by title (using BST)
Book* Library::searchByTitle(const std::string& title) {
    return booksByTitle.search(title);
}

// Borrow a book
bool Library::borrowBook(const std::string& isbn, const std::string& studentName) {
    Book* book = searchByISBN(isbn);
    if (book && !book->getIsBorrowed()) {
        book->borrowBook();
        return true;
    } else if (book && book->getIsBorrowed()) {
        waitlist.push(studentName);  // Add student to waitlist
        std::cout << "Book already borrowed. Added to waitlist." << std::endl;
    }
    return false;
}

// Return a book
void Library::returnBook(const std::string& isbn) {
    Book* book = searchByISBN(isbn);
    if (book && book->getIsBorrowed()) {
        book->returnBook();
        std::cout << "Book returned successfully!" << std::endl;
    }
}

// Display available books by title
void Library::displayAvailableBooksByTitle() const {
    std::list<Book*> books = booksByTitle.inorderTraversal();
    for (Book* book : books) {
        if (!book->getIsBorrowed()) {
            std::cout << book->getTitle() << " by " << book->getAuthor() << std::endl;
        }
    }
}