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

    // destructor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
        delete next;
        this -> next = NULL;
        }
        cout << "memory is free for node with data: " << value << endl;
    }
};

void InsertNodeAfterHead(Node *&tail, int new_data)
{

    Node *new_node = new Node(new_data);
    new_node->next = NULL;

    tail->next = new_node;
    tail = new_node;
}

void DeleteNode(Node *&head, Node* &tail, int position)
{

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
       
        Node* curr = head;
        Node* prev = NULL;
        
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        if(curr -> next == NULL){
            tail = prev;
        }
        
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
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
    InsertNodeAfterHead(tail, 60);

    cout <<  "print linked list Element before deleting the node at positon:  " << endl;
    Print(head);

    DeleteNode(head,tail, 5);

    cout <<  "print linked list Element after deleting the node at positon:  " << endl;
    Print(head);

    cout << "head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;

    return 0;
};