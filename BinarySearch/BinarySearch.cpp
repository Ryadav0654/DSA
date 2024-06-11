#include <iostream>
using namespace std;

// Binary search use in sorted array
int binarySearch(int arr[], int size, int key)
{
    int start = 0;

    int end = size - 1;


    int mid = (start + end) / 2;            // for small size array
    
    // int mid = start + (end - start) / 2;         // for big size array  

    while (end >= start)
    {
        if (arr[mid] == key)
        {

            return mid;

        }
        else if (arr[mid] > key)
        {

            end = mid - 1;

        }else {

            start = mid + 1;

        }

        mid = (start + end)/2;
    }
    
    return -1;
}

void printArr(int arr[], int size){

    for(int i =0; i < size; i++){

        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int key;
    cout << "Enter the value of key: ";
    cin >> key;

    int even[8] = {1, 2, 3, 4, 5, 7, 8, 9};

    int odd[7] = {1, 2, 3, 4, 5, 7, 8};
    
    printArr(even, 8);

    cout << endl;
    
    int index = binarySearch(even, 8, key);

    cout << "index of " << key << " is " << index << endl;

    printArr(odd, 7);

    cout << endl;
    
     index = binarySearch(odd, 7, key);

    cout << "index of " << key << " is " << index << endl;



    return 0;
}

