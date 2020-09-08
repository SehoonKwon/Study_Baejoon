//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <vector>
//using namespace std;
//
////쉽게 해결, 오작교 문제랑 비슷한듯
//
//int N, M;
//int Array[20][20];
//int visit[20][20];
//int MAX = 0;
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//
//struct point
//{
//	int x;
//	int y;
//};
//
//vector<point> v, b;
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == 0)
//			{
//				v.push_back({ j, i });
//			}
//		}
//}
//
//int BFS(int x, int y)
//{
//	queue<point> q;
//	visit[y][x] = true;
//	q.push({ x, y });
//
//	int cnt = 1;
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < M && ny > -1 && ny < N)
//			{
//				if (Array[ny][nx] == 0) return 0; //인접한 공백이 있을 경우 고립된게 아님
//				else if (visit[ny][nx] == false && Array[ny][nx] == 2)
//				{
//					visit[ny][nx] = true;
//					cnt++;
//					q.push({ nx, ny });
//				}
//			}
//		}
//	}
//
//	return cnt;
//}
//
//void DFS(int x, int y)
//{
//	if (visit[y][x] == true) return;
//	visit[y][x] = true;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx > -1 && nx < M && ny > -1 && ny < N)
//			if (visit[ny][nx] == false && Array[ny][nx] == 2)
//				DFS(nx, ny);
//	}
//}
//
//void solve()
//{
//	//흑돌 그룹짜기
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			if (visit[i][j] == 0 && Array[i][j] == 2)
//			{
//				DFS(j, i);
//				b.push_back({ j,i });
//			}
//		}
//
//	//모든 경우의 수에서 체크해보기
//	for (int i = 0; i < v.size() - 1; i++)
//		for (int j = i + 1; j < v.size(); j++)
//		{
//			Array[v[i].y][v[i].x] = 1;
//			Array[v[j].y][v[j].x] = 1;
//
//			int cnt = 0;
//			memset(visit, 0, sizeof(visit));
//			for (int k = 0; k < b.size(); k++)
//			{
//				int X = b[k].x, Y = b[k].y;
//				cnt += BFS(X, Y);
//			}
//			if (cnt > MAX) MAX = cnt;
//
//			Array[v[i].y][v[i].x] = 0;
//			Array[v[j].y][v[j].x] = 0;
//		}
//
//	cout << MAX << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}