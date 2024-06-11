#include<bits/stdc++.h>
using namespace std;
 
int main(int argc, char const *argv[])
{
    unordered_map<string, int> m;

    // insertion

    // 1 type
    pair<string, int> p = make_pair("ravi", 18);
    m.insert(p);

    // 2 type
    pair<string, int> pair1("suraj", 16);
    m.insert(pair1);

    // 3 type
    m["naveen"] = 19;
    // here the value of key naveen is upadated by 23 not added new key value
    m["naveen"] = 23;

    // Search

    cout << "ravi: "  << m["ravi"] << endl;
    cout << "ravi: "  << m.at("ravi") << endl;

    //Note - yadi koi key map me present nahi hai aur ham use search kar rahe using .at() then code give error but yadi hum m[key] ka use karke search karte hai to key add ho jayegi map and initially usaki value zero(0) hogi

    // for example - this give error 
    // cout << m.at("unknownKey") << endl;

    // but this is not give error
    cout <<"unknownKey: " <<  m["unknownKey"] << endl;
    cout <<"unknownKey: " <<  m.at("unknownKey") << endl;

    // find the size
    cout << "size of map: " << m.size() << endl;

    // check the key is present or not 
    cout << "check key ravi is present or not: " << endl;

    // Note - if key is present then count function return 1 otherwise it return 0 using count function 

    if(m.count("ravi")){
        cout << "key ravi is present." << endl;
    }else{
        cout << "key ravi is not present." << endl;
    }

    // erase or delete 
    cout << "before deleting suraj key map size: " << m.size() << endl;
    m.erase("suraj");
    cout << "after deleting suraj key map size: " << m.size() << endl;

    //iterator

    // Note - unordered map me key - value order me nahi hota hai

    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout << it -> first << " " << it -> second << endl;
        it++;
    }

    return 0;
};