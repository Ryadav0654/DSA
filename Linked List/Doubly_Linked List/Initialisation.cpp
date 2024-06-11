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