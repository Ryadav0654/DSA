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