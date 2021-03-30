#include <iostream>
#include <cstring>
using namespace std;

#define endl "\n"

char Array[6][6];
int visit[26];
int visit2[6][6];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
int ans, vcnt;

void input()
{
	for (int i = 1; i < 6; i++)
		for (int j = 1; j < 6; j++)
			cin >> Array[i][j];
}

void DFS(int x, int y)
{
	visit2[y][x] = true;
	vcnt++;
	if (vcnt == 7)
	{
		ans++;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx > 0 && nx < 6 && ny > 0 && ny < 6)
		{
			//2차원 배열 -> 1차원 배열 수에 매칭
			int idx = (ny - 1) * 5 + nx;
			if (visit[idx] == true && visit2[ny][nx] == false)
				DFS(nx, ny);
		}
	}
}

void combi(int idx, int S, int Y, int cnt)
{
	//조합 완성
	if (cnt == 7)
	{
		//S 수 확인
		if (S >= 4)
		{
			//인접 확인
			int y = idx / 5 + 1;
			int x = idx % 5;
			if (x == 0)
			{
				y--;
				x = 5;
			}

			memset(visit2, 0, sizeof(visit2));
			vcnt = 0;
			DFS(x, y);
		}
		return;
	}

	for (int i = idx; i < 26; i++)
	{
		if (visit[i] == true) continue;

		visit[i] = true;

		int y = i / 5 + 1;
		int x = i % 5;
		if (x == 0)
		{
			y--;
			x = 5;
		}
		if (Array[y][x] == 'S')
			combi(i, S + 1, Y, cnt + 1);
		else
			combi(i, S, Y + 1, cnt + 1);

		visit[i] = false;
	}
}

void solve()
{
	//조합 -> S 수 확인 -> 인접 확인
	for (int i = 1; i <= 25; i++)
	{
		int y = i / 5 + 1;
		int x = i % 5;
		if (x == 0)
		{
			y--;
			x = 5;
		}
		memset(visit, 0, sizeof(visit));
		visit[i] = true;
		if (Array[y][x] == 'S')
			combi(i, 1, 0, 1);
		else
			combi(i, 0, 1, 1);
	}

	cout << ans << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
