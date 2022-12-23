#include <iostream>
using namespace std;

int main() {
	char c;
	int cntA = 0, cntB = 0;
	while(1){
		cin >> c;
		if(cin.eof()) break;
		
		if(c == 'A') cntA++;
		else cntB++;
	}
	
	cout<<cntA<<" : "<<cntB;
	
	return 0;
}