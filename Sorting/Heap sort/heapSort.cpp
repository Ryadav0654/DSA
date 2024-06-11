#include <iostream>
using namespace std;

// for max heap
void heapifyAlgo(int *arr, int size, int i)
{

    int largest = i;
    int leftChild = 2 * i;
    int rightChild = 2 * i + 1;

    if (leftChild <= size && arr[largest] < arr[leftChild])
    {
        largest = leftChild;
    }

    if (rightChild <= size && arr[largest] < arr[rightChild])
    {
        largest = rightChild;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapifyAlgo(arr, size, largest);
    }
}


void heapSort(int *arr, int n)
{
    int size = n;

    while (size > 1)
    {
        swap(arr[1], arr[size]);
        size--;

        heapifyAlgo(arr, size, 1);
    }
}

void print(int *arr, int size)
{
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    // creation of heap
    for (int i = n / 2; i > 0; i--)
    {
        heapifyAlgo(arr, n, i);
    }

    cout << "convert the array in heap: " << endl;
    print(arr, n);

    heapSort(arr, n);
    cout << "sorted array: ";
    print(arr, n);

    return 0;
};