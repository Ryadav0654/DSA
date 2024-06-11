#include<iostream>
using namespace std;

int complement(int a){
    int mask = 0;
    int m = a;
    if(a == 0) {
        return 0;
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~a) & mask;
    return ans;
    
}
 
int main(int argc, char const *argv[])
{
 
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    cout << complement(n) << endl;
 
 
 
    return 0;
};