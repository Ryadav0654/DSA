# Linked List

# Singly Linked List

### Initialise the Linked List

### Steps

1. make a class which contain the data and Node type pointer
2. create new node and assign the value of these node

```C++
#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

};

void PrintLinkedList(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{

    Node* head = new Node();
    Node* first = new Node();
    Node* third = new Node();
    Node* second = new Node();

    head -> data = 5;
    head -> next = first;

    first -> data = 7;
    first -> next = second;

    second -> data = 10;
    second -> next = third;

    third -> data = 20;
    third -> next = NULL;

    PrintLinkedList(head);


    return 0;
};
```

### Output

```text
Linked List Elements: 5 7 10 20
```

## Insert Node Before Head

### steps

1. Make a class which contain a data and Node type pointer
2. create a head pointer
3. create a fuction which insert the node before head and inside this function create a new node and assign the value of new node
4. make the new node to head

### Example

```C++
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
    new_node->data = new_data;
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
```

## Insert Node After the head

### Steps

1. create head and tail node and initially head = tail
2. create InsertNodeAfterHead with parameter tail and data
3. create a new node and assign the value of new node and make the new node as tail

```C++
#include<iostream>
using namespace std;
 class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data){
        this -> data = data;
    }
};

void InsertNodeAfterHead(Node* &tail, int new_data){

    Node* new_node = new Node(new_data);
    new_node -> next = NULL;

    tail -> next = new_node;
    tail = new_node;

}

void Print(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main(int argc, char const *argv[])
{

    Node* head = new Node(10);
    head -> next = NULL;
    Node* tail = head;

    InsertNodeAfterHead(tail, 20);
    InsertNodeAfterHead(tail, 30);
    InsertNodeAfterHead(tail, 40);
    InsertNodeAfterHead(tail, 50);

    cout << "Linked List Elements: " << endl;
    Print(head);

    return 0;
};
```

## Insert Node in the middle of Linked List

### Examle
```C++
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
```

## Delete Node

### Example
```C++
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

void DeleteNode(Node *&head, int position)
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

    DeleteNode(head, 4);

    cout <<  "print linked list Element after deleting the node at positon:  " << endl;
    Print(head);

    return 0;
};
```
