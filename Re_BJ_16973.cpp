//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define endl "\n"
//
////그냥 구현하면 NMHW라는 시간이 걸려서 절대불가, 끝점들만 비교한다해도 NM(H+W)라서 시간초과. 누적합의 개념을 이용하는 문제
//
//int N, M;
//int Array[1001][1001], S[1001][1001], visit[1001][1001];
//int H, W, Sx, Sy, Fx, Fy;
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
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
//	cin >> N >> M;
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < M + 1; j++)
//			cin >> Array[i][j];
//
//	cin >> H >> W >> Sy >> Sx >> Fy >> Fx;
//}
//
////더하는 부분은 2번 빼지는 부분
//int rec(int X, int Y)
//{
//	return S[Y + H - 1][X + W - 1] - S[Y + H - 1][X - 1] - S[Y - 1][X + W - 1] + S[Y - 1][X - 1];
//}
//
//int BFS()
//{
//	queue<point> q;
//	visit[Sy][Sx] = true;
//	q.push({ Sx, Sy, 0 });
//
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int step = q.front().step;
//		q.pop();
//
//		if (X == Fx && Y == Fy) return step;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > 0 && nx + W -1 <= M && ny > 0 && ny + H -1 <= N)
//			{
//				if (visit[ny][nx] == false && rec(nx, ny) == 0)
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
//	//공간의 누적합 구해놓기. 이동이 가능한지 O(1)만에 파악하기위해
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < M + 1; j++)
//			S[i][j] = S[i][j - 1] + S[i - 1][j] - S[i - 1][j - 1] + Array[i][j];
//
//	int ans = BFS();
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