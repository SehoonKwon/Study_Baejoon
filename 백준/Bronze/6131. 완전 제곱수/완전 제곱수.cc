#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int cnt = 0;
	for(int A=1; A<=500; A++){
		for(int B=1; B<=500; B++){
			if(A*A - B*B == N) cnt++;
		}
	}
	cout<<cnt;
	return 0;
}