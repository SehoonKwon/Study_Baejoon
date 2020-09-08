//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int N, M;
//int visit[51][51];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int flag;
//
//struct point
//{
//	int idx;
//	int val;
//};
//
//point Array[51][51];
//
//void input()
//{
//	int cnt = 1;
//
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			char X;
//			cin >> X;
//			Array[i][j].val = X;
//			Array[i][j].idx = cnt;
//			cnt++;
//		}
//}
//
//int DFS(int x, int y, int num, int px, int py)
//{
//	if (visit[y][x] == 1)
//	{
//		flag = 1;
//		return Array[y][x].idx;
//	}
//	visit[y][x] = 1;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx == px && ny == py) continue;
//
//		if (nx > -1 && nx < M && ny > -1 && ny < N && num == Array[ny][nx].val)
//		{
//			int res = DFS(nx, ny, num, x, y);
//			if (res > 0)
//			{
//				if (res == Array[y][x].idx) return -1;
//				else return res;
//			}
//		}
//	}
//
//	return 0;
//}
//
//void solve()
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			memset(visit, -1, sizeof(visit));
//			DFS(j, i, Array[i][j].val, 0, 0);
//			if (flag)
//			{
//				cout << "Yes" << endl;
//				return;
//			}
//		}
//	}
//
//	cout << "No" << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}