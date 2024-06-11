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