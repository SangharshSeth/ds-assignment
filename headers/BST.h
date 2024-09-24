//
// Created by Sangharsh Seth on 25/09/24.
//

#ifndef BST_H
#define BST_H
#include "BSTNode.h"
#include <list>

class BST {
private:
    BSTNode* root;

    // Private helper functions
    BSTNode* insert(BSTNode* node, const Book& book);
    BSTNode* search(BSTNode* node, const std::string& title);
    void inorder(BSTNode* node, std::list<Book*>& bookList) const;

public:
    // Constructor
    BST();

    // Public functions
    void insert(const Book& book);
    Book* search(const std::string& title);
    std::list<Book*> inorderTraversal() const;
};
#endif //BST_H
