#include <iostream>
using namespace std;

class Student
{

private:
    int rollno;
    char grade;

public:
    void setRollno(int n)
    {
        rollno = n;
    }

    int getRollno()
    {
        return rollno;
    }

    void setGrade(char ch)
    {
        grade = ch;
    }

    char getGrade()
    {
        return grade;
    }
};

int main(int argc, char const *argv[])
{

    Student Rohan;
    /*
    we can not access the rollno and grade when access modifier is Private

    Rohan.rollno = 1;
    Rohan.grade = 'A';
    */

    // use getter and setter to take access the Private properties

    Rohan.setRollno(1);
    Rohan.setGrade('A');

    // access the value of rollno and grade
    cout << "Rollno of Rohan is: " << Rohan.getRollno() << endl;
    cout << "Grade of Rohan is: " << Rohan.getGrade() << endl;

    return 0;
};