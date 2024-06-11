#include <iostream>
using namespace std;

class Hero
{

public:
    int health;
    char level;
};

int main(int argc, char const *argv[])
{

    // Statically allocation
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

    // Access the data using arrow operator(->)
    SpiderMan->health = 70;
    SpiderMan->level = 'C';

    cout << "SpiderMan health: " << SpiderMan->health << endl;
    cout << "SpiderMan level: " << SpiderMan->level << endl;
    return 0;
};