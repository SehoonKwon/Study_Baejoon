#include <iostream>
#include <queue>
using namespace std;

int visit[1000001];
int F, S, G, U, D;

struct point
{
	int idx;
	int step;
};

int BFS()
{
	queue<point> q;
	q.push({ S, 0 });
	visit[S] = true;

	while (!q.empty())
	{
		int X = q.front().idx;
		int step = q.front().step;
		q.pop();
		if (X == G)
			return step;

		int nx = X + U;
		if (nx <= F && visit[nx] == false)
		{
			visit[nx] = true;
			q.push({ nx, step + 1 });
		}

		nx = X - D;
		if (nx > 0 && visit[nx] == false)
		{
			visit[nx] = true;
			q.push({ nx, step + 1 });
		}
	}

	return -1;
}

int main()
{
	cin >> F >> S >> G >> U >> D;
	int ans = BFS();
	if (ans == -1) cout << "use the stairs";
	else cout << ans;
	return 0;
}
