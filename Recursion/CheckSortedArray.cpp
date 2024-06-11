#include<iostream>
using namespace std;

// check array is sorted or not using recursion

bool isSorted(int *arr, int size) // // int arr[] because arr pass as a pointer
{

    // base case

    if (size == 0 || size == 1)
    {
        return true;
    }

    // recursive relation

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remaining = isSorted(arr + 1, size - 1);
        return remaining;
    }
}
 
int main(int argc, char const *argv[])
{
 // --------------------- calling the isSorted function --------------------//
    
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the element of array: " << endl;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << "array is sorted" << endl;
    }
    else
    {
        cout << "array is not sortetd" << endl;
    }


    return 0;
};