#ifndef TT_HPP_
#define TT_HPP_

#include "twoThreeNode.hpp"

namespace trees {

class TT {
private:
    TTNode* root;

public:
    TT();

    void insert(int val);
    void printTree();

    void splitNode(TTNode* node);
    void insert_rec(TTNode* currentNode, int val);
    void printTreeRecursive(TTNode* currentNode, int level);

    ~TT();
};

} /* namespace trees */

#endif /* TT_HPP_ */
