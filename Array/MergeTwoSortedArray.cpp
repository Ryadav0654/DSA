#include <iostream>
using namespace std;

void mergeSortedArray(int arr1[], int n, int arr2[], int m, int arr3[])
{

    int k = 0, i = 0, j = 0;

    while (i < n && j < m && k < m + n)
    {

        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i]; // replace k as k++ and i as i++
            k++;
            i++;
            // another way of writting
            //  arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n && k < m + n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m && k < m + n)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

int main(int argc, char const *argv[])
{

    int arr1[5] = {1, 3, 4, 7, 9};
    int arr2[4] = {2, 4, 4, 6};
    int arr3[9] = {0};

    mergeSortedArray(arr1, 5, arr2, 4, arr3);

    for (int i = 0; i < 9; i++)
    {

        cout << arr3[i] << " ";
    }

    cout << endl;

    return 0;
};