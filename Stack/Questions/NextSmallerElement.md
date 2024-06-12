# Next Smaller Element:

>Question link:
> https://www.naukri.com/code360/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION


### Approach:


### Code:
```C++
#include <stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for(int i = n-1; i >= 0; i--){
        int curr = arr[i];
        while(s.top() >= curr){
            s.pop();
        }

        // ans is stack top
        ans[i] = s.top();
        s.push(curr);
    }

    return ans;
}
```