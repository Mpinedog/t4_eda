#ifndef TWO_THREE_TREE_HPP_
#define TWO_THREE_TREE_HPP_

#include <iostream>
#include <vector>

class TwoThreeTree {
private:
    struct Node {
        int key1;
        int key2;
        Node* left;
        Node* middle;
        Node* right;

        Node(int k1, int k2 = -1) : key1(k1), key2(k2), left(nullptr), middle(nullptr), right(nullptr) {}
    };

    Node* root;

    Node* insert(Node* node, int key);
    Node* splitNode(Node* parent);
    Node* find(Node* node, int key);
    void traverse(Node* node);

public:
    TwoThreeTree() : root(nullptr) {}
    Node* find(int key);
    void insert(int key);
    void traverse();
};

#endif // TWO_THREE_TREE_HPP_
