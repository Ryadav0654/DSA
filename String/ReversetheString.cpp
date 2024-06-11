#include <iostream>
using namespace std;

string reverseStr(string str)
{

    int s = 0, e = str.length() - 1;
    while (s < e)
    {

        swap(str[s++], str[e--]);
    }

    return str;
}

int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    
    cout << "reverse string is: " << reverseStr(str) << endl;

    return 0;
};