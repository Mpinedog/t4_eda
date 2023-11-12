#include "../include/2-3/twoThreeNode.hpp"
#include <algorithm>

namespace trees {

TTNode::TTNode(): parent(nullptr) {
}

TTNode::TTNode(int val): parent(nullptr) {
	data.push_back(val);
}

bool TTNode::isLeaf() {
	return children.empty();
}

void TTNode::setData(std::vector<int> new_data) {
	data = new_data;
}

void TTNode::setChildren(std::vector<TTNode*> new_children) {
	children = new_children;
}

void TTNode::pushChildren(int val) {
	TTNode* node = new TTNode(val);
	for (int i = 0; i < sizeof(children); i++) {
		if (children[i]-> data.front() > node->data.front()) {
			children.insert(children.begin()+i,node);
		}
	}
}

void TTNode::pushChildren(TTNode* node) {
	for (int i = 0; i < sizeof(children); i++) {
		if (children[i]-> data.front() > node->data.front()) {
			children.insert(children.begin()+i,node);
		}
	}
}

void TTNode::pushData(int val){
	data.push_back(val);
	std::sort(data.begin(),data.end());
}

std::vector<int> TTNode::getData() {
	return data;
}

std::vector<TTNode*> TTNode::getChildren() {
	return children;
}

int TTNode::getSize(){
	return sizeof(data);
}

TTNode::~TTNode() {
	for (int i = 0; i < sizeof(children); i++) {
		delete children[i];
	}
}

} /* namespace trees */
