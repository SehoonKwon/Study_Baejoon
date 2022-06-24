#include <iostream>
#include <string>
using namespace std;

#define MOD 97

int main() {
	string str;
	cin >> str;
	
	string temp = str.substr(0, 4);
	str.erase(0, 4);
	str.append(temp);
	
	string nstr;
	for(int i=0; i<str.size(); i++){
		if(str[i] >= 'A' && str[i] <='Z')
			nstr += to_string(str[i]-'A'+10);
		else
			nstr += str[i];
	}
	
	int X = 0;
	for(int i=0; i<nstr.size(); i++){
		int tx = nstr[i]-'0';
		tx %= MOD;
		X = (X*10 + tx)%MOD;
	}
	if(X % MOD == 1) cout<<"correct";
	else cout<<"incorrect";
	return 0;
}