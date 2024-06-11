#include <bits/stdc++.h>
using namespace std;
/*

 Question Links:
- Rat in a Maze Problem: https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
 */

bool isSafe(int newx, int newy, vector<vector<int>> visited, vector<vector<int>> arr, int n)
{
    // check we can visit this co-ordinate or not

    if ((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && (visited[newx][newy] == 0) && (arr[newx][newy] == 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(int x, int y, vector<vector<int>> &arr, vector<vector<int>> visited, string path, int n, vector<string> &ans)
{
    // base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // mark the visited co-ordinate 1

    visited[x][y] = 1;

    // visit four side - left, right, top, down
    // left jane ke liye
    int newx = x;
    int newy = y - 1;

    if (isSafe(newx, newy, visited, arr, n))
    {
        path.push_back('L');
        solve(newx, newy, arr, visited, path, n, ans);
        path.pop_back(); // backtracking
    }

    // right jane ke liye
    newx = x;
    newy = y + 1;

    if (isSafe(newx, newy, visited, arr, n))
    {
        path.push_back('R');
        solve(newx, newy, arr, visited, path, n, ans);
        path.pop_back(); // backtracking
    }

    // top jane ke liye
    newx = x - 1;
    newy = y;

    if (isSafe(newx, newy, visited, arr, n))
    {
        path.push_back('T');
        solve(newx, newy, arr, visited, path, n, ans);
        path.pop_back(); // backtracking
    }
    // down jane ke liye
    newx = x + 1;
    newy = y;

    if (isSafe(newx, newy, visited, arr, n))
    {
        path.push_back('D');
        solve(newx, newy, arr, visited, path, n, ans);
        path.pop_back(); // backtracking
    }

    // at the end - mark the visited co-ordinate 0
    visited[x][y] = 0;
}

vector<string> FindPath(vector<vector<int>> &arr, int n)
{

    // Initialise the visited vector

    vector<vector<int>> visited = arr;
    string path = "";
    vector<string> ans;

    // Initialise the visited vector element is 0

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    int x = 0;
    int y = 0;

    // condition check the first elemnt of the vector is zero or not
    if (arr[0][0] == 0)
    {
        return ans;
    }

    // calling the solve function

    solve(x, y, arr, visited, path, n, ans);

    // sort the ans
    sort(ans.begin(), ans.end());
    return ans;
}

int main(int argc, char const *argv[])
{

    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    // initialise the 2d vector
    vector<vector<int>> arr(n, vector<int>(n));
    cout << "Enter the element of vector: " << endl;

    // taking input in this vector

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // calling the findPath function

    vector<string> result = FindPath(arr, n);
    cout << "Print the ans: " << endl;

    // print the answer

    for (string str : result)
    {
        cout << str << " ";
    }
    cout << endl;

    // print the all vector elements

    cout << "print the vector element : " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
};