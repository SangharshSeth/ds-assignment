#include <iostream>
#include "./headers/Library.h"

using namespace std;

int main()
{
    Library library;

    // Create some books
    Book book1("123", "C++ Programming", "Bjarne Stroustrup");
    Book book2("456", "Data Structures", "Mark Allen Weiss");
    Book book3("789", "Design Patterns", "Erich Gamma");

    // Add books to the library
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    // Display all available books by title
    std::cout << "Available books in the library:" << std::endl;
    library.displayAvailableBooksByTitle();

    // Borrow a book
    std::cout << "\nBorrowing 'C++ Programming':" << std::endl;
    if (library.borrowBook("123", "John Doe")) {
        std::cout << "Borrowed successfully!" << std::endl;
    }

    // Try to borrow the same book again
    std::cout << "\nBorrowing 'C++ Programming' again:" << std::endl;
    if (!library.borrowBook("123", "Jane Doe")) {
        std::cout << "Couldn't borrow the book!" << std::endl;
    }

    // Return the book
    std::cout << "\nReturning 'C++ Programming':" << std::endl;
    library.returnBook("123");

    // Display all available books after returning
    std::cout << "\nAvailable books in the library after returning:" << std::endl;
    library.displayAvailableBooksByTitle();

    return 0;
}
