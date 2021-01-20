#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int R, S;
char Array[3001][3001];

struct point
{
	int x;
	int y;
};

vector<point> meteor;

void input()
{
	cin >> R >> S;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < S; j++)
		{
			cin >> Array[i][j];
			if (Array[i][j] == 'X')
				meteor.push_back({ j, i });
		}
	}
}

void solve()
{
	int mcnt = (int)1e9;
	for (auto miter : meteor)
	{
		int x = miter.x;
		int y = miter.y;
		int tcnt = 0;
		for (int i = y + 1; i < R; i++)
		{
			if (Array[i][x] == '#')
				break;
			else if (Array[i][x] == 'X') //위아래 붙어있는 경우 위에는 굳이 계산할 필요가 없음. 이런 조건 없으면 시간초과
			{
				tcnt = (int)1e9;
				break;
			}

			tcnt++;
		}
		if (mcnt > tcnt) mcnt = tcnt;
	}

    //밑에서부터 땡겨주어야 누락되는 곳이 안생긴다
	for (int i = meteor.size() - 1; i >= 0; i--)
	{
		Array[meteor[i].y][meteor[i].x] = '.';
		Array[meteor[i].y + mcnt][meteor[i].x] = 'X';
	}

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < S; j++)
			cout << Array[i][j];
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
