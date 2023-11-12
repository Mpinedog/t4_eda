#ifndef TT_HPP_
#define TT_HPP_

#include "twoThreeNode.hpp"

namespace trees {

class TT {
private:
	TTNode* root;
public:
	TT();
	void insert_rec(int val, TTNode* node);
	void insert(int val);
	void repare(TTNode* node);
	TTNode* find_rec(int val, TTNode* node);
	TTNode* find(int val);
	virtual ~TT();
};

} /* namespace trees */

#endif /* ABB_HPP_ */
