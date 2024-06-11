#include <iostream>
using namespace std;
// mountain Problem function

int peakIdx(int arr[], int size)
{

    int s = 0;

    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    { // = not use because it repeat the comparision again

        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return s;
}

int main(int argc, char const *argv[])
{

    int peak[9] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int answer = peakIdx(peak, 9);
    cout << "Peak index of the peak array is " << answer << endl;

    return 0;
}
