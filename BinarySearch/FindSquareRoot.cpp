#include <iostream>
using namespace std;

// find sqrt using binary search

long long int findSqrt(int n)
{
    int s = 0;

    int e = n;

    int mid = s + (e - s) / 2;

    long long int ans = -1;

    while (s <= e)
    {

        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

// find sqrt in decimal digit

double morePrecision(int n, int precision, int tempsol)
{

    double factor = 1;

    double ans = tempsol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
   

    return ans;
}

int main(int argc, char const *argv[])
{

    int  n;
    cout << " Enter the value of n: ";
    cin >> n;

    int tempsol = findSqrt(n);

    cout << "Squareroot of n is " << tempsol << endl;
    cout << "Squareroot of n in 3 decimal places is " << morePrecision(n, 3, tempsol) << endl;


    return 0;
}
