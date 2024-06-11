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