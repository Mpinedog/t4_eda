#include "../include/2-3/twoThree.hpp"
#include <iostream>

namespace trees {

TT::TT() : root(nullptr) {
}

TT::~TT() {
    // Implement destructor logic to free the memory occupied by the tree nodes
}

void TT::insert(int val) {
    if (root == nullptr) {
        root = new TTNode(val);
    } else {
        insert_rec(root, val);
    }
}

void TT::insert_rec(TTNode* currentNode, int val) {
    if (currentNode->isLeaf()) {
        currentNode->pushData(val);
    }
    else {

    }
}

void TT::splitNode(TTNode* node) {
    // Implement node splitting logic
}

void TT::printTree() {
    printTreeRecursive(root, 0);
}

void TT::printTreeRecursive(TTNode* currentNode, int level) {
    // Implement recursive tree printing logic with proper indentation
}

// Implement other functions as needed

} /* namespace trees */
