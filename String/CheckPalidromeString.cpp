#include <iostream>
using namespace std;

bool checkPalidrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {

        if (name[s] != name[e])
        {
            return false;
        }
        s++;
        e--;
    }

    return true;
}

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

    if (checkPalidrome(name, strLength))
    {

        cout << "Given string is a Palidrome" << endl;
    }
    else
    {

        cout << "Given string is not a Palidrome" << endl;
    }

    return 0;
};