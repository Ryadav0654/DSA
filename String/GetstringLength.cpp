#include<iostream>
using namespace std;

int getLength(char name[])
{

    int count = 0, i = 0;

    while (name[i] != '\0')
    {

        count++;
        i++;
    }

    return count;
}


int main(int argc, char const *argv[])
{
 
 char name[20];
    cout << "Enter your name: ";

    // if we will click the space, tab and enter then cin excecution stop

    cin >> name;

    cout << "Your name is " << name << endl;

    int strLength = getLength(name);
    cout << "the length of the string is: " << strLength << endl;
 
 
 
    return 0;
};