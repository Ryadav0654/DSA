#include <iostream>
using namespace std;

class A
{

public:
    void sayHello()
    {
        cout << "hello EveryOne" << endl;
    }

    void sayHello(string name, int age)
    {
        cout << "hello " << name << endl;
        cout << "Your age is: " << age << endl;
    }

    void sayHello(string name)
    {
        cout << "hello " << name << endl;
    }
};

int main(int argc, char const *argv[])
{

    A obj;
    obj.sayHello();
    obj.sayHello("ravi", 18);
    obj.sayHello("ravi");

    return 0;
};