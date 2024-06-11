#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
    }
};

void InsertNodeBeforeHead(Node *&head, int new_data)
{

    // Create the new node
    Node *new_node = new Node(new_data);

    // Assign the value of new node
    new_node->data = new_data;
    new_node->next = head;

    // make new as a head
    head = new_node;
}

void InsertNodeAfterHead(Node *&tail, int new_data)
{

    Node *new_node = new Node(new_data);
    new_node->next = NULL;

    tail->next = new_node;
    tail = new_node;
}

void InsertNodeAtMiddle(Node *&head, Node* &tail, int new_data, int position)
{
    // Inserting at start
    if(position == 1){
        InsertNodeBeforeHead(head, new_data);
        return ;
    }

    Node *temp = head;
    int count = 1;
    /*
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }   
    */  

    while(count < position -1){
        temp = temp -> next;
        count++;
    }

    // Inserting at end
    if(temp-> next == NULL){
        InsertNodeAfterHead(tail, new_data);
        return ;
    }

    Node *new_node = new Node(new_data);
    new_node->next = temp->next;
    temp->next = new_node;
}



void Print(Node *head)
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

    Node *head = new Node(10);
    head->next = NULL;
    Node *tail = head;

    InsertNodeAfterHead(tail, 20);
    InsertNodeAfterHead(tail, 30);
    InsertNodeAfterHead(tail, 40);
    InsertNodeAfterHead(tail, 50);

    cout << "Before inserting the Element at position: " << endl;
    Print(head);

    InsertNodeAtMiddle(head, tail, 5, 6);
    cout << "After inserting the Element at position: " << endl;
    Print(head);

    cout << "head: " << head -> data << endl;
    cout << "tail: " << tail-> data << endl;
    return 0;
};