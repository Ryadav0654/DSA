#include<iostream>
using namespace std;
// ---------------------- Important point ---------------------------//

// pointer also follow this rule 
// arr[i] == i[arr] == *(arr  + i) == *(i + arr)
// array is a constant pointer 
 
int main(int argc, char const *argv[])
{
    int arr[4] = {10, 20, 30, 40};
    int *ptr = &arr[0];

    // ----------------------------- Array -----------------------------//
    cout << "size of arr is: " << sizeof(arr) << endl;
    cout << "size of arr value is: " << sizeof(*arr) << endl;
    cout << "address of 0th position of arr: " << arr << endl;
    cout << "address of 0th position of arr: " << &arr << endl;
    cout << "address of 0th position of arr: " << &arr[0] << endl;
    cout << "value of 0th position of arr: " << *arr << endl;
    cout << "value  of (0th  + 1) position of arr: " << *arr + 1 << endl;
    cout << "value  of (0th  + 1) position of arr: " << (*arr) + 1 << endl;
    cout << "value  of 0th position of arr with postincrement: " << (*arr)++ << endl;
    cout << "value  of (0th  + 1) position of arr with preincrement: " << ++(*arr) << endl;
    cout << "value  of 1th position of arr: " << *(arr + 1) << endl;

     // ----------------------------- Pointer -----------------------------//

    cout << "size of pointer is: " << sizeof(ptr) << endl;
    cout << "size of pointer value is: " << sizeof(*ptr) << endl;
    cout << "size of pointer address is: " << sizeof(&ptr) << endl;


    // ------------------------ character array ----------------------------//
    char ch[5] = "abcd";
    char *c = &ch[0];

    cout <<"address of 0th element of ch: " <<  ch << endl;
    cout <<"address of 0th element of ch: " <<  &ch << endl;
    cout <<"value of 0th element of ch: " << *(c+1) << endl;


    return 0;
};