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

    Node* head = new Node;
    Node* first = new Node;
    Node* third = new Node;
    Node* second = new Node;

    head -> data = 5;
    head -> next = first;

    first -> data = 7;
    first -> next = second;

    second -> data = 10;
    second -> next = third;

    third -> data = 20;
    third -> next = NULL;
    
    cout << "Linked List Elements: ";
    PrintLinkedList(head);
 
 
    return 0;
};