#include <iostream>
#include <string>
using namespace std;

string s;

int main() {
	
	getline(cin, s);
	
	for(int i=0; i<s.size()-1; i++)
		if(s[i] == 'd' || s[i] == 'D')
			if(s[i+1] == '2')
			{
				cout<<"D2";
				return 0;
			}
			
	cout<<"unrated";
	return 0;
}
