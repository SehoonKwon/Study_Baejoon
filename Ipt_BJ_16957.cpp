//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define endl "\n"
//
////칸 하나가 모든 칸을 방문하는 시간 O(NM), * 모든 칸이 그렇게 움직인다면 O(N^2M^2) -> 시간초과
////어느 칸이 최종목적지가 이미 기록했다면 메모리제이션을 통해 시간 절약 가능 = 경로 압축
////아래는 내가 힌트를 받고 짜서 통과한 코드, 2번째꺼는 시간이 더 빠른 경로압축(아마 각 지점마다 다시 return 해가면서 최종목적지로 바꿔주는걸듯?)
////확인해보니 단지 큐에 넣어 돌리냐 아니냐의 속도 차이 같음
//
//int N, M;
//int Array[501][501];
//int visit[501][501];
//int Ball[300001];
//int dx[] = { -1, -1, -1, 0, 0, 0, 1, 1, 1 };
//int dy[] = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };
//
//struct point
//{
//	int x;
//	int y;
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
//int BFS(int x, int y)
//{
//	queue<point> q;
//	q.push({ x, y });
//
//	int val;
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		val = Array[Y][X];
//		q.pop();
//
//		if (visit[Y][X] != 0)
//			return visit[Y][X];
//
//		int next_x = -1, next_y = -1, MIN = Array[Y][X];
//		for (int i = 0; i < 9; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < M && ny > -1 && ny < N)
//			{
//				if (MIN > Array[ny][nx])
//				{
//					MIN = Array[ny][nx];
//					next_x = nx;
//					next_y = ny;
//				}
//			}
//		}
//
//		if (next_x == -1 && next_y == -1) continue;
//		q.push({ next_x, next_y });
//	}
//
//	return val;
//}
//
//void solve()
//{
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			int res = BFS(j, i);
//			visit[i][j] = res;
//			Ball[res]++;
//		}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//			cout << Ball[Array[i][j]] << " ";
//		cout << endl;
//	}
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//
////BJ님 소스. 더 완벽한 경로 압축 알고리즘
//
//int a[500][500];
//int ans[500 * 500];
//int dx[] = { 0,0,1,-1,1,1,-1,-1 };
//int dy[] = { 1,-1,0,0,1,-1,1,-1 };
//int parent[500 * 500];
//int go(int x) {
//	if (parent[x] == x) {
//		return x;
//	}
//	else {
//		return parent[x] = go(parent[x]);
//	}
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i<n; i++) {
//		for (int j = 0; j<m; j++) {
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i<n; i++) {
//		for (int j = 0; j<m; j++) {
//			int x = i;
//			int y = j;
//			for (int k = 0; k<8; k++) {
//				int nx = i + dx[k];
//				int ny = j + dy[k];
//				if (0 <= nx && nx < n && 0 <= ny && ny < m)
//					if (a[nx][ny] < a[x][y]) {
//						x = nx;
//						y = ny;
//					}
//			}
//			parent[i*m + j] = x*m + y;
//		}
//	}
//	for (int i = 0; i<n; i++) {
//		for (int j = 0; j<m; j++) {
//			ans[go(i*m + j)] += 1;
//		}
//	}
//	for (int i = 0; i<n; i++) {
//		for (int j = 0; j<m; j++) {
//			cout << ans[i*m + j] << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;
//}