#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor 
    Node(int d){
        this -> data = d;
    }
};

void InsertNodeBeforeHead(Node *&head, int new_data)
{

    // Create the new node
    Node *new_node = new Node(new_data);

    // Assign the value of new node
    // new_node->data = new_data;
    new_node->next = head;

    // make new as a head
    head = new_node;
}

void PrintLinkedList(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{

    /*
    Node* head = new Node();
    head -> data = 5;
    head -> next = NULL;
    */

   // compact the code using constructor 
   Node* head = new Node(5);
   head -> next = NULL;

    InsertNodeBeforeHead(head, 10);
    InsertNodeBeforeHead(head, 20);
    InsertNodeBeforeHead(head, 30);

    cout << "Print the Linked List Element: " << endl;
    PrintLinkedList(head);

    return 0;
};