#include<iostream>
using namespace std;
 
int main(int argc, char const *argv[])
{
 //creating a 2D array using heap memory 

// taking row and col value 
 int row , col;
 cout << "Enter the value of row: " ;
 cin >> row ;
 cout << "Enter the value of col: ";
 cin >> col;

// creating 2D array 

 int **arr = new int*[row];     // this line make pointer of row number 
 for(int i = 0; i < row; i++){
    arr[i] = new int[col];
 }

 // taking input 
 for (int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
        cin >> arr[i][j];
    }
 }

cout << endl;


 // taking output  
 for (int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
        cout <<  arr[i][j] << " ";
    }

    cout << endl;
 }
 

 // after doing all the task, release or free the heap memory 

 // releasing the heap memory of 2D array
 // first release 
 
  for(int i = 0; i < row; i++){
    delete []arr[i];
 }

 //second release 
 delete []arr;
 
    return 0;
};