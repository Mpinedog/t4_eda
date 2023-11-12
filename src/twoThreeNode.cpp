#include "../include/2-3/twoThreeNode.hpp"
#include <algorithm>

namespace trees {

TTNode::TTNode():
	parent(nullptr), ptrLeft(nullptr), ptrMiddle(nullptr), ptrRight(nullptr) {
}

TTNode::TTNode(int val):
	parent(nullptr), ptrLeft(nullptr), ptrMiddle(nullptr), ptrRight(nullptr) {
	data.push_back(val);
}

void TTNode::setParent(TTNode* node){
	parent = node;
}

void TTNode::setLeft(TTNode* node){
	ptrLeft = node;
	node->setParent(this);
}

void TTNode::setMiddle(TTNode* node){
	ptrMiddle = node;
	node->setParent(this);
}

void TTNode::setRight(TTNode* node){
	ptrRight = node;
	node->setParent(this);
}

void TTNode::setData(std::vector<int> new_data) {
	data = new_data;
}

void TTNode::pushData(int val){
	data.push_back(val);
	std::sort(data.begin(),data.end());
}

void TTNode::deleteData(){
	data.erase(data.begin() + 1);
}

TTNode* TTNode::getLeft(){
	return ptrLeft;
}

TTNode* TTNode::getMiddle(){
	return ptrMiddle;
}

TTNode* TTNode::getParent(){
	return parent;
}

TTNode* TTNode::getRight(){
	return ptrRight;
}

int TTNode::getDataLeft(){
	return data.front();
}

int TTNode::getDataRight(){
	return data.back();
}

int TTNode::getSize(){
	return data.size();
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
