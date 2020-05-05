#include <iostream>
#include <cstdlib>

using namespace std;

template <class T>
class TreeNode {
public:
  TreeNode();
  TreeNode(int k);
  //TreeNode(int k, <type> v);
  ~TreeNode();
  //virtual ~TreeNode(); //- when working with a template class

  int key;
  TreeNode *left;
  TreeNode *right;
};

//treenode implementation
template <class T>
TreeNode<T>::TreeNode() {
  key = 0;
  left = NULL;
  right = NULL;
}

template <class T>
TreeNode<T>::TreeNode(int k){
  key = k;
  left = NULL;
  right = NULL;
}
