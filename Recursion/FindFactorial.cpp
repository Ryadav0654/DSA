#include <iostream>
using namespace std;

int factorial(int a)
{

    // base condition
    if (a == 0)
        return 1;

    // break bigger problem in small problem
    // recursive relation
    // f(n) = n*f(n-1) for factorial
    int smallerProblem = factorial(a - 1);
    int biggerProblem = a * smallerProblem;

    return biggerProblem;

    // other method to write upper line
    // return a * factorial(a - 1);
}

/*
void printCounting(int a){
    if(a >= 1){
        cout << a << endl;
    }

    printCounting(a-1);
}
*/



void printCounting(int a){

    if(a == 0){
        return ;
    }

    printCounting(a-1);

    cout << a << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;


    // ------------- count Printing ----------------//
    int a;
    cout << "Enter the value of a: ";
    cin >> a;

   printCounting(a);

     
    return 0;
};

// -------------------------- Notes -----------------------------//

/*
mandatory condition
1. base case
2. recursive relation
3. processing


head recursion 

func() {
    base case;
    recursive relation;
    processing ;
}


tail recursion 

func() {
    base case;

    processing;

    recursive relation;
}


*/