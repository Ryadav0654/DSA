# Stack

Stack is a linear data structure that follows LIFO (Last In First Out) Principle.

> https://www.geeksforgeeks.org/introduction-to-stack-data-structure-and-algorithm-tutorials/

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20240409105808/Stack-representation-in-Data-Structures.webp"/>

**Key Operations:**
- **Push:** Add an element to the top of the stack.
- **Pop:** remove an element to the top of the stack.
- **top:** Access the top element in the stack. 
- **Empty:** To check stack is empty or not. 
- **size:** Get number of elements in the stack. 

## Create stack using standard library

### Example

```C++
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // syntax: stack<data_Type> stack_name;
    stack<int> s;

    // push elements in the stack
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);

    // pop or remove elements in the stack
    s.pop();

    // find or access the top element 
    int topElement = s.top();
    cout << topElement << endl;

    // check stack is empty or not
    if(s.empty()){
        cout << "Stack is empty" << endl;
    }else{
        cout << "Stack is not empty" << endl;
    }

    return 0;
};
```

## Create stack using own class(Array):
- Take these variable to initialise the stack using array: 

    - int top: To track the top element.
    - int size: To track the size of the stack.
    - int *arr: To store the elements.

- **Make push() method:**
    - check -> space is avaible or not.
    - if space avaible: increment top and insert at arr[top]
    - if space not avaible: return "stack overflow"

- **Make pop() method:**
    - check element is present or not.
    - if element present: decrement top and remove element.
    - if element not present: return "stack underflow"
- **Make empty() method:**
    - if top == -1 then return true other wise return false.

- **Make top() method:**
    - if top > -1 && top < size-1  then return arr[top] other wise return "stack is empty".


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

    // constructor
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    // push function
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }else{
            cout << "Stack Overflow" << endl;
        }
    }

    // pop function 
    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout << "Stack Underflow" << endl;
        }
    }

    // finding top function
    int peek(){
        if(top >= 0){
            return arr[top];
        }else{
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    // empty function
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

## Create stack using linked list: 

### Code: 
```C++


```
