#include <iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = -1;
    int rownum = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        if (maxi < sum)
        {
            maxi = sum;
            rownum = i + 1;
        }
    }

    cout << "Maximum sum of the row is: " << maxi << endl;
    return rownum;
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

    largestRowSum(arr, 3, 3);

    return 0;
};