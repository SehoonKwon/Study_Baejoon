#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int Array[] ={0, 1, 0, 0};

int main() {
	
	string s;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'A') swap(Array[1], Array[2]);
		else if(s[i] == 'B') swap(Array[2], Array[3]);
		else if(s[i] == 'C') swap(Array[1], Array[3]);
	}
	
	for(int i=1; i<=3; i++)
		if(Array[i] == 1) cout<<i;
	
	return 0;
}