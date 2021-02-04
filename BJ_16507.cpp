#include <iostream>
using namespace std;

int R, C, Q;
int Array[1001][1001];
int preSum[1001][1001];

void input()
{
	cin >> R >> C >> Q;
	for (int i = 1; i < R + 1; i++)
	{
		for (int j = 1; j < C + 1; j++)
			cin >> Array[i][j];
	}
}

void makePreSum()
{
	preSum[1][1] = Array[1][1];
	for (int i = 2; i < C + 1; i++)
		preSum[1][i] = Array[1][i] + preSum[1][i - 1];

	for (int i = 2; i < R + 1; i++)
		preSum[i][1] = Array[i][1] + preSum[i - 1][1];

	for (int i = 2; i < R + 1; i++)
	{
		for (int j = 2; j < C + 1; j++)
			preSum[i][j] = Array[i][j] + preSum[i - 1][j] + preSum[i][j - 1] - preSum[i - 1][j - 1];
	}
}

void solve()
{
	makePreSum();
	for (int i = 0; i < Q; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int sum = preSum[c][d] - preSum[c][b - 1] - preSum[a - 1][d] + preSum[a - 1][b - 1];
		int dN = (c - a + 1)*(d - b + 1);
		cout << sum / dN << "\n";
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
