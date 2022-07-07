#include <iostream>
using namespace std;

#define ull unsigned long long

int main() {
	ull X;
	cin >> X;
	
	int N;
	cin >> N;
	while(N--){
		ull A, B;
		cin >> A >> B;
		X -= (A*B);
	}
	if(X == 0) cout<<"Yes";
	else cout<<"No";
	return 0;
}