#include<iostream>
using namespace std;

// refrence variable in fuction 


/*
this code give warning when it will run and it's bad practice because define ans refrence varible is a local variable  

int& func(int a){
    int num = a;
    int& ans= num;
    return ans;
}
*/

/*
this code give warning when it will run and it's bad practice because define ans pointer is a local pointer after end of the fuction pointer ans destroy   

int* func(int a){
    int* ans= &a;
    return ans;
}
*/


void update1(int n){
    n++;
}

void update2(int& n){
    n++;
}

int getSum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    return sum;
}
 
int main(int argc, char const *argv[])
{
 
 // refrence variable - variable have same memory or memory address but different names

 int a = 8;

 // create a refrence variable 
 int& j = a;

 cout << a  << endl;
 a++;
 cout << a  << endl;
 j++;
 cout << a  << endl;
 cout << j << endl;

 // j is a refrence variable of a

 int m;
 cout << "Enter the value of m: " ;
 cin >> m;

 cout << "without using refrence variable " << endl;
 cout << "before " << m << endl; 
 update1(m);
 cout << "after " << m  << endl; 

 cout << "using refrence variable " << endl;
 cout << "before " << m << endl; 
 update2(m);
 cout << "after " << m  << endl; 

 /*
 Bad practice 

 int a;
 cout << "Enter the value of a: ";
 cin >> a;

 int arr[a];

 
 */

// for using dynamic memory or heap memory use new keyword which return an address of heap  memory

    char ch = 'a';
    char *ptr = &ch;

    cout << "size of char: " << sizeof(ch) << endl;
    cout << "size of pointer: " << sizeof(ptr) << endl;

    
   
 
    return 0;
};