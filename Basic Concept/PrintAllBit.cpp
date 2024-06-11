#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[32];
    int i =0;
    
    while(i < 32){
        bool m = n & 1;
       arr[i] = m;
        n = n >> 1;
        i++;
    }
    

    for(int i = 31; i >= 0; i--) {
        cout << arr[i];
    }
    return 0;
}
