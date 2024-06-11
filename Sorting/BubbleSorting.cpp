#include <iostream>
using namespace std;

// write a fuction to sort an  array using bubble sort method

/*

void bubbleSort(int arr[], int n){

    for(int i = 0; i < n-1; i++){

        for(int j = 0; j < n-i-1; j++){

            if(arr[j] > arr[j+1]){

                swap(arr[j], arr[j+1]);

            }
        }
    }
}

*/

// more optimise code

void bubbleSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        bool sorted = true;

        for (int j = 0; j < n - i-1; j++)
        {

            if (arr[j] > arr[j + 1])
            {

                swap(arr[j], arr[j + 1]);
                sorted = false;
            }

        }

        if (sorted)  
        break;
            
    }
}


void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    cout << "Sorted Array :" << endl;
    printArray(arr, n);
    return 0;
}
