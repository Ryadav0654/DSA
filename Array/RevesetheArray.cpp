#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (end >= start)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    int arr[10] = {1, 5, 3, 5, 3, 78, 9, 43, 56, 4};
    cout << "print the reverse array" << endl;

    reverseArr(arr, 10);
    printArr(arr, 10);

    return 0;
};