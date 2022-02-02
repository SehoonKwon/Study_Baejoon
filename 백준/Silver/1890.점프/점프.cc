#include <iostream>
using namespace std;

#define ull unsigned long long

int N;
ull Array[101][101];
ull DP[101][101];

void makeDP()
{
	DP[0][0] = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (DP[i][j] == 0) continue;
			ull val = Array[i][j];
			if (val == 0) continue;
			if (j + val < N) DP[i][j + val] += DP[i][j];
			if (i + val < N) DP[i + val][j] += DP[i][j];
		}
	}
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> Array[i][j];

	makeDP();
	cout << DP[N - 1][N - 1];
	return 0;
}