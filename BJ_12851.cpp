#include <iostream>
#include <queue>
using namespace std;

//아이디어 문제. 큐에 넣을 때 비짓 체크를 하면 N = 1, K = 4의 경우
//+1 * 2, *2 * 2 모두 답이 되지만 이미 체크가 되어있기에 오답이 발생. 따라서 큐에서 뺄 때 해준다! 

int N, K;
int dx[] = { 2, 1, -1 };
int visit[100001];
int cnt, ans = 987654321;

struct point
{
	int X;
	int step;
};

queue<point> q;

void BFS()
{
	q.push({ N, 0 });
	visit[N] = true;

	while (!q.empty())
	{
		int X = q.front().X;
		int step = q.front().step;
		q.pop();

		if (X == K)
		{
			if (step < ans)
			{
				ans = step;
				cnt = 1;
			}
			else if (step == ans)
				cnt++;

			continue;
		}
		visit[X] = true;

		for (int i = 0; i < 3; i++)
		{
			int nx;
			if (i == 0) nx = X * 2;
			else nx = X + dx[i];

			if (nx > -1 && nx < 100001)
			{
				if (visit[nx] == false)
					q.push({ nx, step + 1 });
			}
		}
	}
}

int main()
{
	cin >> N >> K;
	BFS();
	cout << ans << endl << cnt;
	return 0;
}
