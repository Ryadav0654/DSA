# Insert x at Bottom of the stack:

> Question link:
> https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION

### Code:

```C++
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{

    solve(myStack, x);
    
    // base case 
    if(myStack.empty()){
        myStack.push(x);
        return myStack;
    }

    //store the top element of myStack 
    int num = myStack.top();
    myStack.pop();

    //recursive call
    myStack = pushAtBottom(myStack, x);

    // push the remaining element data
    myStack.push(num);
    

    //return the mystack 
    return myStack;
}
```
#### second method:

```C++
void solve(stack<int>& myStack, int x){

    //base case
     if(myStack.empty()){
        myStack.push(x);
        return ;
    }
    int num = myStack.top();
    myStack.pop();

    solve(myStack, x);

    myStack.push(num);
}


stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // call the solve function
    solve(myStack, x);

    //return the mystack 
    return myStack;
}
```
