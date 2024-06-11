// #include<bits/stdc++.h>
// using namespace std;

// /*
// You have been given an array ‘a’ of ‘n’ unique non-negative integers.
// Find the second largest and second smallest element from the array.
// Return the two elements (second largest and second smallest) as another array of size 2.

// Example :

// Explain
// Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
// Output: [4, 2]

// The second largest element after 5 is 4, and the second smallest element after 1 is 2.
// */

// vector<int> getSecondOrderElements(int n, vector<int> a) {
//         vector<int> temp;
//         int firstmax = max(a[0], a[1]);
//         int firstmin = min(a[0], a[1]);
//        for(int i = 1; i < n; i++){

//            if(firstmax < a[i]){

//                firstmax = a[i];

//            }else if(firstmin > a[i]){

//                firstmin = a[i];

//            }
//        }

//        cout << "firstmax " << firstmax << endl;
//        cout << "firstmin " << firstmin << endl;

//         int secondmax = min(a[0], a[1]);
//         int secondmin = max(a[0], a[1]);
//        for(int j = 1; j < n; j++){

//           if(secondmax < a[j] && a[j] < firstmax ){

//                secondmax = a[j];

//            }else if(secondmin > a[j] && a[j] > firstmin){

//                secondmin = a[j];

//            }
//        }

//        cout << "secondmax " << secondmax << endl;
//        cout << "secondmin " << secondmin << endl;

//        temp.push_back(secondmax);
//        temp.push_back(secondmin);

//        return temp;
// }

// int main(int argc, char const *argv[])
// {
//     int size;
//     cout << "enter the size of v: ";
//     cin >> size;

//     vector<int> v(size);

//     for(int i = 0; i < size; i++){
//        cin >> v[i];
//     }

//     vector<int> ans;
//     ans = getSecondOrderElements(size, v);

//     for(int i : ans){

//         cout <<"second max and min is: " <<  i << " ";
//     }

//     return 0;
// };

#include <iostream>
#include <vector>
#include <limits>
using namespace std;

vector<int> getSecondOrderElements(vector<int> &v, int n)
{
    // * Initialize a vector to store the second maximum and second minimum values
    vector<int> temp;

    // ** Check if the size of the vector is less than 2

    if (n < 2)
    {
        // ~ If the size is less than 2, there's no second maximum or minimum, so add INT_MIN and INT_MAX to the vector
        temp.push_back(INT_MIN);
        temp.push_back(INT_MAX);

        // !Return the vector containing INT_MIN and INT_MAX
        return temp;
    }

    //& Initialize variables to store the first and second maximum and minimum values
    int firstmax = max(v[0], v[1]);
    int secondmax = min(v[0], v[1]);
    int firstmin = min(v[0], v[1]);
    int secondmin = max(v[0], v[1]);

    // ~ Iterate through the vector starting from index 2
    for (int i = 2; i < n; i++)
    {
        // Check if the current element is greater than the first maximum
        if (v[i] > firstmax)
        {
            //^ If so, update the second maximum and first maximum
            secondmax = firstmax;
            firstmax = v[i];
        }
        else if (v[i] > secondmax && v[i] != firstmax)
        {

            // !If the current element is greater than the second maximum and not equal to the first maximum,
            // ~ update the second maximum
            secondmax = v[i];
        }

        // Check if the current element is less than the first minimum
        if (v[i] < firstmin)
        {
            // If so, update the second minimum and first minimum
            secondmin = firstmin;
            firstmin = v[i];
        }
        else if (v[i] < secondmin && v[i] != firstmin)
        {
            // If the current element is less than the second minimum and not equal to the first minimum,
            // update the second minimum
            secondmin = v[i];
        }
    }

    // Push the second maximum and second minimum values into the vector
    temp.push_back(secondmax);
    temp.push_back(secondmin);

    // Return the vector containing the second maximum and second minimum values
    return temp;
}

int main()
{
    int size;
    cout << "Enter the size of arr: ";
    cin >> size;

    vector<int> vec(size);
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> vec[i];
    }

    vector<int> ans = getSecondOrderElements(vec, size);

    for (int i : ans)
    {
        cout << i << endl;
    }

    return 0;
}
