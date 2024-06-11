#include <iostream>
using namespace std;

// write a function for selection sorting 

void selectionSort(int arr[], int n){

    for(int i = 0; i < n-1; i++) {
        int minIndex = i;

        for(int j = i+1; j < n; j++){
            
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main(int argc, char const *argv[])
{
    int even[8] = {5, 9, 0, 9, 8, 3, 8, 4};
    selectionSort(even, 8);
    for(int i = 0; i< 8; i++){
        cout << even[i] << " ";
    }
    return 0;
}
