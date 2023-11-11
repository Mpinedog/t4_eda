/*
 * abb.hpp
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#ifndef ABB_HPP_
#define ABB_HPP_

#include "twoThreeNode.hpp"

namespace trees {

class TT {
private:
	TTNode* root;
public:
	TT();
	void insert_rec(int val, TTNode* node);
	void insert(int val);
	TTNode* find_rec(int val, TTNode* node);
	TTNode* find(int val);
	void traverse_rec(TTNode* node, int level);
	void traverse();
	void showASC_rec(TTNode* node);
	void showASC();
	void updateSize_rec(TTNode* node);
	void updateSize();
	TTNode* k_element_rec(int k, TTNode* node);
	TTNode* k_element(int k);
	virtual ~TT();
};

} /* namespace trees */

#endif /* ABB_HPP_ */
