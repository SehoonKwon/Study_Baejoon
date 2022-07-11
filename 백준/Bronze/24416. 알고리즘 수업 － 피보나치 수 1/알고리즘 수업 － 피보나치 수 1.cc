#include <iostream>
using namespace std;

int DP[41];

int main() {
	int N;
	cin >> N;
	DP[1] = DP[2] = 1;
	for(int i=3; i<=N; i++)
		DP[i] = DP[i-1]+DP[i-2];
	cout<<DP[N]<<" "<<N-2;
	return 0;
}