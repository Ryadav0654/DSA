# Reverse stack using recursion:

> Question link:
> https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM

#### Code:

```C++
void insertAtBottom(stack<int> &myStack, int x){

    //base case
     if(myStack.empty()){
        myStack.push(x);
        return ;
    }

    int num = myStack.top();
    myStack.pop();

    //recursive call
    insertAtBottom(myStack, x);

    myStack.push(num);
}

void reverseStack(stack<int> &stack) {

    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    // it reverse the stack after the num element 
    reverseStack(stack);

    // this function insert the num element at bottom
    isnertAtBottom(stack, num);


}
```
