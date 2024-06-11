#include <iostream>
#include <vector>
using namespace std;

// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

void rotateArray(int arr[], int n, int k, int arr1[])
{

    for (int i = 0; i < n; i++)
    {
        arr1[(i + k) % n] = arr[i];
    }
}


int main(int argc, char const *argv[])
{

    int nums[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int numsrotate[7] = {0};

    rotateArray(nums, 7, k, numsrotate);

    for (int i = 0; i < 7; i++)
    {
        cout << numsrotate[i] << " ";
    }

    cout << endl;

  

    return 0;
}
