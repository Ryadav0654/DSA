# Stack

Stack is a linear data structure that follows LIFO (Last In First Out) Principle.

> https://www.geeksforgeeks.org/introduction-to-stack-data-structure-and-algorithm-tutorials/

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20240409105808/Stack-representation-in-Data-Structures.webp"/>

## Create stack using standard library

### Example

```C++
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> s;

    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);

    s.pop();

    int topElement = s.top();
    cout << topElement << endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }

    return 0;
};
```

## Create stack using own class(Array)
### Code
```C++
#include<iostream>
using namespace std;

class Stack {

    public:
    //properties 
    int *arr;
    int top;
    int size;

    //behaviour

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout << "Stack Underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }else{
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

};
 
int main(int argc, char const *argv[])
{
 
    Stack s(5);
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << s.peek() << endl;

    s.pop();
    cout << s.peek() << endl;
    
    if(s.isEmpty()){
        cout << "Stack is Empty" << endl;
    }else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
};
```
