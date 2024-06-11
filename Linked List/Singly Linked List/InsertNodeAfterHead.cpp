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