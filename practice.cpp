#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

void fibonacci(int n)
{
    int t1 = 0, t2 = 1, t3;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
}



int update(int n)
{

    int count = 0;
    int m;
    while (n != 0)
    {
        m = n & 1;
       
        if (m == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

bool isPresent(int *arr, int s, int e, int key){

    int m = (s+e)/2;

    if(arr[m] == key && s <= e){
        return true;
    }else if(arr[m] > key && s <= e){
       return isPresent(arr, s, m, key);
    }else{
       return isPresent(arr, m+1, e, key);
    }

    return false;
}

int main(int argc, char const *argv[])
{

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // cout << "Factorial: " << factorial(n) << endl;
    fibonacci(n);

/*
    int arr[5] = {2, 5 , 6, 7, 8};
    cout <<"isPresent: " << isPresent(arr, 0, 4, 1) << endl;

    // int n;
    // cin >> n;

    // int value = update(n);
    // cout << value << endl;

    // int value = 0;
    // int i = 0;
    // while(n != 0) {
    //     int rem = n % 2;

    //     value = 10*value + rem;

    //     n /= 2;

    //     i++;
    // }
    // cout << value << endl;

    // int reverse = 0;
    // while(value != 0) {
    //     int rem = value % 10;
    //     reverse = reverse * 10 + rem;
    //     value /= 10;
    // }

    // cout << "in binary " << reverse << endl;

    // int value = 0;
    // int i = 0;
    // while(n != 0) {
    //     int bit = n & 1;
    //     value = pow(10, i)*bit + value;
    //     n = n >> 1;
    //     i++;

    // }

    // cout << value << endl;

    */

    return 0;
}
