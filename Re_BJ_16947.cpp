//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define endl "\n"
//
////싸이클 구현 문제니까 구현 잘 외워두기
//
//int N;
//int Array[3001][3001];
//int visit[3001];
//int dist[3001];
//
//struct point
//{
//	int st;
//	int step;
//};
//
//queue<point> q;
//
//void input()
//{
//	cin >> N;
//
//	int A, B;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A >> B;
//		Array[A-1][B-1] = 1;
//		Array[B-1][A-1] = 1;
//	}
//}
//
//int DFS(int x, int p) //x는 정점, p는 바로 이전의 정점(어느 정점에서 x 정점으로 왔느냐)
//{
//	// -2 : 싸이클 찾았지만 싸이클에 포함X, -1 : 못찾음 0~N-1 : 싸이클 찾았고 싸이클의 시작 인덱스
//	if (visit[x] == 1) return x; // 1은 방문했는데 싸이클이 아닌경우, 2는 방문+싸이클, 방문했는데 이미 방문한 곳(1)이면 싸이클이라는 것이므로 인덱스 리턴
//	visit[x] = 1;
//
//	for (int i = 0; i < N; i++)
//	{
//		if (Array[x][i] == 0) continue; //이어져 있는 정점이 아니면 무시
//		if (i == p) continue; //바로 전 출발 정점으로 다시 돌아가버리면 안되므로 p를 이용
//		int res = DFS(i, x);
//		if (res == -2) return -2;
//		else if (res >= 0)
//		{
//			visit[x] = 2;
//			if (x == res) return -2; //리턴 값이 시작점이면 더 이상은 싸이클에 포함이 되지 않으므로 -2 리턴
//			else return res;
//		}
//	}
//
//	return -1;
//}
//
//void BFS()
//{
//	while (!q.empty())
//	{
//		int X = q.front().st;
//		int step = q.front().step;
//		q.pop();
//
//		for (int i = 0; i < N; i++)
//		{
//			if (i == X) continue;
//			if (Array[X][i] == 1 && visit[i] < 2)
//			{
//				visit[i] = 3; //싸이클 표시가 아니라 BFS에서의 방문표시용
//				dist[i] = step + 1;
//				q.push({ i, step + 1 });
//			}
//		}
//	}
//}
//
//void solve()
//{
//	//싸이클 찾기
//	DFS(0, -1);
//
//	for (int i = 0; i < N; i++)
//		if (visit[i] == 2)
//			q.push({ i, 0 });
//
//	BFS();
//
//	for (int i = 0; i < N; i++)
//		cout << dist[i] << " ";
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