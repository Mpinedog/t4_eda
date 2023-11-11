#ifndef TTNODE_HPP_
#define TTNODE_HPP_

namespace trees {

class TTNode {
private:
	TTNode* ptrLeft;
	int dataLeft;
	TTNode* ptrMiddle;
	int dataRight;
	TTNode* ptrRight;
	int size;
public:
	TTNode();
	TTNode(int val);
	void setLeft(TTNode* node);
	void setMiddle(TTNode* node);
	void setRight(TTNode* node);
	void setDataLeft(int val);
	void setDataRight(int val);
	void setSize(int s);
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
