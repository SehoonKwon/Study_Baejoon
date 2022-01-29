#include <iostream>
using namespace std;

#define MOD 1000000009

int N, T;
unsigned int DP[1000001];

void makeDP()
{
	DP[1] = 1;
	DP[2] = DP[1] + 1;
	DP[3] = DP[2] + DP[1] + 1;
	for (int i = 4; i < 1000001; i++)
		DP[i] = (((DP[i - 1] % MOD + DP[i - 2] % MOD) % MOD) % MOD + DP[i - 3] % MOD) % MOD;
}

int main()
{
	cin >> T;

	makeDP();

	while (T--)
	{
		cin >> N;
		cout << DP[N] << "\n";
	}
	return 0;
}