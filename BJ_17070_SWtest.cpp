//#include <iostream>
//#include <queue>
//using namespace std;
//
////BFS말고 그냥 DFS하듯 재귀로 푸는게 속도 더 빠름
//
//int N;
//int Array[17][17];
//int dx[3][3] = { {1, -100, 1}, {-100, 0, 1}, {1, 0, 1} };
//int dy[3][3] = { {0, -100, 1}, {-100, 1, 1}, {0, 1, 1} };
//
//struct point
//{
//	int x; // x, y는 끝점
//	int y;
//	int state;
//};
//
//void input()
//{
//	cin >> N;
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < N + 1; j++)
//			cin >> Array[i][j];
//}
//
//int BFS()
//{
//	queue<point> q;
//	q.push({ 2, 1, 0 });
//
//	int ans = 0;
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int S = q.front().state;
//		q.pop();
//
//		if (X == N && Y == N)
//		{
//			ans++;
//			continue;
//		}
//
//		for (int i = 0; i < 3; i++)
//		{
//			int nx = X + dx[S][i];
//			int ny = Y + dy[S][i];
//
//			if (nx > 0 && nx <= N && ny > 0 && ny <= N)
//			{
//				if (i == 2)
//				{
//					if(Array[ny][nx] != 1 && Array[ny-1][nx] != 1 && Array[ny][nx-1] != 1)
//						q.push({ nx, ny, i });
//				}
//				else
//				{
//					if (Array[ny][nx] != 1)
//					{
//						q.push({ nx, ny, i });
//					}
//				}
//			}
//		}
//	}
//
//	return ans;
//}
//
//void solve()
//{
//	int ans = BFS();
//
//	cout << ans;
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}