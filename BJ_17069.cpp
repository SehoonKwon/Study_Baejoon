//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//int N;
//int Array[33][33];
//long long int DP[3][33][33];
//int dx[3][3] = { {1, -100, 1}, {-100, 0, 1}, {1, 0, 1} };
//int dy[3][3] = { {0, -100, 1}, {-100, 1, 1}, {0, 1, 1} };
//
//void input()
//{
//	cin >> N;
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < N + 1; j++)
//			cin >> Array[i][j];
//}
//
//long long int DFS(int x, int y, int s)
//{
//	if (x == N && y == N) return 1;
//
//	if (DP[s][y][x] != -1) return DP[s][y][x];
//
//	long long ans = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		int nx = x + dx[s][i];
//		int ny = y + dy[s][i];
//
//		if (nx > 0 && nx <= N && ny > 0 && ny <= N)
//		{
//
//			if (i == 2)
//			{
//				if (Array[ny][nx] != 1 && Array[ny - 1][nx] != 1 && Array[ny][nx - 1] != 1)
//					ans += DFS(nx, ny, i);
//			}
//			else
//			{
//				if (Array[ny][nx] != 1)
//					ans += DFS(nx, ny, i);
//			}
//		}
//	}
//
//	DP[s][y][x] = ans;
//	return ans;
//}
//
//void solve()
//{
//	memset(DP, -1, sizeof(DP));
//	long long int ans = DFS(2, 1, 0);
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}