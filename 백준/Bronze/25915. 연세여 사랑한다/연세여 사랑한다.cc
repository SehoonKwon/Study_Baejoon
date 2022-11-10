#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	string s = "ILOVEYONSEI";
	char c;
	cin >> c;
	
	int sum = 0;
	for(int i=0; i<s.size(); i++){
		if(i == 0) sum += abs(s[i]-c);
		else sum += abs(s[i]-s[i-1]);
	}
	
	cout<<sum;
	
	return 0;
}