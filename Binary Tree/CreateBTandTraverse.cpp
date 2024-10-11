#include <iostream>
#include <queue>
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

void levelOrderTraversal(Node *root)
{
    // initialise a queue
    queue<Node *> q;
    q.push(root);

    // to mark the end of the level or separater
    q.push(NULL);

    while (!q.empty())
    {
        // store the front element of the queue and remove the front element of the queue 
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
            // print the front element of the queue
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


int main(int argc, char const *argv[])
{

    Node *root = NULL;

    // creating the tree

    root = buildTree(root);
    
    cout << "tree: " << endl;
    levelOrderTraversal(root);

    return 0;
};