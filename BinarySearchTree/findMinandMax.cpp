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

int minVal(Node* root){

    Node* temp = root;
    while(temp-> left != NULL){
        temp = temp -> left;
    }

    return temp -> data;
    
}

int maxVal(Node* root){

    Node* temp = root;
    while(temp-> right != NULL){
        temp = temp -> right;
    }

    return temp -> data;
}

Node* insertDataInBST(Node* &root, int d)
{

    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data )
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
    Node* root = NULL;

    cout << "Enter data to create BST: " << endl;
    takeInput(root);

    cout << "min value of this BST is: " << minVal(root) << endl;

    cout << "max value of this BST is: " << maxVal(root) << endl;


    return 0;
};