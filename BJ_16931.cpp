//#include <iostream>
//using namespace std;
//
//#define endl "\n"
//
////인덱스를 1부터 시작하고 배열을 1칸씩 늘려주면 범위검사 코드가 필요가없음. 어차피 빈 칸이 될 것이고 0이므로
//
//int N, M;
//int block[101][101][101];
//int dx[] = { 0,0,-1,1,0,0 };
//int dy[] = { 1,-1,0,0,0,0 };
//int dz[] = { 0,0,0,0,1,-1 };
//
//void input()
//{
//	cin >> N >> M;
//	for(int i=0; i<N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			int X;
//			cin >> X;
//			for (int k = 0; k < X; k++)
//				block[k][i][j] = 1;
//		}
//}
//
//int check(int k, int i, int j)
//{
//	int cnt = 0;
//
//	for (int r = 0; r < 6; r++)
//	{
//		int nx = j + dx[r];
//		int ny = i + dy[r];
//		int nz = k + dz[r];
//
//		if (nx < 0 || nx >= M || ny < 0 || ny >= N || nz < 0 || nz >= 100)
//		{
//			cnt++;
//			continue;
//		}
//
//		if (block[nz][ny][nx] == 0) cnt++;
//	}
//
//	return cnt;
//}
//
//void solve()
//{
//	int cnt = 0;
//	for (int k = 0; k < 101; k++)
//	{
//		for (int i = 0; i < 101; i++)
//		{
//			for (int j = 0; j < 101; j++)
//			{
//				if (block[k][i][j] == 1)
//					cnt += check(k, i, j);
//			}
//		}
//	}
//
//	cout << cnt << endl;
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