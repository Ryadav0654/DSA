## Object Oriented Programming CheatSheet - by Love Babbar

> https://whimsical.com/object-oriented-programming-cheatsheet-by-love-babbar-YbSgLatbWQ4R5paV7EgqFw

# OOPs
Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc. in programming.

# Class

👉 It is a user-defined data type.

👉 It holds own data and member functions.

👉 jab class me koi properties nahi hoti to usaki size 1 hoti hai. jo usaki existance ko batati hai.

👉 A class is like a blueprint for an object.

👉 It can be accessed and used by creating an instance of that class.

### How to make class

```C++
#include<iostream>
using namespace std;

class Hero {

    char heroname[50];
    int health;
    char level;

    void Print() {
        cout << "health is: " << health << endl;
    }

};

class student {

    char name[50];
    int rollno;
    char grade;

};

int main(int argc, char const *argv[])
{

    Hero Ironman;
    student Rohan;

    return 0;
};
```

## Static and Dynamically Allocation

### Example

```C++
#include<iostream>
using namespace std;

class Hero {

    public:
    int health;
    char level;

};

int main(int argc, char const *argv[])
{

  //Statically allocation
  Hero Ironman;
Ironman.health = 75;
Ironman.level = 'A';

cout << "IronMan health: " << Ironman.health << endl;
cout << "IronMan level: " << Ironman.level << endl;

//   Dynamically Allocation

Hero *SpiderMan = new Hero;

// Access the data using dot operator
 (*SpiderMan).health = 85;
 (*SpiderMan).level = 'B';

 cout << "SpiderMan health: " << (*SpiderMan).health << endl;
 cout << "SpiderMan level: " << (*SpiderMan).level << endl;


 //Access the data using arrow operator(->)
 SpiderMan -> health = 70;
 SpiderMan -> level = 'C';

  cout << "SpiderMan health: " << SpiderMan -> health << endl;
 cout << "SpiderMan level: " << SpiderMan -> level << endl;
    return 0;
};
```

### Output

```text
IronMan health: 75
IronMan level: A
SpiderMan health: 85
SpiderMan level: B
SpiderMan health: 70
SpiderMan level: C
```

## Access Modifiers or Access Specifiers

👉 By default access modifier is Private.

1. Public - class members access the everywhere in the program.

### Example

```C++
 #include <iostream>
 using namespace std;

 class Student {

    public:
    int rollno;
    char grade;

 };


int main(int argc, char const *argv[])
{

    Student Rohan;
    // input the value in the Rohan Object
    Rohan.rollno = 1;
    Rohan.grade = 'A';

    // access the value of rollno and grade
    cout << "Rollno of Rohan is: " << Rohan.rollno << endl;
    cout << "Grade of Rohan is: " << Rohan.grade << endl;


    return 0;
};
```

### Output

```text
Rollno of Rohan is: 1
Grade of Rohan is: A
```

2. Private - Only the member functions or the friend functions are allowed to access the private data members of the class.

### Getter and setter function

If you want others to read or modify the value of a private member, you can provide public get and set methods.

```C++
     #include <iostream>
 using namespace std;

 class Student {

    private:
    int rollno;
    char grade;

    public:
    void setRollno(int n){
        rollno = n;
    }

    int getRollno(){
        return rollno;
    }

    void setGrade(char ch){
        grade = ch;
    }

    char getGrade(){
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
```

### Output

```text
Rollno of Rohan is: 1
Grade of Rohan is: A
```

3. Protected

# Object

An Object is an identifiable entity with some characteristics and behavior.

👉 An Object is an instance of a Class.

👉 When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

### Example and Find the size of class and object 

```C++
 #include <iostream>
 using namespace std;

 class Student {

    char name[50];
    int rollno;
    int mark;
 };

int main(int argc, char const *argv[])
{

    // first is a object
    Student first;

    cout << "size of Student Class: " << sizeof(Student) << endl;

    cout << "size of Hero Class: " << sizeof(Hero) << endl;

    cout << "size of first: " << sizeof(first) << endl;

    return 0;
};

```

### Output

```text
size of Student Class: 60
size of Hero Class: 1
size of first: 60
```

## Padding and Greedy alignment Method

> https://medium.com/@xsankalp13/padding-and-greedy-alignment-d2e3a843c35

## Constructor 
jab ham object banate hai to by default ek constructor call hota hai.

jab ham koi custom constructor bana dete hai to default constructor, parameterised and copy constructor hat jata hai aur custom constructor call hota hai.

