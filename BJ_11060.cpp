#include <iostream>
#include <queue>
using namespace std;

int N;
int Array[1001], visit[1001];
int MIN = (int)1e9;

struct point
{
	int x;
	int step;
};

int BFS()
{
	queue<point> q;
	q.push({ 1, 0 });
	visit[1] = true;

	while (!q.empty())
	{
		int X = q.front().x;
		int step = q.front().step;
		q.pop();

		if (X == N)
			return step;

		for (int i = 1; i <= Array[X]; i++)
		{
			if (X + i <= N && visit[X + i] == false)
			{
				visit[X + i] = true;
				q.push({ X + i, step + 1 });
			}
		}
	}

	return -1;
}

int main()
{
	cin >> N;
	for (int i = 1; i < N; i++)
		cin >> Array[i];

	int ans = BFS();
	cout << ans;
	return 0;
}
