#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    // ----------- & => address of operator -------------//
    // ----------- * => derefrence of operator -------------//

    int num = 6;
    int *ptr = &num;

    cout << "value is: " << *ptr << endl;
    cout << "Address is: " << ptr << endl;

    //-----------Another way to initialize the pointer ----------------//

    double i = 9.3;

    double *ptr2 = 0;
    ptr2 = &i;
    cout << "value is: " << *ptr2 << endl;
    cout << "value is: " << ++(*ptr2) << endl;
    cout << "value is: " << --(*ptr2) << endl;
    cout << "Address is: " << ptr2 << endl;
    cout << "Address is: " << ptr2+1 << endl;


    // size of pointer 

    cout << "size of pointer ptr: " << sizeof(ptr) << endl;
    cout << "size of pointer ptr: " << sizeof(ptr2) << endl;

    // character pointer 

    char ch = 'a';
    char *p = &ch;

    cout << "value is: " << *p << endl;
    cout << "address is: " << p << endl;
    cout << "size is: " << sizeof(p) << endl;
    cout << "size is: " << sizeof(int) << endl;





    return 0;
}
