#include <iostream>
using namespace std;

// Parent class

class A
{

public:
    void func()
    {
        cout << "Inside Class A" << endl;
    }
};

class B 
{

public:
    void func()
    {
        cout << "Inside Class B" << endl;
    }
};

class C : public A, public B
{

public:
    void func()
    {
        cout << "Inside Class C" << endl;
    }
};

int main(int argc, char const *argv[])
{

    A obj1;
    obj1.A::func();

    B obj2;
    obj2.B::func();


    C obj;
    obj.C::func();
    obj.A::func();
    obj.B::func();

    return 0;
};
