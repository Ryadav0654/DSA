#include <iostream>

using namespace std;


/*
void alternateArr(int arr[], int size)
{

    int start = 0;
    int end = 1;
    while ((end) < size)
    {
        swap(arr[start], arr[end]);
        start = start + 2;
        end = end + 2;
    }
}

*/

// second method

void alternateArr(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArr(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{

    int arr[10] = {1, 5, 3, 5, 3, 78, 9, 43, 56, 4};

    cout << "print the alternate element swap array" << endl;

    alternateArr(arr, 10);
    printArr(arr, 10);

    return 0;
}
