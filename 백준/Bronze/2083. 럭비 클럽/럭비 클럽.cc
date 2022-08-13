#include <iostream>
#include <string>
using namespace std;

int main() {
	while(1){
		string s;
		int A, B;
		cin >> s >> A >> B;
		if(s == "#") break;
		
		if(A > 17 || B >= 80) cout<<s<<" Senior\n";
		else cout<<s<<" Junior\n";
	}
	return 0;
}