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

void insertAtHead(Node* &head, Node* &tail, int val){

    // for empty list 
    if(head == NULL){
        Node* temp = new Node(val);
        head = temp;
        tail = head;

    }else{
    Node* temp = new Node(val);
    temp -> next = head;
    head -> prev = temp; 
    head = temp;
    }
}


void insertAtTail(Node* &tail, Node* &head, int val){

    if(head == NULL){
        Node* temp = new Node(val);
        tail = temp;
        head = temp;

    }else{
    Node* temp = new Node(val);
    tail -> next = temp;
    temp -> prev = tail; 
    tail = temp;
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
    Node* tail = head;

    insertAtHead(head, tail, 20);
    insertAtHead(head,tail, 30);
    insertAtHead(head,tail,  40);
    insertAtHead(head,tail, 50);

    cout << "insert before head linkedlist: "<< endl;
    Print(head);
    cout << endl;

    insertAtTail(tail,head, 60);
    insertAtTail(tail,head, 70);
    insertAtTail(tail,head, 80);
    

    cout << "insert after head linkedlist: "<< endl;
    Print(head);
    cout << endl;

    cout << "length of the linkedlist: " << getLength(head) << endl;
    
 
 
    return 0;
};