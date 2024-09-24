//
// Created by Sangharsh Seth on 25/09/24.
//

#ifndef BSTNODE_H
#define BSTNODE_H
#include "Book.h"

class BSTNode {
public:
    Book book;
    BSTNode* left;
    BSTNode* right;

    // Constructor
    BSTNode(const Book& book);
};

#endif //BSTNODE_H
