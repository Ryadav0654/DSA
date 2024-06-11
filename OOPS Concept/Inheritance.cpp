#include <iostream>
using namespace std;

// Parent class

class Human
{

public:
    int age;
    int height;
    int weight;

    void setWeight(int w)
    {
        this->weight = w;
    }

    int getAge()
    {
        return this->age;
    }
};

// Inheritance the class human

class Male : public Human
{

public:
    string color;

    void sleep()
    {
        cout << "Male is Sleeping." << endl;
    }
};

class Female : protected Human
{

public:
    string color;

    int  getHeight()
    {
       return this -> height;
    }
};

int main(int argc, char const *argv[])
{

    Male Naveen;
    cout << "Naveen Age: " << Naveen.age << endl;
    cout << "Naveen height: " << Naveen.height << endl;
    Naveen.setWeight(68);
    cout << "Naveen weight: " << Naveen.weight << endl;
    Naveen.sleep();

    Female Dimple;
    cout << Dimple.getHeight() << endl;

    return 0;
};