#include <iostream>
#include <deque>
#include <string>
using namespace std;

// 21.02.03 0-1 BFS 연습
// 기본 BFS로는 풀 수 없다. 더 최단거리가 있을 때 해당 노드가 큐에 들어간다. 그러면 그 노드부터 다시 길을 찾는 연산이
// 반복되고 중복이 수도 없이 많이 생겨 메모리 초과가 발생한다.
// 0-1 BFS는 시간복잡도 O(V+E)로 매우 빠른 최단거리 알고리즘이다. 다익스트라는 O(ElogV)
// 가중치가 0인(=같은 레벨)의 노드는 앞에 넣고, 1인 노드는 뒤에 넣기 위해 덱을 사용한다(정렬한다 생각하면 된다)
// 전체 흐름은 dist 배열 INF -> dist[start] 시작 -> BFS와 같은 형태인데 거리가 더 짧아 갱신이 가능할 경우 갱신
// 갱신하면서 해당 가중치가 0이면 push_front, 1이면 push_back

#define INF (int)1e9

int N, M;
int Array[101][101];
int dist[101][101];
int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };

struct point
{
	int x;
	int y;
	int step;
};

string s;
deque<point> dq;

void input()
{
	cin >> M >> N;
	for (int i = 1; i < N + 1; i++)
	{
		cin >> s;
		for (int j = 1; j < M + 1; j++)
		{
			Array[i][j] = s[j - 1] - '0';
		}
	}
}

int BFS01()
{
	dq.push_back({ 1, 1, 0 });
	dist[1][1] = 0;

	while (!dq.empty())
	{
		int X = dq.front().x;
		int Y = dq.front().y;
		int step = dq.front().step;
		dq.pop_front();

		if (X == M && Y == N)
			return step;

		for (int i = 0; i < 4; i++)
		{
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (nx > 0 && nx <= M && ny > 0 && ny <= N)
			{
				int w;
				if (Array[ny][nx] == 1)
					w = 1;
				else
					w = 0;

				if (dist[Y][X] + w < dist[ny][nx])
				{
					dist[ny][nx] = dist[Y][X] + w;
					if (w == 0)
						dq.push_front({ nx, ny, step });
					else
						dq.push_back({ nx, ny, step + 1 });
				}
			}
		}
	}

	return -1;
}

void solve()
{
	for (int i = 1; i < N + 1; i++)
		for (int j = 1; j < M + 1; j++)
			dist[i][j] = INF;
	int ans = BFS01();
	cout << ans;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
