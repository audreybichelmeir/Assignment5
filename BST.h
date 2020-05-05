#include "TreeNode.h"

template <class T>
class BST
{
    public:
        BST();
        ~BST();
        //virtual ~BST() - when working with template classes

        void insert(T value); //which in this example is also our key
        TreeNode<T>* search(T value); //which in this example is also our key
        bool deleteNode(T k);

        bool isEmpty();
        TreeNode<T>* getMin();
        TreeNode<T>* getMax();

        TreeNode<T>* getSuccessor(TreeNode<T>* d);
        void printTree(TreeNode<T>* node);
    private:
      TreeNode<T>* root;
};

template <class T>
BST<T>::BST()
{
    root = NULL;
}

template <class T>
BST<T>::~BST()
{
    //as always let's build some character
}

template <class T>
void BST<T>::printTree(TreeNode<T>* node)
{
    if(node == NULL)
        return;
    printTree(node->left);
    cout << node->key << endl;
    printTree(node->right);
}

template <class T>
TreeNode<T>* BST<T>::getMax()
{
    TreeNode<T>* curr = root; //start at the root

    if(root == NULL)
    {
        return NULL; //tree is empty
    }

    while(curr->right != NULL)
    {
        curr = curr->right;
    }
    return curr; //if tree consisted of a numeric type curr->key or curr->value
}

template <class T>
bool BST<T>::isEmpty()
{
    return (root == NULL);
}

template <class T>
void BST<T>::insert(T value)
{
    TreeNode<T>* node = new TreeNode<T>(value); //value is also the key

    if(root == NULL)
    {
        //we have an empty tree
        root = node;
    }
    else
    {
        //tree is not empty, we need to find the location
        TreeNode<T>* curr = root;
        TreeNode<T>* parent = NULL; //empty node

        while(true)
        {
            //let's find the insertion point
            parent = curr;

            if(value < curr->key)
            {
                //go left
                curr = curr->left;
                if(curr == NULL)
                {
                    parent->left = node;
                    break;
                }
            }
            else
            {
                //go right
                curr = curr->right;
                if(curr == NULL)
                {
                    //we found the nodes home
                    parent->right = node;
                    break;
                }
            }
        }
    }
}

template <class T>
bool BST<T>::search(int value)
{
    if(isEmpty())
    {
        return false;
    }
    else
    {
        //tree is not empty
        TreeNode *current = root;

        while(current->key != value)
        {
            if(value < current->key)
            {
                current = current->left;
            }
            else
            {
                current = current->right;
            }

            if(current == NULL)
            {
                return false;
            }
        }
    }
    return true;
}

//bool BST::deleteNode(int k)
// {
//     if(isEmpty())
//     {
//         return false;
//     }
//     else if(!search(k))
//     {
//         return false;
//     }
//
//     //tree is not empty and value exists
//     TreeNode *current = root;
//     TreeNode *parent = root;
//     bool isLeft = true;
//
//     //usual code to find TreeNode
//     //we will also update pointers
//     while(current->key != k)
//     {
//         parent = current;
//         if(k < current->key)
//         {
//             isLeft = true;
//             current = current->left;
//         }
//         else
//         {
//             isLeft = false;
//             current = current->right;
//         }
//
//         if(current == NULL)
//         {
//             return false;
//         }
//
//         //if we made here, then we've found the node now let's proceed to deleteNode
//
//         //no children, leaf TreeNode
//         if(current->left == NULL && current->right == NULL)
//         {
//             if(current == root)
//             {
//                 root = NULL;
//             }
//             else if(isLeft)
//             {
//                 parent->left = NULL;
//             }
//             else
//             {
//                 parent->right = NULL;
//             }
//         }
//         //one child and the child is isLeft
//         else if(current->right == NULL)
//         {
//             //does not have a right child
//             if(current == root)
//             {
//                 root = current->left;
//             }
//             else if(isLeft)
//             {
//                 parent->left = current->left;
//             }
//             else
//             {
//                 parent->right = current->right;
//             }
//         }
//         else if(current->left == NULL)
//         {
//             //does not have a right child
//             if(current == root)
//             {
//                 root = current->right;
//             }
//             else if(isLeft)
//             {
//                 parent->left = current->right;
//             }
//             else
//             {
//                 parent->right = current->right;
//             }
//         }
//         else
//         {
//             //the node has 2 children
//             TreeNode *successor = getSuccessor(current);
//
//             if(current == root)
//             {
//                 root = successor;
//             }
//             else if(isLeft)
//             {
//                 parent->left = successor;
//             }
//             else
//             {
//                 parent->right = successor;
//             }
//
//             successor->left = current->left;
//
//             return true;
//         }
//     }
// }
//
// TreeNode* BST::getSuccessor(TreeNode *d)
// {
//     //d is the node to be deleteNode
//
//     TreeNode *sp = d;
//     TreeNode *successor = d;
//     TreeNode *current = d->right;
//
//     while(current != NULL)
//     {
//         sp = successor;
//         successor = current;
//         current = current->left;
//     }
//
//     if(successor != d->right)
//     {
//         sp->left = successor->right;
//         successor->right = d->right;
//     }
//
//     return successor;
// }
