#include <iostream>
using namespace std;

char Snack[4] = {'0', 'S', 'N', 'U'};

int main() {
	
	double A,B;
	double res = 0;
	int X = 0;
	for(int i=1; i<=3; i++){
		cin >> A >> B;
		A *= 10;
		B *= 10;
		if(A >= 5000) A -= 500;
		if(res < B/A){
			res = B/A;
			X = i;
		}
	}
	cout<<Snack[X];
	return 0;
}