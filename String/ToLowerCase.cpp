#include <iostream>
using namespace std;

char toLowerCase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int main(int argc, char const *argv[])
{

    char ch;
    cout << "Enter the UpperCase character: ";
    cin >> ch;

    cout << "After converting lowerCase character: " << toLowerCase(ch) << endl;

    return 0;
};