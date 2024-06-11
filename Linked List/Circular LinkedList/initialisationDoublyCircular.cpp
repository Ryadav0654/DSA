#include<iostream>
using namespace std;

class Node {

    public:
    Node* prev;
    int data;
    Node* next;

    // constructor
    Node(int val){
        this-> data = val;
        this-> prev = NULL;
        this -> next = NULL;
    }
};

void Print(Node* tail){
    Node* temp = tail;
    
    if(tail == NULL){
        cout << "list is empty" << endl;
        return;
    }

    do{
        cout << tail-> data << " ";
        tail = tail -> next;
    }while(tail != temp);

    cout << endl;
    
}

 
int main(int argc, char const *argv[])
{
 
    Node* head = new Node(2);
    Node* tail = head;

    Node* first = new Node(4);
    Node* second = new Node(6);
    Node* third = new Node(8);
    Node* forth = new Node(10);

    head-> next = first;
    head-> prev = forth;

    first -> prev = head;
    first-> next = second;
    second-> prev = first;
    second-> next = third;
    third-> prev = second;
    third-> next = forth;
    forth-> prev = third;
    forth -> next = head;
 
    Print(tail);
 
    return 0;
};