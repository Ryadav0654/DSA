#include <bits/stdc++.h>
using namespace std;

 int minSwaps(string s) {
        int st = 0;
        int e = s.length()-1;
        int count = 0;

        while(st < e){

            while(st < e){
                if(s[e] == ']' && s[e-1] == '['){
                    e -=2;
                }else if(s[e] == ']'){
                    e--;
                }if(s[st] == '[' && s[st+1] == ']'){
                    st +=2;
                }else if(s[st] == '['){
                    st++;
                }else{
                    break;
                }
            }

            cout << "e: " << e << endl;

    
            cout << "st: " << st << endl;
            if(s[st] == ']' && s[e] == '['){
                swap(s[st], s[e]);
                count++;
            }
        }

        return count;
    }
int main(int argc, char const *argv[])
{
    // string s = "][[]][][[][]";
    string s = "]]][[[";
    int ans = minSwaps(s);

    cout <<"ans: " <<  ans << endl;
    return 0;
}
