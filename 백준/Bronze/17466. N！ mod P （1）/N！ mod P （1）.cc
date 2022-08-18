#include <iostream>
using namespace std;

#define ull unsigned long long

int main() {
	ull A, B;
	cin >> A >> B;
	
	ull res = A;
	for(ull i=A-1; i>1; i--){
		res = (res % B ) * ( i % B ) % B;
	}
	
	cout << res;
	return 0;
}