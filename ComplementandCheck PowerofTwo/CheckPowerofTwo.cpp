#include <iostream>
#include <math.h>
using namespace std;

// write a function which return true if the number is in power of 2 otherwise return false

bool powerOfTwo(int a) {
    for(int i =0; i <= 30; i++){
        int m = pow(2, i);  // replace this int m = 1; m = m * 2; with condition m < INT_MAX/2;
        if(m == a) {
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    
    int n;
    cout << "Enter the value of n:";
    cin >> n; 
    bool ans = powerOfTwo(n);
    
    if(ans == 1) {
        cout << "true" << endl;
    }else {
        cout << "false" << endl;
    }
       
    return 0;
}
