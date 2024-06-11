#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void solve(stack<int> &inputStack, int cnt, int size){

    // base case (pop the middle element and return)
    if(cnt == size/2){
        inputStack.pop();
        return ;
    }

    //keep the upper elements of the middle
    int num = inputStack.top();
    inputStack.pop();

    //recursive call
    solve(inputStack, cnt+1, size);

    //push the upper element 
    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int n ){

    int cnt = 0;
    solve(inputStack, cnt, n);
}

void PrintStack(stack<int> st){

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;
}




int main(int argc, char const *argv[])
{
    
    stack<int> st;

    st.push(1);
    st.push(5);
    st.push(6);
    st.push(2);
    st.push(8);
    // st.push(6);

    int size = st.size();
    cout << "before deleting the middle element: " << endl;
    PrintStack(st);
    deleteMiddle(st, size);

    cout << "after deleting the middle element: " << endl;
    PrintStack(st);
    /*
    string str = "love";
    cout << "str len: " << str.length() << endl;
    for(int i = 0; i < str.length(); i++){
        st.push(str[i]);
    }
    string ans = "";
    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);

        st.pop();
    }
    cout << "ans is: " << ans << endl;
    // cout << "st size: " << st.size() << endl;

    // vector<char> ans;
    int n = st.size();
    for(int i = 0; i < n; i++){
        cout << (st.top());
        st.pop();
    }

    // for(char ch : ans){
    //     cout << ch;
    // }

    cout << endl;
 
 */
 
 
    return 0;
};

