#include<iostream>
using namespace std;

int findMinValue(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main(int argc, char const *argv[])
{
 
    int arr[10] = {1, 5, 3, 5, 3, 78, 9, 43, 56, 4};
    int min = findMinValue(arr, 10);

    cout << "Minimum value in this Array is: " << min << endl;
 
 
 
    return 0;
};