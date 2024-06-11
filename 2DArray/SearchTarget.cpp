#include <iostream>
using namespace std;

bool searchTarget(int arr[][3], int target, int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }

    return false;
}

int main(int argc, char const *argv[])
{

    int arr[3][3];
    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // row wise
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // row wise

    // Input the array elements - row wise
    cout << "Enter the 3*3 ArrayElement: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {

            cin >> arr[row][col];
        }
    }

    int target;
    cout << "Enter the value of target: ";
    cin >> target;

    if (searchTarget(arr, target, 3, 3))
    {

        cout << "Target is found" << endl;
    }
    else
    {

        cout << "Target is not found" << endl;
    }

    return 0;
};