#include <iostream>
#include <queue>
using namespace std;

class Node
{

public:
    int data;
    Node *right;
    Node *left;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *deletionFromBST(Node *root, int val)
{

    // base case
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {

        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child
        // left child ho
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // right child ho
        if (root->right != NULL && root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child

        if (root->left != NULL && root->right != NULL)
        {
            int mini = minVal(root->right);
            root->data = mini;
            root->right = deletionFromBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        // left part me jao
        root->left = deletionFromBST(root->right, val);
        return root;
    }
    else
    {
        // right part me jao
        root->right = deletionFromBST(root->right, val);
        return root;
    }
}

int minVal(Node *root)
{

    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }

    return temp->data;
}

Node *insertDataInBST(Node *&root, int d)
{

    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {

        root->right = insertDataInBST(root->right, d);
    }
    else
    {

        root->left = insertDataInBST(root->left, d);
    }

    return root;
}

void takeInput(Node *root)
{

    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertDataInBST(root, data);
        cin >> data;
    }
}

int main(int argc, char const *argv[])
{
    Node *root = NULL;

    cout << "Enter data to create BST: " << endl;
    takeInput(root);

    // Deletion
    root = deletionFromBST(root, 30);

    return 0;
};