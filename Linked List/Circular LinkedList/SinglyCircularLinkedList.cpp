#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int val = this-> data;
        if(this-> next != NULL){
            delete next;
            next = NULL;
        }

        cout << "memory is free for node with data: " << val << endl;
    }
};

void insertNode(Node* &tail, int element, int val)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(val);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Non-empty list
        // assuming the element is present in list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found - curr is represent the element Node
        Node *temp = new Node(val);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int val){

    // empty list 
    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }else{
        // assuming value is present in the list 
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr-> data != val){
            prev = curr;
            curr = curr-> next;
        }

        prev-> next = curr-> next;

        //for 1 node 
        if(curr == prev){
            tail = NULL;
        }

        // where tail point to curr pointer and more than 2 node linked list 
        else if(tail == curr){
            tail = curr-> next;
        }
        curr-> next = NULL;
        delete curr;
    }

}


void Print(Node *tail)
{
    Node *temp = tail;

    if(tail == NULL){
        cout << "linked list is empty." << endl;
        return ;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;

    } while (tail != temp);

    cout << endl;
}

int main(int argc, char const *argv[])
{
    // Node* head = new Node(10);

    Node *tail = NULL;     
    insertNode(tail, 4, 3);
    insertNode(tail, 3, 6);
    insertNode(tail, 6, 9);
    insertNode(tail, 9, 12);
    insertNode(tail, 12, 16);

    cout << "before deletion list: " << endl;
    Print(tail);

    cout << "after deletion list: " << endl;
    deleteNode(tail, 16);
    Print(tail);

    // Node* first = new Node(20);

    // Node* second = new Node(30);
    // Node* third = new Node(40);

    // head-> next = first;
    // first-> next = second;
    // second-> next = third;
    // third -> next = head;

    return 0;
};