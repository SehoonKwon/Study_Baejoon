//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N;
//int sx, sy, Dx, Dy;
//int Array[201][201];
//int visit[201][201];
//int dx[] = { -1, 1, -2, 2, -1, 1 };
//int dy[] = { -2, -2, 0, 0, 2, 2 };
//
//struct point
//{
//	int x;
//	int y;
//	int step;
//};
//
//void input()
//{
//	cin >> N;
//	cin >> sy >> sx >> Dy >> Dx;
//}
//
//int BFS()
//{
//	queue<point> q;
//	q.push({ sx, sy, 0 });
//	visit[sy][sx] = true;
//
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int step = q.front().step;
//		q.pop();
//
//		if (X == Dx && Y == Dy) return step;
//
//		for (int i = 0; i < 6; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < N && ny > -1 && ny < N)
//			{
//				if (visit[ny][nx] == false)
//				{
//					visit[ny][nx] = true;
//					q.push({ nx, ny, step + 1 });
//				}
//			}
//		}
//	}
//
//	return -1;
//}
//
//void solve()
//{
//	int ans = BFS();
//	cout << ans << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}