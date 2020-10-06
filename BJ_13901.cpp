#include <iostream>
#include <vector>
using namespace std;

int R, C, k;
int Array[1001][1001];
int visit[1001][1001];
int sr, sc;
int dx[] = { 0, 0, 0, -1, 1 };
int dy[] = { 0, -1, 1, 0, 0 };
int dir_table[5];

void input()
{
	cin >> R >> C >> k;
	for (int i = 0; i < k; i++)
	{
		int r, c;
		cin >> r >> c;
		Array[r][c] = 1;
	}

	cin >> sr >> sc;

	for (int i = 1; i < 5; i++)
		cin >> dir_table[i];
}

void solve()
{
	int dir_cnt = 1;
	visit[sr][sc] = true;
	int Ecnt = 0;
	while (1)
	{
		if (Ecnt == 4) break;
		int dir = dir_table[dir_cnt];
		int nc = sc + dx[dir];
		int nr = sr + dy[dir];
		if (nr > -1 && nr < R && nc > -1 && nc < C && visit[nr][nc] == false && Array[nr][nc] == 0)
		{
			visit[nr][nc] = true;
			sc = nc;
			sr = nr;
			Ecnt = 0;
		}
		else
		{
			Ecnt++;
			dir_cnt++;
			if (dir_cnt == 5) dir_cnt = 1;
		}
	}

	cout << sr << " " << sc;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
