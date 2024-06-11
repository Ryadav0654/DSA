#include <iostream>
using namespace std;

void rowSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        cout << i + 1 << " row sum is: " << sum << endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[3][3];

    cout << "Enter the 3*3 ArrayElement: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {

            cin >> arr[row][col];
        }
    }

    rowSum(arr, 3, 3);
    
    return 0;
};