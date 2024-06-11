#include <iostream>
#include <vector>
using namespace std;

/*
You are given an integer ‘N’. You need to return the first ‘N’ rows of Pascal’s triangle.

Example:


Explain
Input:
N = 4
Output:
1
1 1
1 2 1
1 3 3 1
Explanation: The output matrix has the first four rows of Pascal’s Triangle
*/

long long int nCr(int n, int r)
{

    long long int res = 1;

    for (int i = 0; i < r; i++)
    {

        res = res * (n - i);
        res = res / (i + 1);
    }

    return res;
}

vector<vector<int>> pascalTriangle(int N)
{

    vector<vector<int>> ans(N);

    for (int i = 0; i < N; i++)
    {
        ans[i].resize(i + 1);

        for (int j = 0; j <= i; j++)
        {

            ans[i][j] = nCr(i, j);
        }
    }

    return ans;
}

// ------------------- Another way to write this function ---------------------------//

vector<int> pascalRow(int rownum){

    vector<int> ansRow;
    long long ans = 1;
    ansRow.push_back(1);

    for(int col = 1; col <= rownum; col++){
        ans = ans*(rownum - col);
        ans = ans/col;
        ansRow.push_back(ans);
    }

    return ansRow;
}

vector<vector<int>> pascalTriangle2(int row){
     vector<vector<int>> triangle;
     for(int i = 1; i <= row; i++){
        vector<int> temp = pascalRow(i);
        triangle.push_back(temp);
     }

     return triangle;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "enter value of n: ";
    cin >> n;
    vector<vector<int>> temp;

    temp = pascalTriangle2(n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            cout << temp[i][j] << " ";
        }
        cout << endl;
    }

    // long long int ans = nCr(n, m);
    // cout << ans << endl;

    return 0;
}
