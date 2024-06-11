#include<iostream>
using namespace std;

// find the sum of array using recursion

int arraySum(int *arr, int size)
{

    // base case
    if (size == 0)
    {
        return 0;
    }

    // recursive relation

    int sum = arr[0] + arraySum(arr + 1, size - 1);

    return sum;
}
 
int main(int argc, char const *argv[])
{

    int size;
    cout << "Enter size of array: ";
    cin >> size;

    // initialise the dynamic array

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // ----------------- arraySum function call ----------------------//
 
    int ans = arraySum(arr, size);
    cout << "sum of all the array element is: " << ans << endl;
    

   // release the heap memory
    delete[] arr;
 
    return 0;
};