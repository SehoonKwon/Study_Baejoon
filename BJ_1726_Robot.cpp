//#include <iostream>
//#include <queue>
//using namespace std;
//
//int W, H, K;
//int Array[201][201];
//int visit[31][201][201]; //말의 이동횟수를 구분해주어야 됌. 말이 먼저 가는데 말의 횟수를 소모시켜서 간 경우랑 구분해야 하므로
//int dx[] = { 0, 0, 1, -1, -2, -2, -1, -1, 1, 1, 2, 2 };
//int dy[] = { 1,-1, 0, 0, -1, 1, -2, 2, -2, 2, -1, 1 };
//
//struct point
//{
//	int x;
//	int y;
//	int step;
//	int k;
//};
//
//queue<point> q;
//
//void input()
//{
//	cin >> K;
//	cin >> W >> H;
//	for (int i = 0; i < H; i++)
//		for (int j = 0; j < W; j++)
//			cin >> Array[i][j];
//}
//
//int BFS()
//{
//	visit[0][0][0] = true;
//	q.push({ 0, 0, 0, 0 });
//
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int step = q.front().step;
//		int k = q.front().k;
//		q.pop();
//
//		if (k > K) continue; //혹시나를 위한 방지
//
//		if (X == W - 1 && Y == H - 1)
//			return step;
//
//		for (int i = 0; i < 12; i++)
//		{
//			if (k >= K && i > 3) break;
//
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < W && ny > -1 && ny < H)
//			{
//				if (i > 3)
//				{
//					if (visit[k + 1][ny][nx] == false && Array[ny][nx] == 0)
//					{
//						visit[k + 1][ny][nx] = true;
//						q.push({ nx, ny, step + 1, k + 1 });
//					}
//				}
//				else
//				{
//					if (visit[k][ny][nx] == false && Array[ny][nx] == 0)
//					{
//						visit[k][ny][nx] = true;
//						q.push({ nx, ny, step + 1, k });
//					}
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
//
//	cout << ans << "\n";
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}