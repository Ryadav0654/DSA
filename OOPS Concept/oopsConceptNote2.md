i# Encapsulation(Information or data hiding)

It is defined as the the wrapping up of data and information in a single unit.

👉 Wrapping or binding of data and the function together.

### Example

```C++
#include<iostream>
using namespace std;

class Student {

    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this -> age;
    }
};

int main(int argc, char const *argv[])
{

    Student Ramesh;

    cout << "Encapsulation Achieved" << endl;

    return 0;
};
```

### Advantage

1. data hiding
2. we can make "read only class".
3. code reusability
4. Unit testing

## Fully Encapsulation

1. where all the data members are in Private.
2. we can access these data members in same class only.

### Example

```C++
class Hero{
    private:
    int health;
    char level;
}
```

# Inheritance

The derived class inherits the features from the base class and can have additional features of its own.

👉 created class => derived or child class or sub class

👉 exist class => base class or parent class or super class.

### Modes

👉 Private data member of any class can not be inheritance.

<img src="https://files.codingninjas.in/note_2073_705a0916d192_2.png" />

### Syntax

```C++
    class parent_class{
        // Body of parent class
    };

    class child_class: access_modifiers parent_class {
        // body of child class
    };

```

## Types of Inheritance

### Single inheritance -

There is only one parent class and one child class in single inheritances.

### Example

```C++
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

int main(int argc, char const *argv[])
{

    Male Naveen;
    cout << "Naveen Age: " << Naveen.age << endl;
    cout << "Naveen height: " << Naveen.height << endl;
    Naveen.setWeight(68);
    cout << "Naveen weight: " << Naveen.weight << endl;
    Naveen.sleep();

    return 0;
};

```

## Multilevel inheritance

When a class inherits from a derived class, and the derived class becomes the base class of the new class, it is called multilevel inheritance. In multilevel inheritance, there is more than one level.
<img src="https://files.codingninjas.in/note_2074_8702b838f831_3.png"/>

### Example

```C++
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

```

## Multi-Inheritence

<img src="https://files.codingninjas.in/note_2074_d502531f4bc7_4.png"/>

### Example

```C++
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

```

## Hierarchical inheritance

In hierarchical inheritance, one class is a base class for more than one derived class.
<img src="https://files.codingninjas.in/note_2074_328db3243812_5.png"/>

### Example

```C++
#include <iostream>
using namespace std;

// Parent class

class A
{

public:

    void func1()
    {
        cout << "Inside function 1" << endl;
    }

};


class B: public A
{

public:
    void func2()
    {
        cout << "Inside function 2" << endl;
    }
};

class C: public A{

    public:
    void func3(){
        cout << "Inside function 3" << endl;
    }
};

int main(int argc, char const *argv[])
{

    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();

    return 0;
};
```

## Hybrid inheritance

Hybrid inheritance is a combination of more than one type of inheritance.
<img src="https://files.codingninjas.in/note_2074_3584f083c75e_6.png"/>

## Inheritance Ambiguity

👉 To solve this ambiguity scope resolution operator is used denoted by ‘ :: ‘

### Syntax

```
ObjectName.ClassName::FunctionName();
```

### Example

```C++
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

```

## Polymorphism(many forms)

Real-life example: A person at the same time can have different characteristics. Like a man at the same time is a father, a husband, and an employee. So the same person possesses different behavior in different situations. This is called polymorphism.

## Types

## Compile Time Polymorphism(static polymorphism)

This type of polymorphism can be achieved through function overloading or operator overloading.

### Function overloading:

When there are multiple functions in a class with the same name but different parameters, these functions are overloaded. The main advantage of function overloading is that it increases the program’s readability. Functions can be overloaded by using different numbers of arguments or by using different types of arguments.

### Example

```C++
#include<iostream>
using namespace std;

class A {

    public:
    void sayHello() {
        cout << "hello EveryOne" << endl;
    }

    void sayHello(string name, int age){
        cout << "hello " << name << endl;
        cout << "Your age is: " << age << endl;
    }

    void sayHello(string name){
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

```
### Operator overloading 

Points to remember while overloading an operator:

1. It can be used only for user-defined operators(objects, structures) but cannot be used for in-built operators(int, char, float, etc.).

2. Operators = and & are already overloaded in C++ to avoid overloading them.

3. The precedence and associativity of operators remain intact.

👉 List of operators that can be overloaded in C++:
<img src="https://files.codingninjas.in/note_2076_7ea00a8ed8b0_3.png"/>

👉 List of operators that cannot be overloaded in C++:
<img src="https://files.codingninjas.in/note_2076_22c7b1a0ac1a_4.png"/>

### Syntax
```
return_type operator(symbol) (input) {
    // body 
}
```

### Example
```C++
#include<iostream>
using namespace std;

class B{

    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+ (B& obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "Output: " << value2 - value1 << endl;
    }
};
 
int main(int argc, char const *argv[])
{
 
    B obj1, obj2;
    obj1.a = 5;
    obj2.a = 10;

    obj1+obj2;
 
 
    return 0;
};
```
## Runtime polymorphism(dynamic polymorphism)
### Method overriding:

Method overriding is a feature that allows you to redefine the parent class method in the child class based on its requirement.

👉 Rules for method overriding:

1. The parent class method and the method of the child class must have the same name.

2. The parent class method and the method of the child class must have the same parameters.

3. It is possible through inheritance only.

### Example
```C++
#include<iostream>
using namespace std;

class Animal{

    public:
    void Speak(){
        cout << "speaking" << endl;
    }
};

class Dog: public Animal {

    void Speak(){
        cout << "barking" << endl;
    }
};

 
int main(int argc, char const *argv[])
{
 
    Dog obj;
    obj.Speak();
 
    return 0;
};
```
## Abstraction
Abstraction means providing only some of the information to the user by hiding its internal implementation detail

### Advantages Of Abstraction

1. Only you can make changes to your data or function, and no one else can.

2. It makes the application secure by not allowing anyone else to see the background details.

3. Increases the reusability of the code.

4. Avoids duplication of your code.