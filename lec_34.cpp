#include <iostream>
#include <vector>
using namespace std;

// ----------------------- Questions ------------------------------------//

/*

Question Links:
- Reverse Strings: https://bit.ly/3r8UJcf
- Check Palindrome: https://bit.ly/3FWNEBB
*/

// double pointer approach
/*
void reverseStr(string& str, int i, int j){

    //  base case
    if(i > j){
        return ;
    }

    // recursive relation
    swap(str[i], str[j]);
    i++;
    j--;
    reverseStr(str, i, j);
}
*/

// single pointer approach

/*
void reverse(string &str, int i)
{

    int n = str.length();
    // base case
    if (i > (n - i - 1))
    {
        return;
    }

    // recursive relation

    swap(str[i], str[n - i - 1]);
    i++;

    reverse(str, i);
}

*/

// vector<int> binary(long long n)
/*
{
    //base case
    if( n == 0){
        return binary;
    }
    vector<int> bit;
    bit.push_back(n & 1);
    n = n >> 1;
    binary(n);
}
*/

bool check(vector<int> bit)
{

    int i = 0;
    int j = bit.size() - 1;

    while (i < j)
    {
        if (bit[i] == bit[j])
        {
            i++;
            j--;
        }
        else
        {

            return false;
        }
    }
    return true;
}

// check string is Palidrome or not
// two pointer method

bool isPalidromeTwo(string str, int i, int j)
{

    // base case
    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
    {

        return false;
    }
    else
    {
        return isPalidromeTwo(str, i + 1, j - 1);
    }
}

// One pointer method

bool isPalidromeOne(string str, int i)
{

    int n = str.length();
    // base case
    if (i > (n - i - 1))
    {
        return true;
    }

    if (str[i] != str[n - i - 1])
    {

        return false;
    }
    else
    {
        return isPalidromeOne(str, i + 1);
    }
}

// write power function using recursion (a^b)

/*
long long power(int a, int b){

    // base case
    if(b == 0){

        return 1;

    }else if(b == 1){

        return a;

    }
    // long long ans = a*power(a, --b);
    // return ans;
    // or
    return a*power(a, --b);

}

*/

// another approach

long long power(int a, int b)
{

    // base case
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    // recursive call

    long long ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
    {

        return ans * ans;
    }
    else
    {
        // if b is odd
        return a * ans * ans;
    }
}

// bubble sort using recursion

void sortedArr(int *arr, int n)
{

    // base case - if already array is sorted 
    if (n == 0 || n == 1)
    {
        return;
    }

    //first case - largest element ko sabse last me rakh do
    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // recursive call
    sortedArr(arr, n - 1);
}

int main(int argc, char const *argv[])
{

    // string str;
    // cout << "Enter the string str: ";
    // getline(cin, str);

    // calling reverseStr function
    /*
    cout << "reverse str after calling reverseStr function: " << endl;
    reverseStr(str, 0, str.length()-1);
    cout << str << endl;

    */

    // calling reverse function
    /*
        cout << "reverse str after calling reverse function: " << endl;
        reverse(str, 0);
        cout << str << endl;

    */

    // calling binary function

    /*
      long long n;
      cout << "Enter the value of n: ";
      cin >> n;
      vector<int> ans = binary(n);

      for (int i : ans)
      {
          cout << i << " ";
      }
      cout << endl;

      if (check(ans))
      {
          cout << "Given number is Palidrome" << endl;
      }
      else
      {
          cout << "Given number is not a palidrome" << endl;
      }
    */

    // calling isPalidrome function
    /*
        string str;
        cout << "Enter the string str: ";
        getline(cin, str);

        if (isPalidromeOne(str, 0))
        {
            cout << "Given string is Palidrome" << endl;
        }
        else
        {
            cout << "Given string is not a palidrome" << endl;
        }
    */

    // calling power function
/*
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    long long ans = power(a, b);
    cout << "value of a^b is: " << ans << endl;

*/

    // sortedArr function call

    int arr[5]; 
    cout << "Enter array element: ";
    for(int i =0; i < 5; i++){
        cin >> arr[i];
    }

    sortedArr(arr, 5);
    for(int i =0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}