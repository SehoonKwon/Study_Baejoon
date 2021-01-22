#include <iostream>
using namespace std;

int N;
int Array[301][301], Brray[301][301], ANS[301][301];

void input()
{
	cin >> N;
	for (int i = 1; i < N + 1; i++)
		for (int j = 1; j < N + 1; j++)
			cin >> Array[i][j];

	for (int i = 1; i < N + 1; i++)
		for (int j = 1; j < N + 1; j++)
			cin >> Brray[i][j];
}

void solve()
{
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j < N + 1; j++)
		{
			int temp = Array[i][1] & Brray[1][j];
			for (int k = 2; k < N + 1; k++)
				temp = temp | (Array[i][k] & Brray[k][j]);

			ANS[i][j] = temp;
		}
	}

	int cnt = 0;
	for (int i = 1; i < N + 1; i++)
		for (int j = 1; j < N + 1; j++)
			if (ANS[i][j] == 1) cnt++;

	cout << cnt;
}

int main()
{
	input();
	solve();
	return 0;
}
