#include <iostream>
using namespace std;

// ---------------------------- Questions  ---------------------------------//
/*
Question Links: 
- Fibonnacci Series: https://leetcode.com/problems/fibonac... 
- Climb Stairs: https://bit.ly/32VA96H

*/

/*
void printDigit(int n)
{

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven","eight", "nine"};
    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n /= 10;

    printDigit(n);
     cout << arr[digit] << " ";
}
*/

void printDigit(int n, string arr[])
{

    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n /= 10;
    printDigit(n, arr);
    cout << arr[digit] << " ";
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    printDigit(n, arr);
    return 0;
}