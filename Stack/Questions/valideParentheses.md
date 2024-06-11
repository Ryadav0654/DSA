# Valid parentheses:

> Question link:
>https://www.naukri.com/code360/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SOLUTION


### Approach:

### Code:
```C++
bool isValidParenthesis(string s)
{
    stack<char> st;

    for(int i= 0; i < s.length(); i++){

        char ch = s[i];

        // for opening paranthesis - push the stack
        if(ch == '{' || ch == '[' || ch == '('){
            st.push(ch);
        }else{

            // for closing bracket
            // check stack top and pop
            if (!st.empty()) {
              char top = st.top();
              if ((ch == ')' && top == '(') || (ch == '}' && top == '{') ||
                  (ch == ']' && top == '[')){

                      st.pop();

                  }else{

                      return false;

                  }

            } else {

              return false;

            }
        }
    }

    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}
```
