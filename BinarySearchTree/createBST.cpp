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


void takeInput(Node* &root)
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