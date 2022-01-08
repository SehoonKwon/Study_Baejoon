#include <iostream>
using namespace std;

int N;
char Array[21][21];

void solve()
{
	for (int i = 1; i <= N; i++)
	{
		Array[1][i] = '*';
		Array[i][N] = '*';
		Array[N][i] = '*';
		Array[i][1] = '*';
		Array[i][i] = '*';
		Array[i][N + 1 - i] = '*';
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (Array[i][j] != '*') cout << " ";
			else cout << Array[i][j];
		}
		cout << "\n";
	}
}

int main()
{
	cin >> N;
	solve();
	return 0;
}
