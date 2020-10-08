#include <iostream>
#include <queue>
#include <vector>
using namespace std;

//탐색 방식이 매우 중요. 그냥 q로 탐색 후에 해당되는 모든 모래성을 nq에 넣고 q = nq 방식으로 탐색하면 TLE
//한번에 사라지지 않는 것은 다른 모래성이 사라져야 사라질 수 있으므로 모래성이 사라지지는 좌표를 기준으로 nq에 넣을 것들 탐색하기

int N, M;
char Array[1001][1001];
int visit[1001][1001];
int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

struct point
{
	int x;
	int y;
	int cnt;
};

queue<point> q, nq;
vector<point> v;

void input()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> Array[i][j];
			if (Array[i][j] > '0' && Array[i][j] < '9') //9는 평생 안지워지므로 넣을 필요 없음
				q.push({ j, i, Array[i][j] - '0' });
		}
	}
}

void q2nq()
{
	while (!q.empty())
	{
		int x = q.front().x;
		int y = q.front().y;
		int cnt = q.front().cnt;
		q.pop();

		int sand = 0, nine_cnt = 0;
		for (int i = 0; i < 8; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (Array[ny][nx] == '.') sand++;
			else if (Array[ny][nx] == '9') nine_cnt++;
		}

		if (cnt > 8 - nine_cnt)
		{
			Array[y][x] = '9';
			continue;
		}

		if (sand >= cnt)
		{
			v.push_back({ x, y });
			nq.push({ x, y });
		}
		else visit[y][x] = false;
	}
}

void nq2q()
{
	while(!nq.empty())
	{
		int x = nq.front().x;
		int y = nq.front().y;
		nq.pop();

		for (int i = 0; i < 8; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx > -1 && nx < M && ny > -1 && ny < N)
				if (visit[ny][nx] == false && Array[ny][nx] > '0' && Array[ny][nx] < '9')
				{
					visit[ny][nx] = true;
					q.push({ nx, ny, Array[ny][nx] - '0' });
				}
		}
	}
}

void solve()
{
	int T = 0;
	while (1)
	{
		q2nq();
		nq2q();
		if (v.size() == 0) break;
		for (int i = 0; i < v.size(); i++)
			Array[v[i].y][v[i].x] = '.';
		v.clear();
		T++;
	}

	cout << T;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
