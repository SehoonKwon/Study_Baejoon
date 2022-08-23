#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	for(int i=0; i<s.size(); i++){
		char c = s[i];
		cout<<c;
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
			if(i + 1 < s.size() && s[i+1] == ' ') cout<<s[i+1];
			if(i + 2 < s.size() && s[i+2] == ' ') cout<<s[i+2];
			i+=2;
		}
	}
	
	return 0;
}