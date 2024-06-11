#include <iostream>
using namespace std;

/*
Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
*/

bool check(int arr[], int size)
{
    int count = 0;

    for (int i = 1; i < size; i++)
    {

        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }

    if (arr[size - 1] > arr[0])
    {
        count++;
    }

    return count <= 1;
}

int main(int argc, char const *argv[])
{

    int arr[6] = {3, 4, 5, 1, 1, 2};

    if (check(arr, 6))
    {

        cout << "Given array is sorted and roatated" << endl;
    }
    else
    {

        cout << "Given array is not sorted and roatated" << endl;
    }

    return 0;
};