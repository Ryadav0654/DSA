#include<iostream>
using namespace std;

void update(int **dptr){
    // kya kuch hoga - NO 
    // dptr = dptr + 1; 

    // kya kuch hoga - YES 
    *dptr = *dptr + 1;

    // kya kuch hoga - YES 
    **dptr = **dptr + 1;

}
 
int main(int argc, char const *argv[])
{
 
    //---------------- Double Pointer -----------------------------------------//
    int val = 5;
    int *ptr = &val;
    int **dptr = &ptr;

    cout << "Printing the value of val" << endl;

    cout << val << endl;
    cout << *ptr << endl;
    cout << **dptr << endl;

    cout << "printing the address of val" << endl;
    cout << &val << endl;
    cout << ptr << endl;
    cout << *dptr << endl;

    cout << "Printing the value of val before calling the update function" << endl;

    cout << val << endl;
    cout << ptr << endl;
    cout << dptr << endl;

    update(dptr);

    cout << "Printing the value of val after calling the update function" << endl;

    cout << val << endl;
    cout << ptr << endl;
    cout << dptr << endl;

    return 0;
};