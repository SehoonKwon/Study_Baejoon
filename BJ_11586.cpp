#include <iostream>
#include <cstring>
using namespace std;

#define endl "\n"

int N, K;
char Array[101][101];
char ANS[101][101];

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> Array[i][j];
	cin >> K;
}

void solve()
{
	if (K == 1)
		memcpy(ANS, Array, sizeof(Array));
	else if (K == 2)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				ANS[i][j] = Array[i][N - 1 - j];
				ANS[i][N - 1 - j] = Array[i][j];
			}
		}
	}
	else
	{
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				ANS[i][j] = Array[N - 1 - i][j];
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << ANS[i][j];
		cout << endl;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
