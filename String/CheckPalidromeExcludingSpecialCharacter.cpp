#include <iostream>
using namespace std;
#include <string>

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool valid(char ch)
{

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {

        return true;
    }

    return false;
}

bool checkPalindrome(string temp)
{
    // function to check the temp  string is palidrome or not

    int st = 0;
    int e = temp.length() - 1;

    while (st < e)
    {

        if (temp[st] != temp[e])
        {
            return false;
        }

        st++;
        e--;
    }

    return true;
}



int main()
{
    string str = "A man, a plan, a canal: Panama";
    

    // add valid character in the temp string

    string temp;

    for (int i = 0; i < str.length(); i++)
    {
        if (valid(str[i]))
        {
            temp.push_back(toLowerCase(str[i]));
        }
    }

    // print the temp string

    for (int k = 0; k < temp.length(); k++)
    {
        cout << temp[k] << " ";
    }
    cout << endl;

    if (checkPalindrome(temp))
    {
        cout << "palidrome " << endl;
    }
    else
    {
        cout << "not a Palidrome" << endl;
    }

    

    return 0;
}