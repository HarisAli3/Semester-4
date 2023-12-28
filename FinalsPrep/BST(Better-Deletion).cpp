// Better Approach for Deletion

#include <iostream>
using namespace std;
class Tree {
    int data;
    Tree *left;
    Tree *right;

public:
    Tree() : data(0), left(nullptr), right(nullptr) {}

    void insertNode(Tree *&root, int num)
    {
        Tree *newNode = new Tree;
        newNode->data = num;
        newNode->left = newNode->right = nullptr;

        if (!root)
        {
            root = newNode;
        } else
        {
            Tree *nodePtr = root;
            while (nodePtr != nullptr) {
                if (num < nodePtr->data) {
                    if (nodePtr->left) {
                        nodePtr = nodePtr->left;
                    } else {
                        nodePtr->left = newNode;
                        break;
                    }
                } else if (num > nodePtr->data) {
                    if (nodePtr->right)
                        nodePtr = nodePtr->right;
                    else {
                        nodePtr->right = newNode;
                        break;
                    }
                } else {
                    cout << "Duplicate value found in tree.\n";
                    break;
                }
            }
        }
    }
    void inorder(Tree* root) ;
    void preorder(Tree* root);
    void postorder(Tree* root);
    void makeDeletion(Tree *& nodePtr);
    void deleteNode(Tree*& nodePtr, int num);
};
void Tree::deleteNode(Tree*& nodePtr, int num) {
    if (nodePtr == nullptr){
        cout <<num<<" Not found"<<endl;

    }else if(num > nodePtr->data){
        deleteNode(nodePtr->right ,num);
    }else if(num < nodePtr->data){
        deleteNode(nodePtr->left,num);
    }else{
        Tree* temp; //temporary nodePtr
        if (nodePtr->left == nullptr) {
            temp = nodePtr;
            nodePtr=nodePtr->right;
            delete temp;
        } else if (nodePtr->right == nullptr) {
            temp = nodePtr;
            nodePtr=nodePtr->left;
            delete temp;
        }else{
            makeDeletion( nodePtr);
        }
    }
}
void Tree ::makeDeletion(Tree *&nodePtr) {
   Tree * temp=nodePtr->right;
    Tree* tempParent = nodePtr;
    while(temp->left!=nullptr){
        tempParent = temp;
        temp=temp->left;

    }
    nodePtr->data=temp->data;
    if (tempParent == nodePtr) {
        nodePtr->right = temp->right;
    } else {
        tempParent->left = temp->right;
    }
    delete temp;
}

void Tree :: inorder(Tree* root) {
    if (root == nullptr) {
        return;
    } else {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
void Tree ::postorder(Tree *root) {
    if (root == nullptr) {
        return;
    } else {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
void Tree :: preorder(Tree* root) {
    if (root == nullptr) {
        return;
    } else {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
int main() {

    Tree* root = nullptr;

    root->insertNode(root, 5);
    root->insertNode(root, 8);
    root->insertNode(root, 2);
    root->insertNode(root, 6);
    root->insertNode(root, 1);
    root->insertNode(root, 12);
    root->insertNode(root, 9);



    cout << "Inorder: ";
    root->inorder(root);
    cout << "\nPreorder: ";
    root->preorder(root);
    cout << "\nPostorder: ";
    root->postorder(root);
    cout <<"\n...Deleting Node...."<<endl;
    int valueToDelete = 5;
    root->deleteNode(root, valueToDelete);
    cout << "Inorder: ";
    root->inorder(root);
    cout << "\nPreorder: ";
    root->preorder(root);
    cout << "\nPostorder: ";
    root->postorder(root);


    return 0;
}
