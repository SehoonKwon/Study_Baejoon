#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
    s = s.substr(0, 3);
    if(s == "555")
	    cout<<"YES";
	else
	    cout<<"NO";
	return 0;
}