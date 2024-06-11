#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int arr[3][3];
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // row wise
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // row wise 

    // Input the array elements - row wise


    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){

            cin >> arr[row][col];
        }
    }

 
   // Input the array elements - column wise 
  
   /*
    for(int col = 0; col < 3; col++){
        for(int row = 0; row < 3; row++){

            cin >> arr[row][col];
        }
    }
   */

    // print the array element 

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){

           cout <<  arr[row][col] << " ";
        }

        cout << endl;
    }

   
    return 0;
}
