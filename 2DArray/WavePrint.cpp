#include<iostream>
#include <vector>
using namespace std;

// Question on leetcode 

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> temp;
    for(int col = 0; col < mCols; col++){
        if(col%2 == 0){
            for(int row = 0; row < nRows; row++){
                temp.push_back(arr[row][col]);
            }
        }else{
            for(int row =nRows-1; row >=0; row--){
                temp.push_back(arr[row][col]);
            }
        }
    }

    return temp;
};

 
int main(int argc, char const *argv[])
{
 
 
 
 
 
    return 0;
};