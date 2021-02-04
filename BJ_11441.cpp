#include <iostream>
using namespace std;

int N, M;
int Array[100001];
int preSum[100001];

void input()
{
	cin >> N;
	for (int i = 1; i < N + 1; i++)
	{
		cin >> Array[i];
		if (i == 1)
			preSum[i] = Array[i];
		else
			preSum[i] = Array[i] + preSum[i - 1];
	}

	cin >> M;
}

void solve()
{
	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << preSum[b] - preSum[a - 1] << "\n";
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
