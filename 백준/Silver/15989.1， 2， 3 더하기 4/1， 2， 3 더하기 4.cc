#include <iostream>
using namespace std;

int N, T;
unsigned int DP[10001][4];

void makeDP()
{
	DP[1][1] = 1;
	DP[2][1] = 1;
	DP[2][2] = 1;
	DP[3][1] = DP[2][1];
	DP[3][2] = DP[1][1] + DP[1][2];
	DP[3][3] = 1;
	for (int i = 4; i < 10001; i++)
	{
		DP[i][1] = DP[i - 1][1];
		DP[i][2] = DP[i - 2][1] + DP[i - 2][2];
		DP[i][3] = DP[i - 3][1] + DP[i - 3][2] + DP[i - 3][3];
	}
}

int main()
{
	cin >> T;

	makeDP();

	while (T--)
	{
		cin >> N;
		cout << DP[N][1] + DP[N][2] + DP[N][3] << "\n";
	}
	return 0;
}