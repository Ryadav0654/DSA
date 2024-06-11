#include<iostream>
using namespace std;

// search any key in the array using recursion

void print(int arr[], int n)
{

    cout << "size of the array is: " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

bool linearSearch(int *arr, int size, int key)
{

    // to see how recursion is work
    print(arr, size);

    // base case
    if (size == 0)
    {
        return false;
    }

    // recursive relation

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool ans = linearSearch(arr + 1, size - 1, key);
        return ans;
    }
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

   //--------------------- linear search function call -------------------------// 

    int key;
    cout << "Enter the key: ";
    cin >> key;

    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "key is present in the array" << endl;
    }
    else
    {
        cout << "key is not present in the array" << endl;
    }



   // release the heap memory
    delete[] arr;
 
 
 
    return 0;
};