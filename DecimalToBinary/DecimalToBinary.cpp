

#include <iostream> 
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    cout << "Enter the value of n: ";
    cin >> n;


    int value = 0;
    int i = 0;
    while(n != 0) {
        int bit = n & 1;
        value = (pow(10, i)*bit) + value;
        n = n >> 1;
        i++;

    }

    cout << value << endl;

    return 0;
}
