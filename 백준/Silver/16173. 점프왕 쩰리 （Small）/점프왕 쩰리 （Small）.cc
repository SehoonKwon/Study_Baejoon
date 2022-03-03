#include <iostream>
#include <queue>
using namespace std;

int N;
int Array[65][65];
int visit[65][65];
int dx[] = { 0, 1 };
int dy[] = { 1, 0 };

struct point
{
	int x;
	int y;
};

queue<point> q;

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> Array[i][j];
}

void solve()
{
	q.push({ 0, 0 });
	visit[0][0] = true;
	while (!q.empty())
	{
		int X = q.front().x;
		int Y = q.front().y;
		q.pop();

		int k = Array[Y][X];
		if (k == -1)
		{
			cout << "HaruHaru";
			return;
		}

		for (int i = 0; i < 2; i++)
		{
			int nx = X + dx[i] * k;
			int ny = Y + dy[i] * k;

			if (nx > -1 && nx < N && ny > -1 && ny < N && visit[ny][nx] == false)
			{
				visit[ny][nx] = true;
				q.push({ nx, ny });
			}
		}
	}

	cout << "Hing";
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	solve();
	return 0;
}