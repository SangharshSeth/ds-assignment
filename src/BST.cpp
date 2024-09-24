//
// Created by Sangharsh Seth on 25/09/24.
//
#include "../headers/BST.h"

// Constructor
BST::BST() : root(nullptr) {}

// Insert a book into the BST (by title)
void BST::insert(const Book& book) {
    root = insert(root, book);
}

// Private insert function (recursive)
BSTNode* BST::insert(BSTNode* node, const Book& book) {
    if (node == nullptr) {
        return new BSTNode(book);
    }

    if (book.getTitle() < node->book.getTitle()) {
        node->left = insert(node->left, book);
    } else {
        node->right = insert(node->right, book);
    }
    return node;
}

// Search for a book by title
Book* BST::search(const std::string& title) {
    BSTNode* node = search(root, title);
    if (node != nullptr) {
        return &node->book;
    }
    return nullptr;
}

// Private search function (recursive)
BSTNode* BST::search(BSTNode* node, const std::string& title) {
    if (node == nullptr || node->book.getTitle() == title) {
        return node;
    }

    if (title < node->book.getTitle()) {
        return search(node->left, title);
    } else {
        return search(node->right, title);
    }
}

// Inorder traversal (returns all books sorted by title)
std::list<Book*> BST::inorderTraversal() const {
    std::list<Book*> bookList;
    inorder(root, bookList);
    return bookList;
}

// Private inorder traversal helper
void BST::inorder(BSTNode* node, std::list<Book*>& bookList) const {
    if (node != nullptr) {
        inorder(node->left, bookList);
        bookList.push_back(&node->book);
        inorder(node->right, bookList);
    }
}