#include "../include/2-3/twoThree.hpp"

namespace trees {

TT::TT():root(nullptr) {

}

void TT::insert_rec(int val, TTNode* node) {
    if ((node->getLeft()==nullptr)&&(node->getLeft()==nullptr)) {
        node->pushData(val);
        repare(node);
    }
    else if (val < node->getDataLeft()) {
        if (node->getLeft()==nullptr) {
            node->setLeft(new TTNode(val));
        }
        else {
            insert_rec(val, node->getLeft());
        }
    }
    else if (val < node->getDataRight()) {
        if (node->getMiddle()==nullptr) {
            node->setMiddle(new TTNode(val));
        }
        else {
            insert_rec(val, node->getMiddle());
        }
    }
    else {
        if (node->getRight()==nullptr) {
            node->setRight(new TTNode(val));
        }
        else {
            insert_rec(val, node->getRight());
        }
    }
}

void TT::insert(int val) {
    if (root == nullptr){
        root = new TTNode(val);
    }
    else{
		insert_rec(val, root);
	}
}

void TT::repare(TTNode* node) {
    if (2 < node->getSize()) {
        TTNode* parent = node->getParent();
        if (parent->getSize()==1) {
            if (parent->getLeft()==nullptr) {
                parent->setLeft(new TTNode(node->getDataLeft()));
                parent->setMiddle(new TTNode(node->getDataRight()));
            }
            else {
                parent->setMiddle(new TTNode(node->getDataLeft()));   
                parent->setRight(new TTNode(node->getDataRight()));
            }
        }
        
    }
}

TTNode* TT::find_rec(int val, TTNode* node) {}
TTNode* TT::find(int val) {}

TT::~TT() {
    delete root;
}
};