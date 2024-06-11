#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key)
{
    int s = 0;

    int e = size - 1;

    int m = s + (e - s) / 2;

    int ans = -1;

    while (s <= e)
    {
        if (arr[m] == key)
        {
            ans = m;
            e = m - 1;
        }
        else if (key < arr[m])
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }

    return ans;
}

int lastOccurance(int arr[], int size, int key)
{
    int s = 0;

    int e = size - 1;

    int m = s + (e - s) / 2;

    int ans = -1;

    while (s <= e)
    {
        if (arr[m] == key)
        {
            ans = m;
            s = m + 1;
        }
        else if (key < arr[m]) // left side
        {
            e = m - 1;
        }
        else if (key > arr[m]) // right side
        {
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }

    return ans;
}

int main(int argc, char const *argv[])
{

    int even[5] = {1, 1, 2, 2, 2};

    cout << "for even size array " << endl;

    int first_idx = firstOccurance(even, 5, 2);
    int last_idx = lastOccurance(even, 5, 2);

    cout << first_idx << " " << last_idx << endl;

    // total number of occurance is = (last idx - first idx) + 1;

    int ans = (last_idx - first_idx) + 1;
    cout << "total number of Occurance is " << ans << endl;

    return 0;
};