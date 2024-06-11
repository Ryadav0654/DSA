#include <bits/stdc++.h>
using namespace std;

// -------------------------- Questions ---------------------------------------------//
/*
Question Links:
- Permutations Questions: https://leetcode.com/problems/permutations/
*/
void Solve(vector<int> nums, vector<vector<int>> &ans, int index)
{

    // base case
    if (nums.size() <= index)
    {
        ans.push_back(nums);
        return;
    }

    // recursive relation

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        Solve(nums, ans, index + 1);

        // bactracking
        swap(nums[index], nums[j]);
    }
}

vector<vector<int>> Permute(vector<int> nums)
{
    int index = 0;
    vector<vector<int>> ans;
    Solve(nums, ans, index);
    return ans;
}

int main(int argc, char const *argv[])
{

    vector<int> nums;
   
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    

    vector<vector<int>> result = Permute(nums);

    for (int i = 0; i < result.size(); i++)
    {

        for (int j = 0; j < result[0].size(); j++)
        {

            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
};