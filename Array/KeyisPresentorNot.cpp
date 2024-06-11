#include <iostream>
using namespace std;

bool keySearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[20] = {1, 5, 3, 5, 3, 78, 9, 43, 56, 33, 78, 90, 76, 53, 2, 4, 6, 7, 8, 10};

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    bool found = keySearch(arr, 20, key);
    if (found)
    {
        cout << "key is Presnt " << endl;
    }
    else
    {
        cout << "key is absent" << endl;
    }

    return 0;
};