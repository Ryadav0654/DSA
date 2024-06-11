#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int a;
    cout << "Enter the value of a: ";
    cin >> a;

    int i = 2;
    bool isPrime = 1;

    while (i < a)
    {
        if (a % i == 0)
        {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime)
    {
        cout << a << " is a Prime number" << endl;
    }
    else
    {
        cout << a << " is not a Prime number" << endl;
    }

    return 0;
}
