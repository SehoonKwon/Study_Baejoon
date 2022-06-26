#include <iostream>
using namespace std;

int H, M, P;

int main() {
	cin>>H>>M>>P;
	int cnt = 0, x;
	for(int i=0; i<P; i++){
		cin >> x;
		if(x < H || x > M) cnt++;
	}
	cout<<P-cnt;
	return 0;
}