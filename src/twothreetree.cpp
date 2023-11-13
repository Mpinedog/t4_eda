#include "../include/2-3/twothreetree.hpp"

TwoThreeTree::Node* TwoThreeTree::insert(Node* node, int key) {
    if (!node) {
        return new Node(key);
    }

    if (node->key2 == -1) {
        // Nodo con un valor
        if (key < node->key1) {
            node->key2 = node->key1;
            node->key1 = key;
        } else {
            node->key2 = key;
        }
    } else {
        // Nodo con dos valores
        if (key < node->key1) {
            node->left = insert(node->left, key);
        } else if (key > node->key2) {
            node->right = insert(node->right, key);
        } else {
            node->middle = insert(node->middle, key);
        }

        // Dividir el nodo si es necesario
        if (node->left && node->middle && node->right) {
            node = splitNode(node);
        }
    }

    return node;
}

TwoThreeTree::Node* TwoThreeTree::splitNode(Node* parent) {
    Node* leftChild = parent->left;
    Node* middleChild = parent->middle;
    Node* rightChild = parent->right;

    if (!leftChild || !middleChild || !rightChild) {
        return parent;
    }

    Node* newParent = new Node(middleChild->key1);
    newParent->left = new Node(leftChild->key1);
    newParent->middle = new Node(rightChild->key1);
    parent->key1 = leftChild->key2;
    parent->key2 = -1;
    parent->left = leftChild->left;
    parent->middle = leftChild->right;
    parent->right = middleChild->left;

    return newParent;
}

void TwoThreeTree::traverse(Node* node) {
    if (node) {
        traverse(node->left);
        std::cout << node->key1 << " ";
        if (node->key2 != -1) {
            std::cout << node->key2 << " ";
        }
        traverse(node->middle);
        if (node->key2 != -1) {
            std::cout << node->key2 << " ";
        }
        traverse(node->right);
    }
}

void TwoThreeTree::insert(int key) {
    root = insert(root, key);
}

void TwoThreeTree::traverse() {
    traverse(root);
    std::cout << std::endl;
}

TwoThreeTree::Node* TwoThreeTree::find(Node* node, int key) {
    if (!node) {
        return nullptr;
    }

    if (key == node->key1 || key == node->key2) {
        return node;
    } else if (key < node->key1) {
        return find(node->left, key);
    } else if (node->key2 != -1 && key > node->key2) {
        return find(node->right, key);
    } else {
        return find(node->middle, key);
    }
}

TwoThreeTree::Node* TwoThreeTree::find(int key) {
    return find(root, key);
}

