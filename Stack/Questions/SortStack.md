# Sort the Stack using recursion:

> Question link:
> https://www.naukri.com/code360/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM

#### Code:
```C++
// this function insert the element in stack sorted way
void sortedInsert(stack<int> &stack, int num){

	//base case
	if((stack.empty()) || (!stack.empty()) && stack.top() < num){
		stack.push(num);
		return ;
	}

	int n = stack.top();
	stack.pop();

	//recursive call
	sortedInsert(stack, num);

	stack.push(n);

}
void sortStack(stack<int> &stack)
{
	//base case 
	if(stack.empty()){
		return ;
	}

    // store the top element of stack into the num
	int num = stack.top();
	stack.pop();

    // this call sort the remaining stack
	sortStack(stack);

    //this function insert the remaining element in the stack sorted way
	sortedInsert(stack, num);
}
```