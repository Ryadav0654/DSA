#include <iostream>
using namespace std;

class Student
{

private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};

int main(int argc, char const *argv[])
{

    Student Ramesh;

    cout << "Encapsulation Achieved" << endl;

    return 0;
};