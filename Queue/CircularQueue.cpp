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


