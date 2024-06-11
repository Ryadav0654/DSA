# Reverse the string using stack:


### Approach:
* create stack
* store the string in the stack
* pop the element in the stack and store the ans string

### Code:
```C++
    #include<iostream>
    #include<stack>

    int main()
    {
        //given string 
        string str = "hello";

        //create a stack
        stack<char> s;

        //store str in the stack
        for(int i = 0; i < str.length(); i++){
            s.push(str[i]);
        }

        // create ans string 
        string ans = "";

        while(!s.empty()){
            char ch = s.top();
            ans.push_back(ch);
            s.pop();
        }

        cout << "ans is: " << endl;
    }

```