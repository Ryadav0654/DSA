# Sorting 

## Heap sorting 
heap is a complete binary tree (CBT) that comes with a heap order property.  

### heap order property 
1. max heap - parent is greather than child node.
2. min heap- parent is less than the child node. 

<img src="https://www.techiedelight.com/wp-content/uploads/2016/11/Min-Max-Heap.png" alt ="img_heapmax and min heap"/>

### CBT
1. every level is completely filled except the last level.
2. nodes are always added from the left hand towards the right.

## Insertion in max heap
### Approach: 
1. insert the value at last of the array 
2. check the node value is smaller than the parent node value or not if it is not smaller then swap these value 


<img src="./Heap sort/heap.png" alt ="img_heapmax and min heap"/>
 


### Code 
```C++
#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap(){

        arr[0] = -1;
        size = 0;
    }

    void insert(int val){

        ++size;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parentIndex = index/2;
            if(arr[parentIndex] < arr[index]){
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }else{
                return ;
            }
        }
    }


    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    heap h;
    h.insert(10);
    h.insert(70);
    h.insert(20);
    h.insert(80);
    h.insert(30);

    h.print();
    return 0;
};
```
```text
Time Complexity: O(log(n))
```

## Deletion in max heap

### Code 
```C++
#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {

        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {

        ++size;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[parentIndex] < arr[index])
            {
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else
            {
                return;
            }
        }
    }

    void Delete()
    {

        if (size == 0)
        {
            cout << "nothing to delete " << endl;
            return;
        }

        arr[1] = arr[size];
        size--;
        int i = 1;

        while (i < size)
        {

            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[leftIndex] > arr[i])
            {
                swap(arr[leftIndex], arr[i]);
                leftIndex = i;
            }
            else if (rightIndex < size && arr[rightIndex] > arr[i])
            {
                swap(arr[rightIndex], arr[i]);
                rightIndex = i;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    heap h;
    h.insert(10);
    h.insert(70);
    h.insert(20);
    h.insert(80);
    h.insert(30);

    h.print();
    h.Delete();
    h.print();
    return 0;
};
```

```text
Time Complexity: O(log(n))
```

## Heapify Algorithms

## Code: 
```C++
#include <iostream>
using namespace std;

// for max heap

void heapifyAlgo(int *arr, int size, int i)
{

    int largest = i;
    int leftChild = 2*i;
    int rightChild = 2*i + 1;

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

// for min heap

void heapifyAlgo(int *arr, int size, int i)
{

    int smallest = i;
    int leftChild = 2*i;
    int rightChild = 2*i + 1;

    if (leftChild <= size && arr[smallest] > arr[leftChild])
    {
        smallest = leftChild;
    }

    if (rightChild <= size && arr[smallest] > arr[rightChild])
    {
        smallest = rightChild;
    }

    if (smallest != i)
    {
        swap(arr[smallest], arr[i]);
        heapifyAlgo(arr, size, smallest);
    }

}

void print(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    for (int i = n / 2; i > 0; i--)
    {
        heapifyAlgo(arr, n, i);
    }

    cout << "convert the array in heap: " << endl;
    print(arr, 6);

    return 0;
};
```
# Heap sort 

## Code: 
```C++
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
```
```text
Time Complexity: O(nlog(n))
```

## Create the heap using privorty_queue in STL 