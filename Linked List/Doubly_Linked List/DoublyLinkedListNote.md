# Doubly Linked List

## Initialisation of Doubly Linked List

### Code:

```C++
#include<iostream>
using namespace std;

class Node{

    public:
    Node* prev;
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
    }

};

void Print(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int getLength(Node* head){
    int length = 0;
    Node* temp = head;
    while(temp != NULL ){
        length++;
        temp = temp -> next;
    }

    return length;
}

int main(int argc, char const *argv[])
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    head -> prev = NULL;
    head -> next = second;

    second -> prev = head;
    second -> next = third;

    third -> prev = second;
    third -> next = forth;

    forth -> prev = third;
    forth -> next = NULL;

    Print(head);
    cout << endl;
    cout <<"LinkedList length is: " << getLength(head) << endl;

    return 0;
};
```

## Insert at head or tail

### Code:

```C++
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int val){
        this -> data = val;
        this -> prev = NULL;
        this-> next = NULL;
    }
};

void Print(Node* head){
    Node* temp = head;

    while(temp!= NULL){
        cout << temp-> data << " ";
        temp = temp-> next;
    }

}

void insertAtHead(Node* &head, int val){

    // for empty list
    if(head == NULL){
        Node* temp = new Node(val);
        head = temp;
    }else{
    Node* temp = new Node(val);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}


void insertAtTail(Node* &tail, int val){

    Node* temp = new Node(val);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}


int getLength(Node* head){
    int length = 0;
    Node* temp = head;
    while(temp != NULL ){
        length++;
        temp = temp -> next;
    }

    return length;
}


int main(int argc, char const *argv[])
{

    Node* head = new Node(10);
    Node* tail = head;

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);

    cout << "insert before head linkedlist: "<< endl;
    Print(head);
    cout << endl;

    insertAtTail(tail, 60);
    insertAtTail(tail, 70);
    insertAtTail(tail, 80);


    cout << "insert after head linkedlist: "<< endl;
    Print(head);
    cout << endl;

    cout << "length of the linkedlist: " << getLength(head) << endl;

    return 0;
};

```

## Insert at Position:

### Code:

```C++
void insertAtPosition(Node* &head, Node* &tail, int val, int position){

    // first position
    if(position == 1){
        insertAtHead(head, val);
        return ;
    }

    Node*temp = head;
    int cnt = 1;
    while(cnt < position-1){
        cnt++;
        temp = temp-> next;
    }

    if(temp-> next == NULL){
        insertAtTail(tail, val);
        return;
    }

    // creating node to position
    Node* nodeToinsert = new Node(val);
    nodeToinsert -> next = temp -> next;
    temp -> next -> prev = nodeToinsert;
    temp-> next = nodeToinsert;
    nodeToinsert -> prev = temp;

}

```
