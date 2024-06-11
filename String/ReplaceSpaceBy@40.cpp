#include <iostream>
#include<string.h> 
using namespace std;

// write a fuction to replace the space by @40

string replaceSpaces(string &str){

	string temp;
	for(int i = 0; i<str.length(); i++){

		if(str[i] == ' '){
			
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
			
		}else{

			temp.push_back(str[i]);
		}
		
	}

	return temp;
}

int main(int argc, char const *argv[])
{

    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    string ans = replaceSpaces(str);

    cout << ans << endl;

    return 0;
}
