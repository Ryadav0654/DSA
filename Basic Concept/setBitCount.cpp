#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int count = 0;

    while(n != 0){
        bool m = n &1;
        if(m){
            count++;
        }
        n = n >> 1;
    }

    cout << count << endl;
    return 0;
}
