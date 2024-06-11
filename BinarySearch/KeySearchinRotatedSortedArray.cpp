#include<iostream>
using namespace std;
int findPivot(int arr[], int n)
{
    int s = 0;

    int e = n - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return s; // or return e;
}

// function for search the key in roatated sorted array {findPivot function + binarySearch function}

int searchKey(int arr[], int s, int e, int key)
{
    int start = s;

    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int findPosition(int arr[], int n, int key)
{
    int pivot = findPivot(arr, n);

    if (arr[0] <= key && arr[pivot - 1] >= key)
    {
        return searchKey(arr, 0, (pivot - 1), key);
    }
    else
    {
        return searchKey(arr, pivot, (n - 1), key);
    }
}
 
int main(int argc, char const *argv[])
{

    int even[7] = {6, 7, 8, 9, 1, 2, 3};

    int ans = findPosition(even, 7, 8);

    cout << "Postion of key is " << ans << endl;
    
    

    // int odd[7] = {1, 2, 3, 6, 7, 8, 9};

    // int idx = searchKey(odd, 0, 6, 7);

    // cout << idx << endl;
 
 
 
 
    return 0;
};