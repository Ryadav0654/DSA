#include <iostream>
using namespace std;

// Given an array ‘arr’ of size ‘n’ find the largest element in the array.
int largestElement(int arr[], int n) {


  int max = arr[0];
  for (int i = 1; i < n; i++){

      if(max < arr[i]){
          max = arr[i];
      }
  }

  return max;
}

int main(int argc, char const *argv[])
{

    int arr[5] ={1, 2, 8, 4, 5};
    int maxi = largestElement(arr, 5);

    cout <<"largest element is: " << maxi << endl;
    
    return 0;
}
