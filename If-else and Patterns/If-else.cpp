#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Question - 1

    /*
     int n;
        cout << "Enter the value of n:";
        cin >> n;

        if (n >= 0)
        {

            cout << n << " is a positive number." << endl;
        }
        else
        {

            cout << n << " is a negative number." << endl;
        }
    */

    // note - cin doesn't read the tab, enter and space it only read the value. but cin.get read all.

    // Question - 2

    /*
    int a, b;

        cout << "Enter the value of a: ";
        cin >> a;

        cout << "Enter the value of b : ";
        cin >> b;

        if (a > b)
        {
            cout << "A is greater" << endl;
        }
        else
        {
            cout << " B is greatest" << endl;
        }
    */

    // Question - 3

    /*
    char a;

    cout << "Enter the character of a: ";
    cin >> a;

    if (a >= 'a' && a <= 'z')
    {
        cout << "Given character is Lowercase" << endl;
    }
    else if (a >= 'A' && a <= 'Z')
    {
        cout << "Given character is Uppercase" << endl;
    }
    else if (a >= 49 && a <= 57)
    {
        cout << "Given value is Numerical value" << endl;
    }
    */

   // Question - 4 
   // find the sum of all even number of 1 to input n

   int n;
   cout << "Enter the value of n:" ;
   cin >> n;

   int sum = 0;
   int i = 2;

   while(i <= n) {
    sum += i;
    i += 2;
   }

   cout << "The sum of all even number in 1 to " << n << " is " << sum << endl;

    return 0;
}
