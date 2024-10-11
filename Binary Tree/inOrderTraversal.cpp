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


// inOrder Traversal: LNR  => Left, Node, Right(for each node)
// preOrder Traversal: NLR  => Node, Left, Right
// postOrder Traversal: LRN  => Left, Right, Node
void inOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // recursive call
    // left, node, right
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
int main(int argc, char const *argv[])
{

    Node *root = NULL;

    // creating the tree
    root = buildTree(root);
    cout << "InOrder Traversal: ";
    inOrder(root);
    cout << endl;
   

    return 0;
};