#include <iostream>
using namespace std;

#define ull unsigned long long

int N;
ull DP[36];

int main() {
	cin >> N;
	DP[0] = DP[1] = 1;
	for(int i=2; i<=N; i++)
	{
		DP[i] = DP[0] * DP[i-1];
		for(int j=1; j<i; j++)
			DP[i] += (DP[j]*DP[i-1-j]);
	}
	cout<<DP[N];
	return 0;
}