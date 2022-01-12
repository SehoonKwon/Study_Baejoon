#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	
	unsigned long long sum = 0;
	for(int i=0; i<s1.size(); i++)
		for(int j=0; j<s2.size(); j++)
			sum += (unsigned long long)( (s1[i] - '0') * (s2[j] - '0') );
			
	cout << sum;
	return 0;
}
