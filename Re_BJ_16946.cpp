//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//#define endl "\n"
//
//int N, M;
//int Array[1001][1001];
//int visit[1001][1001]; //영역 나눌 때 사용
//int val[1001][1001]; //영역 나눈 후 그룹 값
//int A[100001]; //지역 변수로 1001사이즈 까지했는데 런타임에러 나오는걸 봐서 그룹 수가 1000개가 넘는 경우가 있는듯
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//
//struct point
//{
//	int x;
//	int y;
//	int group;
//	int size;
//};
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			scanf("%1d", &Array[i][j]);
//}
//
//void DFS(int x, int y, int c)
//{
//	if (visit[y][x] != false) return;
//	visit[y][x] = c;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx > -1 && nx < M && ny > -1 && ny < N)
//			if (visit[ny][nx] == false && Array[ny][nx] == 0)
//				DFS(nx, ny, c);
//	}
//}
//
//void Divide()
//{
//	int cnt = 1;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			if (Array[i][j] == 0 && visit[i][j] == false)
//			{
//				DFS(j, i, cnt);
//				cnt++;
//			}
//		}
//}
//
//void calcul()
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (visit[i][j] != 0)
//			{
//				A[visit[i][j]]++;
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (visit[i][j] != 0)
//			{
//				val[i][j] = A[visit[i][j]];
//			}
//		}
//	}
//}
//
//void solve()
//{
//	//영역 나누기
//	Divide();
//
//	//영역 크기 구하기
//	calcul();
//
//	//벽들에 대해서 상하좌우 그룹과 닿았는지 검사 후 출력
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (Array[i][j] == 0) cout << 0;
//			else
//			{
//				int cnt = 1;
//				vector<point> v; // 중복 그룹 제거용
//				for (int k = 0; k < 4; k++)
//				{
//					int nj = j + dx[k];
//					int ni = i + dy[k];
//
//					if (nj > -1 && nj < M && ni > -1 && ni < N)
//					{
//						if (visit[ni][nj] != false)
//						{
//							if (v.size() == 0) v.push_back({ nj, ni, visit[ni][nj], val[ni][nj] });
//							else
//							{
//								int flag = 0;
//								for (int l = 0; l < v.size(); l++)
//									if (v[l].group == visit[ni][nj])
//									{
//										flag = 1;
//										break;
//									}
//								if (flag == 0) v.push_back({ nj, ni, visit[ni][nj], val[ni][nj] });
//							}
//						}
//					}
//				}
//
//				for (int k = 0; k < v.size(); k++)
//					cnt += v[k].size;
//
//				cout << cnt % 10;
//
//			}
//		}
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