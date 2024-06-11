#include <iostream>
#include <math.h>
using namespace std;

/*
The Fibonacci sequence is a series of numbers in which each number (Fibonacci number) is the sum of the two preceding ones, usually starting with 0 and 1. The sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on.

For example:

The 0th Fibonacci number is 0.

The 1st Fibonacci number is 1.

The 2nd Fibonacci number is 1 (0 + 1).

The 3rd Fibonacci number is 2 (1 + 1).

The 4th Fibonacci number is 3 (1 + 2).

And so on.

Given a number N, Print its position in the Fibonacci number series.

Input Format

The first line contains an integer T representing the number of test cases.

The next line contains an integer N.

Constraints

3 <= N < 10^18

Output Format

Print -1 if given number is not a fibonacci number. Else print its position in the fibonacci series.
*/

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while (T--)
    {
        double n;
        cin >> n;

        double m = pow(10, 18);

        if (n >= 3 && n < m)
        {

            int zeroth = 0;
            int first = 1;
            int second;

            for (int i = 2; i <= n+1; i++)
            {
                second = zeroth + first;
                if (second == n)
                {
                    cout << i << endl;
                    break;
                }

                zeroth = first;
                first = second;
            }

            cout << -1 << endl;
        }
    }

    return 0;
}
