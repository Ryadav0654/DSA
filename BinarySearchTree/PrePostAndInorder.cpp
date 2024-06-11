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

void preOrder(Node* root){

    //base case 
    if(root == NULL){
        return ;
    }

    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}

void postOrder(Node* root){

    //base case 
    if(root == NULL){
        return ;
    }
 
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
}


void inOrder(Node* root){

    //base case 
    if(root == NULL){
        return ;
    }

    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
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

    cout << "preOrder travesal: ";
    preOrder(root);
    cout << endl;

    cout << "psotOrder travesal: " ;
    postOrder(root);
    cout << endl;

    cout << "inOrder traversal: ";
    inOrder(root);
    cout << endl;
    
    

    return 0;
};