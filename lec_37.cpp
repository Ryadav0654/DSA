#include <iostream>
#include <vector>
using namespace std;

// ----------------------------- Questions -----------------------------------------//
/*
Question Links:
- Subsets:https://leetcode.com/problems/subsets/
- Subsequences: https://bit.ly/33hi3MB


// solve these questions using binary number
*/

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{

    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // recusive call
    // exclude the element
    solve(nums, output, index + 1, ans);

    // include the element
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

// element in power set is 2^n {where n is number element in the given vector}

vector<vector<int>> subset(vector<int> &nums)
{

    // this vector store the output vectors
    vector<vector<int>> ans;
    //  this vector store the all the excluded and included element
    vector<int> output;

    // this is the index of nums
    int index = 0;

    // this function solve the problem or making the power set
    solve(nums, output, index, ans);
    return ans;
}

// --------------------- Question - 2 ------------------------//
void solve(string str, string output, int index, vector<string> &ans)
{

    // base case
    if (index >= str.length())
    {

        if (output.length() > 0)
        {
            ans.push_back(output);
        }

        return;
    }

    // exclude
    solve(str, output, index + 1, ans);

    // include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}


vector<string> subsequences(string str)
{

    vector<string> ans;
    int index = 0;
    string output;
    solve(str, output, index, ans);
    return ans;
}

int main(int argc, char const *argv[])
{

    /*
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i <n; i++){

        cin >> nums[i];
    }

    vector<vector<int>> ans = subset(nums);

    for(int i = 0; i < ans.size(); i++){

        for(int j = 0; j < ans[i].size(); j++){

             cout << ans[i][j] << " ";
        }

        cout << endl;
    }
    */

    // ----------------------------- Question - 2 ------------------------------------//
    string str;
    cout << "Enter your string: ";
    cin >> str;

    vector<string> ans = subsequences(str);

    for (int i = 0; i < ans.size(); i++)
    {

        for (int j = 0; j < ans[i].length(); j++)
        {

            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}