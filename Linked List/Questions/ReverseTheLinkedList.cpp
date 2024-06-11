#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, Node* &tail, int val){

    if(head == NULL){
        Node* temp = new Node(val);
        head = temp;
        tail = head;
    }else{
         Node* newNode  = new Node(val);
         tail -> next = newNode;
         tail = newNode;
    }

}

/*
void reverse(Node* &head, Node* curr, Node* prev){
    // cout << "call the reverse ; " << endl;
    //base case
    if(curr == NULL){
        head = prev;
        return ;
    }

    // recursive call
    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
    
}

 */


// function to print the linked list 
void Print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp-> next;
    }

    cout << endl;
}
int main(int argc, char const *argv[])
{
    Node* head = NULL;
    Node* tail = head;
    insertAtHead(head, tail, 1);
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 3);
    insertAtHead(head, tail, 4);
    insertAtHead(head, tail, 5);

    cout << "linked list before reversing: " << endl;
    Print(head);

    
    // reverse(tail);
    cout << "linked list after reversing: " << endl;
    Print(head);

 
 
    return 0;
};