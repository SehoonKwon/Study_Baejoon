//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M;
//int S[101], B[101];
//int visit[101];
//
//struct point
//{
//	int idx;
//	int step;
//};
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//	{
//		int s, d;
//		cin >> s >> d;
//		S[s] = d;
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		int s, d;
//		cin >> s >> d;
//		B[s] = d;
//	}
//}
//
//int BFS()
//{
//	queue<point> q;
//	q.push({ 1, 0 });
//	visit[1] = true;
//
//	while (!q.empty())
//	{
//		int X = q.front().idx;
//		int step = q.front().step;
//		q.pop();
//
//		if (X == 100) return step;
//
//		for (int i = 1; i < 7; i++)
//		{
//			int nx = X + i;
//
//			if (nx < 101)
//			{
//				if (visit[nx] == false)
//				{
//					visit[nx] = true;
//					if (S[nx] != 0) nx = S[nx];
//					if (B[nx] != 0) nx = B[nx];
//
//					q.push({ nx, step + 1 });
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