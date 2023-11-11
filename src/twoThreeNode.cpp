#include "../include/2-3/twoThreeNode.hpp"

namespace trees {

TTNode::TTNode():
	ptrLeft(nullptr), dataLeft(-1), ptrMiddle(nullptr), dataRight(-1), ptrRight(nullptr) {
}

TTNode::TTNode(int val):
	ptrLeft(nullptr), dataLeft(val), ptrMiddle(nullptr), dataRight(val), ptrRight(nullptr) {

}

void TTNode::setLeft(TTNode* node){
	ptrLeft = node;
}

void TTNode::setMiddle(TTNode* node){
	ptrMiddle = node;
}

void TTNode::setRight(TTNode* node){
	ptrRight = node;
}

void TTNode::setDataLeft(int val){
	dataLeft = val;
}

void TTNode::setDataRight(int val){
	dataRight = val;
}

void TTNode::setSize(int s){
	size = s;
}

TTNode* TTNode::getLeft(){
	return ptrLeft;
}

TTNode* TTNode::getMiddle(){
	return ptrMiddle;
}

TTNode* TTNode::getRight(){
	return ptrRight;
}

int TTNode::getDataLeft(){
	return dataLeft;
}

int TTNode::getDataRight(){
	return dataRight;
}

int TTNode::getSize(){
	return size;
}

TTNode::~TTNode() {
	if (ptrLeft != nullptr){
		delete ptrLeft;
	}
	if (ptrRight != nullptr){
		delete ptrRight;
	}
	if (ptrLeft != nullptr){
		delete ptrLeft;
	}
}

} /* namespace trees */
