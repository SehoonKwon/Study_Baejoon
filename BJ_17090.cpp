//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//int N, M;
//char Array[501][501];
//int visit[501][501];
//
//struct point
//{
//	int x;
//	int y;
//	char c;
//};
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> Array[i][j];
//}
//
//int DFS(int x, int y)
//{
//	if (visit[y][x] != 0) return visit[y][x];
//	visit[y][x] = -1;
//
//	char C = Array[y][x];
//	int nx = x, ny = y;
//
//	if (C == 'U')
//		ny--;
//	else if (C == 'D')
//		ny++;
//	else if (C == 'L')
//		nx--;
//	else
//		nx++;
//
//	//≈ª√‚
//	if (nx < 0 || nx >= M || ny < 0 || ny >= N)
//	{
//		visit[y][x] = 1;
//		return 1;
//	}
//
//	if (visit[ny][nx] != false)
//	{
//		visit[y][x] = visit[ny][nx];
//		return visit[ny][nx];
//	}
//
//	int res = DFS(nx, ny);
//	visit[y][x] = res;
//	return res;
//}
//
//void solve()
//{
//	int ans = 0;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			if(visit[i][j] == false)
//				DFS(j, i);
//		}
//
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			if (visit[i][j] == 1) ans++;
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	input();
//	solve();
//	return 0;
//}