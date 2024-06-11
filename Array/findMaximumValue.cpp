#include<iostream>
using namespace std;

int findMaxValue(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // returning the max value
    return max;
}

int main(int argc, char const *argv[])
{
 
   int arr[10] = {1, 5, 3, 5, 3, 78, 9, 43, 56, 4};
    int max = findMaxValue(arr, 10);

    cout << "Maximum value in this Array is: " << max << endl;
 
 
 
 
    return 0;
};