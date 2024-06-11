# Redundant Brackets

> Question link:
> https://www.naukri.com/code360/problems/redundant-brackets_975473?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM

### Code:

```C++

bool findRedundantBrackets(string &s)
{
    
   stack<char> st;
    for( int i = 0;i < s.length(); i++){
        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }else{

            if(ch == ')'){
                bool isRedundant = true;z
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/'){
                        isRedundant = false;
                    }

                    st.pop();
                }

                if(isRedundant == true){
                    return true;
                }
                st.pop();
            }
        }
    }

    return false;

}

```


