#include <iostream>
using namespace std;

#define ull unsigned long long

int T, n;
ull DP[70];

void makeDP()
{
	DP[0] = DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;
	for(int i=4; i<68; i++)
		DP[i] = DP[i-1] + DP[i-2] + DP[i-3] + DP[i-4];
}

int main() {
	makeDP();
	cin >> T;
	while(T--)
	{
		cin >> n;
		cout<<DP[n]<<"\n";
	}
	return 0;
}