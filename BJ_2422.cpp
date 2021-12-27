#include <iostream>
using namespace std;

int N, M;
int Array[201][201];

void input()
{
	cin >> N >> M;
	for(int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;
		Array[x][y] = Array[y][x] = 1;
	}
}

void solve()
{
	int cnt = 0;
	for(int i = 1; i <= N - 2; i++)
	{
		for(int j = i + 1; j <= N - 1; j++)
		{
			for(int k = j + 1; k <= N; k++)
			{
				if(Array[i][j] == 1 || Array[i][k] == 1 || Array[j][k] == 1) continue;
				cnt++;
			}
		}
	}
	cout << cnt;
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	input();
	solve();
	return 0;
}
