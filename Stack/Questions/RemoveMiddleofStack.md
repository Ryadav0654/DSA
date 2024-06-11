# Delete the middle element in the stack:

> Question link:
> https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION

### Approach:



### Code:

```C++
void solve(stack<int> &inputStack, int cnt, int size){

    // base case (pop the middle element and return)
    if(cnt == size/2){
        inputStack.pop();
        return ;
    }

    //store the upper elements of the middle
    int num = inputStack.top();
    inputStack.pop();

    //recursive call
    solve(inputStack, cnt+1, size);

    //push the upper element in the stack
    inputStack.push(num);

}

void deleteMiddle(stack<int> &inputStack, int n ){

    int cnt = 0;
    solve(inputStack, cnt, n);

}

```
