//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////이렇게 풀면 시간초과 (턴 -> 플레이어 정하기 -> BFS하기 -> 플레이어2 -> BFS -> ... 턴2 -> ...)
////턴의 수 (N+M) + 플레이어 수 (P) * BFS(N*M) = > 딱봐도 1000^3이 넘어가서 불가능
////BFS를 한번에 해보는쪽으로 -> 턴을 나누지 말고 한번에 BFS로 하고 step을 기준으로 먼저방문했냐를 따지기
//
//int N, M, P;
//char Array[1001][1001];
//int visit[1001][1001];
//int S[10];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int dot_cnt;
//
//struct point
//{
//	int x;
//	int y;
//	int step;
//	char C;
//};
//
//struct point2
//{
//	int x;
//	int y;
//	int num;
//};
//
//vector<point2> v;
//queue<point> q;
//
//void input()
//{
//	cin >> N >> M >> P;
//	for (int i = 1; i < P + 1; i++)
//		cin >> S[i];
//	
//	for(int i=0; i<N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == '.')
//				dot_cnt++;
//			else if (Array[i][j] >= '0' && Array[i][j] <= '9')
//			{
//				v.push_back({ j, i, Array[i][j] - '0' });
//				visit[i][j] = 987654321;
//			}
//		}
//}
//
//void PRT()
//{
//	int cnt[10] = { 0 };
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cnt[Array[i][j]-'0']++;
//
//	for (int i = 1; i < P + 1; i++)
//		cout << cnt[i] << " ";
//	cout << endl;
//}
//
//bool cmp(const point2& u, const point2& v)
//{
//	if (u.num < v.num) return true;
//	else return false;
//}
//
//void Qpush(int i)
//{	
//	q.push({ v[i].x, v[i].y, 0, Array[v[i].y][v[i].x] });
//}
//
//void BFS()
//{
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int step = q.front().step;
//		char C = q.front().C;
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < M && ny > -1 && ny < N)
//			{
//				if (Array[ny][nx] == '#') continue;
//				else if (Array[ny][nx] == '.')
//				{
//					Array[ny][nx] = C;
//					visit[ny][nx] = step + 1;
//					q.push({ nx, ny, step+1, C });
//					dot_cnt--;
//				}
//				else if (visit[ny][nx] != 987654321 && visit[ny][nx] > step + 1)
//				{
//					Array[ny][nx] = C;
//					visit[ny][nx] = step + 1;
//					q.push({ nx, ny, step + 1, C });
//				}
//
//			}
//		}
//
//	}
//}
//
//void calcul(int num)
//{
//	int s = S[num];
//	if (s == 1) return;
//	for(int i=0; i<N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			if (Array[i][j] - '0' == num)
//				visit[i][j] = (visit[i][j] + 1) / s;
//		}
//}
//
//void solve()
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		Qpush(i);
//		BFS();
//		
//		if (i < v.size()-1 && v[i].num == v[i + 1].num) continue;
//		calcul(v[i].num);
//	}
//	PRT();
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