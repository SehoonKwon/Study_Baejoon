#include <iostream>
using namespace std;

int Array[2][3];

int main() {
	char c;
	for(int i=0; i<2; i++)
		cin >> Array[i][0] >> c >> Array[i][1] >> c >> Array[i][2];
		
	if(Array[1][2] < Array[0][2]){
		Array[1][1]--;
		Array[1][2] += 60;
	}
	if(Array[1][1] < Array[0][1]) {
		Array[1][0]--;
		Array[1][1] += 60;
	}
	if(Array[1][0] < Array[0][0]) Array[1][0] += 24;
	cout << 3600 * (Array[1][0] - Array[0][0]) + 60 * (Array[1][1] - Array[0][1]) + Array[1][2] - Array[0][2];
	
	return 0;
}