#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{

    // step using partition
    //  step-1 take a pivot element
    //  step -2

    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e; // initialise the two pointer

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {

            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    // partition
    int partitionIndex = partition(arr, s, e);

    // recusive call
    quickSort(arr, s, partitionIndex - 1); // for sort the left array
    quickSort(arr, partitionIndex + 1, e); // for sort the right array
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}