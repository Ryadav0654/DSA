#include <iostream>
using namespace std;

// Parent class

class Animal
{

public:
    int age;
    int weight;

    void setWeight(int w)
    {
        this->weight = w;
    }

};

// Inheritance the class human

class Dog : public Animal
{

public:
    void sleep()
    {
        cout << "Dog is Sleeping." << endl;
    }
};

class GermanShefred: public Dog {

    public:
    void Eat(){
        cout << "GermanShefred is eating." << endl;
    }
};

int main(int argc, char const *argv[])
{

    GermanShefred g;
    cout << "Access the age: " << g.age << endl;
    g.sleep();
    g.Eat();

    return 0;
};
