#include <iostream>
using namespace std;

// Parent class

class Animal
{

public:
    int age;
    int weight;

    void bark()
    {
        cout << "barking" << endl;
    }

};


class Human
{

public:
    void speak()
    {
        cout << "speaking." << endl;
    }
};

class Hybrid: public Animal, public Human {

    public:
    void Eat(){
        cout << "eating." << endl;
    }
};

int main(int argc, char const *argv[])
{

    Hybrid object;
    cout << "Access the age: " << object.age << endl;
    object.speak();
    object.bark();

    return 0;
};
