#include <iostream>
using namespace std;

int getSum(int *arr, int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "sum is: " << ans << endl;

    /*
     // creating and deleting the heap memory

     int *i = new int;
     // use delete keyword to delete free the heap memory
     delete i;
    */

    delete[] arr;

    return 0;
};