#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M, K;
vector<int> Array[51][51];
int dc[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dr[] = { -1, -1, 0, 1, 1, 1, 0, -1 };
int table1[] = { 0, 2, 4, 6 };
int table2[] = { 1, 3, 5, 7 };
int fcnt = 0;

struct point
{
	int r;
	int c;
	int m;
	int s;
	int d;
	int dead;
};
vector<point> fireball;

void input()
{
	cin >> N >> M >> K;
	for (int i = 0; i < M; i++)
	{
		int r, c, m, s, d;
		cin >> r >> c >> m >> s >> d;
		fireball.push_back({ r, c, m, s, d, 0 });
		Array[r][c].push_back(i);
		fcnt++;
	}
}

void mymemset()
{
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			Array[i][j].clear();
}

void solve()
{
	while (K--)
	{
		mymemset();

		//이동
		for (int i = 0; i < fireball.size(); i++)
		{
			if (fireball[i].dead == 1) continue;
			point temp = fireball[i];

			int speed = temp.s % N;
			int nr = temp.r + dr[temp.d] * speed;
			int nc = temp.c + dc[temp.d] * speed;
			if (nr > N) nr -= N;
			if (nc > N) nc -= N;
			if (nr < 1) nr += N;
			if (nc < 1) nc += N;

			fireball[i].r = nr;
			fireball[i].c = nc;

			Array[nr][nc].push_back(i);
		}

		// 겹치는 곳 검사
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (Array[i][j].size() > 1)
				{
					int totalm = 0, totals = 0, ecnt = 0, ocnt = 0;
					for (int k = 0; k < Array[i][j].size(); k++)
					{
						totalm += fireball[Array[i][j][k]].m;
						totals += fireball[Array[i][j][k]].s;
						fireball[Array[i][j][k]].dead = 1;
						if (fireball[Array[i][j][k]].d % 2) ocnt++;
						else ecnt++;
					}

					int nm = totalm / 5;
					int ns = totals / Array[i][j].size();
					int tsize = Array[i][j].size();
					Array[i][j].clear();
					if (nm == 0) continue; // 질량이 0인 파이어볼들은 소멸

					//모두 짝수거나 홀수
					if (ecnt == tsize || ocnt == tsize)
					{
						for (int k = 0; k < 4; k++)
						{
							fireball.push_back({ i, j, nm, ns, table1[k] });
							Array[i][j].push_back(fcnt);
							fcnt++;
						}
					}
					else
					{
						for (int k = 0; k < 4; k++)
						{
							fireball.push_back({ i, j, nm, ns, table2[k] });
							Array[i][j].push_back(fcnt);
							fcnt++;
						}
					}
				}
			}
		}
	}

	int sum = 0;
	for (auto it : fireball)
		if (it.dead == 0) sum += it.m;

	cout << sum;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
