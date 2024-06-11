#include<iostream>
using namespace std;

// macros - a piece of code in a program that is replced by value of macros. after initialising the value of macros never be change. Don't use semicolon(;) at the last of macros value

// before compilation the PI value replace from 3.14 whereever we use PI
 
 // creating or initialising macros

 #define PI 3.14

 // Global variable 
 // Don't use global variable because any function can change its value
// use refrence variable in case of global variable 
//  int gvar = 13;

 void print(int a){
    cout << a << endl;
    // cout << gvar << " in print function" << endl;
 }


 void getSum(){
    // int sum = gvar + gvar;
    cout << "using gvar in function getSum" << endl;
    // cout << sum << endl;
 }

 // Inline function
 // 1 line or 1-2 line function 
 // if function body use more than 3 line of code then it cann't make a inline function 

// before compilation call of inline function replace the body of function

 // Initialising inline function 
 inline int getMax(int& a, int& b){
    return (a > b) ? a : b;
 }
 
int main(int argc, char const *argv[])
{
 
    float rad;
    cout << "Enter the circle radius: ";
    cin >> rad;

    double area = PI*(rad*rad);
    cout << "Area of circle is: " << area << endl;

    // Global variable 

    // cout << gvar << " in main function" << endl;
    print(rad);
    getSum();

    int a, b;
    cin  >> a >> b;

    int ans = 0;

    ans = getMax(a, b);
    cout <<"max is " <<  ans << endl;

    a += 5;
    b += 2;
    ans = getMax(a, b);
    cout <<"max is: " <<   ans << endl;
 
 
    return 0;
};