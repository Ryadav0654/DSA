#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    int prod = 1;

    while (n != 0)
    {
        int rem = n % 10;
        sum += rem;
        prod *= rem;
        n /= 10;
    }
    cout << "sum of all the digit of number is " << sum << endl;
    cout << "product of all the digit of number is " << prod << endl;

    return 0;
};