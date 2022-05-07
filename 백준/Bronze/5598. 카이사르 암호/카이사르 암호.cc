#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	for(int i=0; i<s.size(); i++)
	{
		char c = s[i]-3;
		if(c < 'A') c += ('Z'-'A' + 1);
		cout<<c;
	}
	
	return 0;
}