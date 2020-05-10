class TreeNode{
public:
  TreeNode();
  TreeNode(int k);
  //TreeNode(int k, <type> v);
  ~TreeNode();
  //virtual ~TreeNode(); when working when a template class

  int key;
  TreeNode *left;
  TreeNode *right;
};

// treenode implementation
TreeNode::TreeNode(){
  key = 0;
  left = NULL;
  right = NULL;
}

//i'll leave implementation of destructor to you

class BST{
  public:
    BST();
    ~BST();
    //virtual ~BST() - when working with template classes

    void insert(int value); //which in this example is also our key
    void search(int value); //which in this example is also our key

    bool isEmpty();
    TreeNode* getMin();
    TreeNode* getMax();

    TreeNode* getSucccessor(TreeNode *d);
    void printTree(TreeNode *node);

  private:
    TreeNode *root;
};

BST::BST()}{
  root = NULL;
}

BST::~BST(){
  //always lets build some charactter
}

void BST::printTree(TreeNode *node){ // big o run time - ?
  if(node == NULL)
    return;

    printTree(node ->left);
    cout << node-> key << endl;
    printTree(node -> right);
}

TreeNode* BST::getMax(){
  TreeNode *curr = root;

  if(root == NULL){
    return NULL;
  }
  while(curr ->right != NULL){
    curr = curr->right;
  }
  return curr;
}

bool BST::isEmpty(){
  return (root == NULL);
}

void BST::insert(int value){

  if(search(value)){
    cout << "value already exists" << endl;
    return;
  }

  TreeNode *node = new TreeNode(value);

  if(isEmpty){
    //empty tree
    root = node;
  }else{
    //not an empty tree
    TreeNode* curr = root; // start at the root
    TreeNode* parent;

    while(true){
    parent = curr;
    if(value < curr-> key){
      // go left
      curr = curr->left;
      if(curr == NULL){
        parent->left = node;
        break;
        }
      }else{ // either left or right
        //go right & dont need to check =
        curr = curr-> right;
        if(curr = NULL){
          parent->right = node;
          break;
        }
      }
    }
  }
}
