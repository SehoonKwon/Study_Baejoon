#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

//21.01.27

int N, M, R;
int Array[301][301], Array2[301][301];

void input()
{
	cin >> N >> M >> R;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> Array[i][j];
}

void Rotate2(int idx)
{
	//윗 부분
	for (int i = idx; i < M - 1 - idx; i++)
		Array2[idx][i] = Array[idx][i + 1];

	//오른쪽 부분
	for (int i = idx; i < N - 1 - idx; i++)
		Array2[i][M - 1 - idx] = Array[i + 1][M - 1 - idx];

	//아랫 부분
	for (int i = M - 1 - idx; i > idx; i--)
		Array2[N - 1 - idx][i] = Array[N - 1 - idx][i - 1];

	//왼쪽 부분
	for (int i = N - 1 - idx; i > idx; i--)
		Array2[i][idx] = Array[i - 1][idx];
}

void Rotate()
{
	int n = min(N, M) / 2;
	for (int i = 0; i < n; i++)
		Rotate2(i);
}

void solve()
{
	for (int i = 0; i < R; i++)
	{
		Rotate();
		memcpy(Array, Array2, sizeof(Array2));
		memset(Array2, 0, sizeof(Array2));
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << Array[i][j] << " ";
		cout << "\n";
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
