#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
	cin >> str;
	string target = "driip";
	
	int len = str.size();
	if(len < 5) cout<<"not cute";
	else
	{
		string t = str.substr(len-5, 5);
		if(t == target) cout<<"cute";
		else cout<<"not cute";
	}
	
	return 0;
}