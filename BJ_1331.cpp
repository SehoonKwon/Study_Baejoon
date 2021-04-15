#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Array[7][7];
int visit[7][7];
int dx[] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int dy[] = { -1, 1, -2, 2, -2, 2, -1, 1 };
vector<pair<int, int>> v;

void input()
{
	string s;
	for (int i = 0; i < 36; i++)
	{
		int x, y;
		cin >> s;
		x = s[0] - 'A' + 1;
		y = s[1] - '0';
		v.push_back({ y, x });
	}
}

void solve()
{
	int Y = v[0].first;
	int X = v[0].second;
	v.push_back({ Y, X });

	int flag = 0;
	for (int i = 1; i < v.size(); i++)
	{
		int nx = v[i].second;
		int ny = v[i].first;

		flag = 0;
		for (int j = 0; j < 8; j++)
		{
			int tx = X + dx[j];
			int ty = Y + dy[j];

			if (tx > 0 && tx < 7 && ty > 0 && ty < 7)
			{
				if (tx == nx && ty == ny && visit[ny][nx] == false)
				{
					flag = 1;
					X = tx;
					Y = ty;
					visit[Y][X] = true;
					break;
				}
			}
		}
		if (!flag)
			break;
	}

	if (flag) cout << "Valid";
	else cout << "Invalid";
}

int main()
{
	input();
	solve();
	return 0;
}
