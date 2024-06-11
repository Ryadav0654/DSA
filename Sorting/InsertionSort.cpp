#include <iostream>
using namespace std;

// write a function to isertion sort

void isertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

// write a Insertion sort function 

void InsertionSort(int arr[], int size){
    
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];
    for(int i =0; i < size; i++){
        cin >> arr[i];
    }

    isertionSort(arr, size);
    cout << "Sort Array: " << endl;
    for(int i =0; i < size; i++){
        cout<<  arr[i] << " ";
    }
    cout << endl;
    return 0;
}
