#ifndef TTNODE_HPP_
#define TTNODE_HPP_
#include <vector>

namespace trees {

class TTNode {
private:
	std::vector<int> data;
	std::vector<TTNode*> children;
	TTNode* parent;
public:
	TTNode();
	TTNode(int val);
	bool isLeaf();
	void setData(std::vector<int> data);
	void setChildren(std::vector<TTNode*> children);
	void pushChildren(int val);
	void pushChildren(TTNode* node);
	void pushData(int val);
	std::vector<int> getData();
	std::vector<TTNode*> getChildren();
	int getSize();
	virtual ~TTNode();
};

} /* namespace trees */

#endif /* TTNODE_HPP_ */
