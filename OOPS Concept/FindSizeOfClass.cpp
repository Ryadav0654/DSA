 #include <iostream>
 using namespace std;

 class Student {

    char name[50];
    int rollno;
    int mark;

 };

 class Hero {

   // Empty class 
   
 };

int main(int argc, char const *argv[])
{
    
    Student first;

    cout << "size of Student Class: " << sizeof(Student) << endl;

    cout << "size of Hero Class: " << sizeof(Hero) << endl;

    cout << "size of first: " << sizeof(first) << endl;

    return 0;
};