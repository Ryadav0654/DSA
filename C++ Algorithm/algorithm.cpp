#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(3);
    v.push_back(9);

    //search 6 using binary search 
    cout << "6 is present or not " <<binary_search(v.begin(), v.end(), 6) << endl;

    cout << "lower bound of 6: " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "upper bound of 6: " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    // we can also use max, min, swap, and sort

    int a = 6;
    int b = 12;

    cout << "max of a and b is: " << max(a, b) << endl;
    cout << "min of a and b is: " << min(a,b) << endl;

    cout << "swap a and b: ";
    swap(a, b);
    cout << a << " " << b << endl;

    cout << "sorted vector: ";
    sort(v.begin(), v.end());

    for(int i : v){

        cout << i << " ";
    }

    cout << endl;
    string ch = "abcd";
    cout << "reverse the string: " << ch << endl;
    
    reverse(ch.begin(), ch.end());

    cout <<"reversed string is: " <<  ch << endl;

    cout << "rotate the vector: " ;
    for(int i: v){

        cout << i << " ";
    }

    cout << endl;
    
    rotate(v.begin(), v.begin() +1, v.end());

    cout << "after rotate the vector: ";
    for(int i: v){

        cout << i << " ";
    }

    return 0;
}
