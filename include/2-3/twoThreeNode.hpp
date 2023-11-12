#ifndef TTNODE_HPP_
#define TTNODE_HPP_

#include <vector>

namespace trees {

class TTNode {
private:
	std::vector<int> data;
	TTNode* parent;
	TTNode* ptrLeft;
	TTNode* ptrMiddle;
	TTNode* ptrRight;
	int size;
public:
	TTNode();
	TTNode(int val);
	void setParent(TTNode* node);
	void setLeft(TTNode* node);
	void setMiddle(TTNode* node);
	void setRight(TTNode* node);
	void setData(std::vector<int> new_data);
	void pushData(int val);
	void deleteData();
	TTNode* getParent();
	TTNode* getLeft();
	TTNode* getMiddle();
	TTNode* getRight();
	int getDataLeft();
	int getDataRight();
	int getSize();
	virtual ~TTNode();
};

} /* namespace trees */

#endif /* ABBNODE_H_ */
