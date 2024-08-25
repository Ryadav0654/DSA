#include<iostream>
using namespace std;

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