### this Keyword
jo use samay call ho rha hota hai use current object kahate hai. 

this is a pointer of current object.

this keyword me current object ka address store hota hai. 

### Parameterised constructor
jisame kuchh parameter input le rahe ho.

## Code 
``` C++
#include<iostream>
using namespace std;

class Hero {

    public:
    int health;
    char level;
    // Customize constructor 
    Hero() {
        cout << "constructor Called" << endl;
    }

    // parameterised customize constructor
    Hero(int health, char level){
        cout << "address of this: " << this << endl;
        this -> health = health;
        this -> level = level;
    }

    //customize copy constructor
    Hero(Hero& temp){
        cout << "copy constructor called " << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void Print() {
        cout << "health is: " << this -> health << endl;
        cout << "level is: " << this -> level << endl;
    }
    // Destructor
    ~Hero(){
        cout << "Destructor function called: " << endl;
    }
    
};

int main(int argc, char const *argv[])
{
    Hero Ramesh;

    Hero IronMan(10, 'A');
    cout << "Address of IronMan Object is: " << &IronMan << endl;
    cout << "IronMan health: " << IronMan.health << endl;
    cout << "IronMan level: " << IronMan.level << endl;
    
    Hero SpiderMan(70, 'B');
    cout << "SpiderMan health: " << SpiderMan.health << endl;
    cout << "SpiderMan level: " << SpiderMan.level << endl;
    
    // create a ravi object
    Hero Ravi(50, 'B');
    cout << "Ravi Object: " << endl;
    Ravi.Print();

    // copy ravi in suraj object 
    Hero Suraj(Ravi);
    cout << "suraj Object: " << endl;
    Suraj.Print();


    return 0;
};
```
### Output 
``` text 
constructor Called
address of this: 0x758dff760
Address of IronMan Object is: 0x758dff760
IronMan health: 10
IronMan level: A
address of this: 0x758dff758
SpiderMan health: 70
SpiderMan level: B
address of this: 0x758dff750
Ravi Object:
health is: 50
level is: B
copy constructor called
suraj Object:
health is: 50
level is: B
```

## Copy constructor 
jab ham kisi object ko copy karate hai to automatic copy constructor call ho jata hai.

### Deep Copy and Shallow copy
Default copy constructor -> shallow copy karata hai
Customise copy constructor -> Deep copy karata hai

### Code 
``` C++
#include<iostream>
#include<string.h>
using namespace std;

class Hero {

    public:

    char *name;
    int health;
    char level;
    // Customize constructor 
    Hero() {
        name = new char[100];
        cout << "constructor Called" << endl;
    }
   

    //customize copy constructor
    Hero(Hero& temp){
        cout << "copy constructor called " << endl;
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this -> name = ch;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void Print() {
        cout << endl;
        cout << "[ Name : " << this -> name << ", ";
        cout << "health : " << this -> health << ", ";
        cout << "level : " << this -> level << " ]" << endl;
        cout << endl;
    }

    void setName(char name[]){
        strcpy(this -> name , name);
    }
  
};

int main(int argc, char const *argv[])
{
    // shallow copy 
    /*
    Hero hero1;

    char name[7] = "Babbar";
    hero1.setName(name);
    hero1.health = 75;
    hero1.level = 'B';

    hero1.Print();

    Hero hero2(hero1);
    hero2.Print();

    hero1.name[0] = 'G';
    hero1.Print();
    hero2.Print();

    */

    // Deep copy 

   Hero hero1;

    char name[7] = "Babbar";
    hero1.setName(name);
    hero1.health = 75;
    hero1.level = 'B';

    hero1.Print();

    Hero hero2(hero1);
    hero2.Print();

    hero1.name[0] = 'G';
    hero1.Print();
    hero2.Print();


    return 0;
};
```
### Output
``` text
constructor Called

[ Name : Babbar, health : 75, level : B ]

copy constructor called

[ Name : Babbar, health : 75, level : B ]


[ Name : Gabbar, health : 75, level : B ]


[ Name : Babbar, health : 75, level : B ]

```

## Copy Assignment Operator 
copy one object to another object 

> hero1 = hero2

# Destructor 
de-allocate the memory 

1. name same to class name 
2. No return type
3. No Input/Output parameter

 👉 statically allocated object ke liye destructor 
 automatically called hota hai

 👉 dynamically allocated object ke liye destructor 
 manually called hota hai

 # h.w
 > const keyword
 
 > initialisation List 

 # Static keyword 

 # Static Function 
 