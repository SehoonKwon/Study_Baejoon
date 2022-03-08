#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int dx[] = { 0, 0, -1, 1, -1, -1, 1, 1 };
int dy[] = { 1,-1, 0, 0, 1, -1, 1, -1 };
int dirtable[] = { 1, 0, 3, 2, 7, 6, 5, 4 };
int Array[20][20];

struct point
{
	int x;
	int y;
};

void input()
{
	for (int i = 1; i < 20; i++)
		for (int j = 1; j < 20; j++)
			cin >> Array[i][j];
}

bool cmp(const point& u, const point& v)
{
	if (u.x < v.x) return true;
	else if (u.x == v.x)
	{
		if (u.y < v.y) return true;
		else return false;
	}
	else return false;
}

void solve()
{
	vector<point> v;

	int answer = 0;
	int cnt = 0, k = 0;
	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			if (Array[i][j] == 0) continue;

			for (int dir = 0; dir < 8; dir++)
			{
				cnt = 1;
				int ndir = dirtable[dir];

				int px = j + dx[ndir];
				int py = i + dy[ndir];

				if (px > 0 && px < 20 && py > 0 && py < 20)
					if (Array[py][px] == Array[i][j]) continue;

				for (int k = 1; k < 5; k++)
				{
					int nx = j + dx[dir] * k;
					int ny = i + dy[dir] * k;

					if (nx > 0 && nx < 20 && ny > 0 && ny < 20)
					{
						if (Array[ny][nx] == Array[i][j]) cnt++;
						else break;
					}

					if (cnt == 5)
					{
						nx = j + dx[dir] * 5;
						ny = i + dy[dir] * 5;

						int flag = 0;
						if (nx > 0 && nx < 20 && ny > 0 && ny < 20)
						{
							if (Array[ny][nx] == Array[i][j])
								flag = 1;
						}

						if (flag) continue;
						for (int r = 0; r < 5; r++)
						{
							nx = j + dx[dir] * r;
							ny = i + dy[dir] * r;

							v.push_back({ nx, ny });
						}
						sort(v.begin(), v.end(), cmp);
						cout << Array[i][j] << endl << v[0].y << " " << v[0].x;
						return;
					}
				}

			}
		}
	}

	cout << 0;
}

int main()
{
	input();
	solve();
	return 0;
}