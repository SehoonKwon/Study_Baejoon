#include <iostream>
using namespace std;

int main() {
	int X, N;
	cin >> X >> N;
	int res = 0;
	for(int i=0; i<N; i++){
		int x;
		cin >> x;
		res += X;
		if(x <= res) res -= x;
	}
	cout<<res + X;
	return 0;
}