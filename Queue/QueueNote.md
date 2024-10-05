# Queue

Queues are a type of container adaptors that operate in a <b><i>first in first out (FIFO) type of arrangement</i> </b>. Elements are inserted at the back (end) and are deleted from the front.

## some important public function

1. empty() - Test whether container is empty
2. size() -Return size
3. front() - Access next element
4. back() - Access last element
5. push() - Insert element
6. emplace() - Construct and insert element
7. pop() - Remove next element
8. swap() - Swap contents

## Code -

```C++
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "size of queue: " << q.size() << endl;

    q.pop();

    cout << "size of queue after the pop of one element: " << q.size() << endl;

    cout << "front element in queue  is: " << q.front() << endl;

    cout << "last element in queue is: " << q.back() << endl;

    if(q.empty()){
        cout << "Queue is empty" << endl;
    }else{
        cout << "Queue is not empty" << endl;
    }
    return 0;
};
```

## Implementation of queue using array:

### Code -

```C++
#include<iostream>
using namespace std;

// making a class queue
class Queue {
    int size;
    int qfront;
    int rear;
    int *arr;

public:
    // Constructor to initialize the queue with a given size
    Queue(int s) {
        size = s;
        qfront = -1;
        rear = -1;
        arr = new int[size];
    }

    // Function to check if the queue is empty
    bool isEmpty() {

        if (qfront == -1) { // If front is -1, the queue is empty
            return true;

        } else {
            return false;
        }
    }

    // Function to add an element to the rear of the queue
    void enqueue(int data) {
        if (rear < size - 1) { // Check if there is space in the queue
            if (qfront == -1) {
                arr[++rear] = data;
                qfront++;
            } else {
                arr[++rear] = data;
            }
        }
    }

    // Function to remove an element from the front of the queue
    int dequeue() {
        if (qfront == -1) {  // If the queue is empty
            return -1;
        }

        if (qfront != rear) {  // If more than one element is in the queue
            int ele = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            return ele;
        } else {  // If only one element is left in the queue
            int ele = arr[qfront];
            arr[qfront] = -1;
            qfront = rear = -1;
            return ele;
        }
    }

    // Function to return the element at the front of the queue without removing it
    int front() {
        // If the queue is empty
        if (qfront == -1) {
            return -1;
        } else {
            return arr[qfront];  // Return the front element
        }
    }

    void Print(){
        for(int i =0; i < size; i++){
            cout << dequeue() <<  " ";
        }

        cout << endl;
    }
};


int main(int argc, char const *argv[])
{

    Queue q(5);
    q.enqueue(12);
    q.enqueue(14);
    q.enqueue(16);
    q.enqueue(18);
    q.enqueue(20);

    cout << "dequeue1 " << q.dequeue() << endl;
    cout << "dequeue2 " << q.dequeue() << endl;
    cout << "dequeue1 " << q.dequeue() << endl;
    cout << "dequeue2 " << q.dequeue() << endl;

    q.Print();

    return 0;
}

```

### Output:

```text
dequeue1 12
dequeue2 14
dequeue1 16
dequeue2 18
20 -1 -1 -1 -1
```

## Circular Queue:

### Code:

```C++
#include<iostream>
using namespace std;

class CircularQueue
{
private:
    int size;
    int *arr;
    int front;
    int rear;
public:
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // enqueue function to insert the element in the queue
    // if value insert return true otherwise false
    bool enqueue(int value){

        // check queue is full or not
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size))){
            cout << "queue is full" << endl;
            return false;
        }

        // first element insertion
        if(front == -1){
            front = rear = 0;

        }else if(rear == size){// make queue to circuly
            rear = 0;

        }else{
            rear++;
        }
        arr[rear] = value;
        return true;

    }
    // dequeue function: to pop the element in the queue
    int dequeue(){
        // check queue is empty or not
        if(front == -1){
            cout << "queue is empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        // when one element in the queue
        if(front == rear){
            front = rear = -1;
        }else if(front == size){ // make queue circuly
            front = 0;
        }else{
            front++;
        }

        return ans;

    }

    void Print(){
        for(int i =0; i < size; i++){
            cout << dequeue() << " ";
        }

        cout << endl;
    }

};

int main(int argc, char const *argv[])
{
    CircularQueue cq(5);
    cq.enqueue(5);
    cq.enqueue(4);
    cq.enqueue(6);
    cq.enqueue(3);
    cout << cq.dequeue() << endl;
    cout << cq.dequeue() << endl;
    cq.enqueue(7);
    cq.enqueue(8);
    cq.enqueue(9);
    cout << cq.dequeue() << endl;
    cq.enqueue(6);

    // print the elemnt
    cq.Print();

    return 0;
}

```

### Output

```text
5
4
6
3 7 8 9 6
```
## Implement Deque:

### Code:
```C++
#include <bits/stdc++.h> 
class Deque
{
    int *arr;
    int size;
    int front;
    int rear;


public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
       if(isFull()){
        return false;
       }

       if(isEmpty()){
           front = rear = 0;
       }else if((front == 0) && (rear != size-1)){
           front = size-1;
       }else{
           front--;
       }

       arr[front] = x;
       return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
       if(isFull() ){
           return false;
       }

       if(isEmpty()){
           front = rear = 0;
       }else if((rear == size-1) && (front != 0)){
           rear = 0;
       }else {
           rear++;
       }

       arr[rear] = x;
       return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
   int popFront()
{
    if(isEmpty()){
        return -1;
    }

    int ans = arr[front];
    arr[front] = -1;

    if(front == rear){
        front = rear = -1;
    }
    else if(front == size -1){
        front = 0;
    }
    else{
        front++;
    }

    return ans;
}


    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
   int popRear()
{
    if(isEmpty()){
        return -1;
    }

    int ans = arr[rear];
    arr[rear] = -1;

    if(front == rear){
        front = rear = -1;
    }
    else if(rear == 0){
        rear = size -1;
    }
    else{
        rear--;
    }

    return ans;
}


    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }

        return arr[front];

    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty()) return -1;

        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1){
            return true;
        }else{
            return false;
        }
       
        
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
{
    if ((front == 0 && rear == size - 1) || (rear + 1) % size == front) {
        return true;
    }
    return false;
}

};
```