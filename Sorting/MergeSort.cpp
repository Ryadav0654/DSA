#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){

    int *temp = new int[e - s + 1]; // Corrected the size of temporary array
    int tempIdx = 0; // Index for temporary array
    int m = s + (e - s) / 2;
    int left = s;
    int right = m + 1;

    while(left <= m && right <= e){

        if(arr[left] < arr[right]){

            temp[tempIdx++] = arr[left++];
        } else {

            temp[tempIdx++] = arr[right++];
        }
    }

    // If elements remain in the left array
    while(left <= m){
        temp[tempIdx++] = arr[left++];
    }

    // If elements remain in the right array
    while(right <= e){
        temp[tempIdx++] = arr[right++];
    }
    
    // Copy the elements from temporary array back to original array
    for(int i = 0; i < tempIdx; i++){ // Iterate through temp array till tempIdx
        arr[s + i] = temp[i]; // Copy elements starting from s
    }

    delete []temp;
}

void mergeSort(int *arr, int s, int e){
    // Base case 
    if(s >= e){
        return;
    } 

    int m = s + (e - s) / 2;

    // Recursively sort left and right halves
    mergeSort(arr, s, m);
    mergeSort(arr, m + 1, e);

    // Merge the sorted halves
    merge(arr, s, e);
}
 
int main(int argc, char const *argv[]){
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    delete []arr;

    return 0;
}
