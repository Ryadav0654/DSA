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