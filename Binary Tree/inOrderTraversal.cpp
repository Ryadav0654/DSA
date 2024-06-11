#include <iostream>

using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{

    cout << "Enter the data: ";
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}


void inOrder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main(int argc, char const *argv[])
{

    Node *root = NULL;

    // creating the tree

    root = buildTree(root);
    cout << "PreOrder Traversal: ";
    inOrder(root);
    cout << endl;
   

    return 0;
};