# Linked List Questions

### Question - 1: Reverse the Linked List

> https://www.naukri.com/code360/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTabValue=PROBLEM

## Approach:

👉 create a prev, curr and forward pointer

👉 Initially, prev = NULL; curr = head; and forward = head -> next

👉 Run a while loop whenever curr != NULL

## Code:

```C++
#include <bits/stdc++.h>

/*
   Following is the class structure of the LinkedListNode class:

   template <typename T>
   class LinkedListNode
   {
   public:
       T data;
       LinkedListNode<T> *next;
       LinkedListNode(T data)
       {
           this->data = data;
           this->next = NULL;
       }
   };

*/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{


   if(head == NULL || head -> next == NULL){
       return head;
   }

   LinkedListNode<int>* prev = NULL;
   LinkedListNode<int>* curr = head;
   LinkedListNode<int>* forward;

   while(curr != NULL ){
       forward = curr -> next;
       curr -> next = prev;
       prev = curr;
       curr  = forward;

   }

   return prev;


    // call the method 2 function (method-2)
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    reverse(head, curr, prev);
    return head;

    //call the method-3 function 
    
    return reverse1(head);

}

```

## Method - 2

## Code:

```C++

void reverse(LinkedListNode<int>* &head, LinkedListNode<int>* curr, LinkedListNode<int>* prev){

    //base case
    if(curr == NULL){
        head = prev;
        return ;
    }

    // recursive call
    LinkedListNode<int>* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
}

```

## Method - 3

## Code:

```C++


// method - 3

LinkedListNode<int>* reverse1(LinkedListNode<int>* head){

    // base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    LinkedListNode<int>* chotaHead = reverse1(head-> next);
    head-> next -> next = head;
    head-> next = NULL;

    return chotaHead;
}

```
