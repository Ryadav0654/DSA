# Binary Search Tree

## create BST & levelOrder traversal: 

### Code: 
```C++
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

void levelOrderTraversal(Node *root)
{

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {

        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete  traverse ho chuka hai
            cout << endl;

            if (!q.empty())
            {
                // queue still has some child nodes
                q.push(NULL);
            }
        }
        else
        {

            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
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


void takeInput(Node * &root)
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

    cout << "print tree: " << endl;
    levelOrderTraversal(root);

    return 0;
};

```

## PreOrder, PostOrder and Inorder Iteration: 

### Code: 
```C++
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
```

## Find Minimum and maximum value of BST

### Code: 
```C++
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
```

## Deletion in BST: 
### Code: 
```C++
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
```