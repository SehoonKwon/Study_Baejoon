#include <iostream>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	
	int MIN = (int)1e9;
	for(int i=0; i<N; i++){
		int A, B;
		cin >> A >> B;
		if(A <= B && B < MIN) MIN = B;
	}
	
	if(MIN == (int)1e9) cout<<-1;
	else cout<<MIN;
	
	return 0;
}