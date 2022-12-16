#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, string> mymap;

void madeTable()
{
    mymap["CU"] = "see you";
    mymap[":-)"] = "I’m happy";
    mymap[":-("] = "I’m unhappy";
    mymap[";-)"] = "wink";
    mymap[":-P"] = "stick out my tongue";
    mymap["(~.~)"] = "sleepy";
    mymap["TA"] = "totally awesome";
    mymap["CCC"] = "Canadian Computing Competition";
    mymap["CUZ"] = "because";
    mymap["TY"] = "thank-you";
    mymap["YW"] = "you’re welcome";
    mymap["TTYL"] = "talk to you later";
}

int main()
{
    madeTable();

    string s;
    while (1) {
        cin >> s;
        if (mymap.find(s) == mymap.end()) cout << s << "\n";
        else cout << mymap[s] << "\n";
        
        if (s == "TTYL") break;
    }

    return 0;
}