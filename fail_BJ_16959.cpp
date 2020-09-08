//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define endl "\n"
//
////여러개를 BFS 돌려야할때는 고차원 배열을 이용하자
//
//int N;
//int Array[11][11];
//int visit[11][11][101][3]; //좌표, number, 말
//int dx_n[] = { -2, -2, -1, -1, 1, 1, 2, 2 };
//int dy_n[] = { -1, 1, -2, 2, -2, 2, -1, 1 };
//int dx_b[] = { -1, -1, 1, 1 };
//int dy_b[] = { -1, 1, -1, 1 };
//int dx_l[] = { 0, 0, -1, 1 };
//int dy_l[] = { 1,-1, 0, 0 };
//int ans = 987654321;
//
//struct point
//{
//	int x;
//	int y;
//	int num;
//	int step;
//	int hores;
//};
//
//queue<point> q;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == 1)
//			{
//				for (int k = 0; k < 3; k++)
//				{
//					visit[j][i][1][k] = true;
//					q.push({ j, i, 1, 0, k });
//				}
//			}
//		}
//}
//
//void BFS()
//{
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int n = q.front().num;
//		int step = q.front().step;
//		int H = q.front().hores;
//		q.pop();
//
//		if (n == N*N)
//		{
//			if (step < ans) ans = step;
//			continue;
//		}
//
//		//말 교체
//		for (int i = 0; i < 3; i++)
//		{
//			if (i == H) continue;
//			if (visit[Y][X][n][i] == false)
//			{
//				visit[Y][X][n][i] = true;
//				q.push({ X, Y, n, step + 1, i });
//			}
//		}
//
//		//나이트
//		if (H == 0)
//		{
//			for (int i = 0; i < 8; i++)
//			{
//				int nx = X + dx_n[i];
//				int ny = Y + dy_n[i];
//
//				if (nx > -1 && nx < N && ny > -1 && ny < N)
//				{
//					if (Array[ny][nx] == n + 1 && visit[ny][nx][n + 1][H] == false) //다음 칸이 가려는 숫자인 경우
//					{
//						visit[ny][nx][n + 1][H] = true;
//						q.push({ nx, ny, n + 1, step + 1, H });
//					}
//					if (visit[ny][nx][n][H] == false) //다음 칸이 원하는 숫자가 아닌경우, 이동은 하는데 n에따라 좌표가 다르므로 방문을 안해선 안됌.
//					{
//						visit[ny][nx][n][H] = true;
//						q.push({ nx, ny, n, step + 1, H });
//					}
//				}
//			}
//		}
//		else if (H == 1) //비숍
//		{
//			for (int i = 0; i < 4; i++)
//			{
//				for (int j = 0;; j++) //방향으로 모두 가므로
//				{
//					int nx = X + dx_b[i] * j;
//					int ny = Y + dy_b[i] * j;
//
//					if (nx > -1 && nx < N && ny > -1 && ny < N)
//					{
//						if (Array[ny][nx] == n + 1 && visit[ny][nx][n + 1][H] == false)
//						{
//							visit[ny][nx][n + 1][H] = true;
//							q.push({ nx, ny, n + 1, step + 1, H });
//						}
//
//						if (visit[ny][nx][n][H] == false)
//						{
//							visit[ny][nx][n][H] = true;
//							q.push({ nx, ny, n, step + 1, H });
//						}
//					}
//					else
//						break;
//				}
//			}
//		}
//		else //룩
//		{
//			for (int i = 0; i < 4; i++)
//			{
//				for (int j = 0;; j++) //방향으로 모두 가므로
//				{
//					int nx = X + dx_l[i] * j;
//					int ny = Y + dy_l[i] * j;
//
//					if (nx > -1 && nx < N && ny > -1 && ny < N)
//					{
//						if (Array[ny][nx] == n + 1 && visit[ny][nx][n + 1][H] == false)
//						{
//							visit[ny][nx][n + 1][H] = true;
//							q.push({ nx, ny, n + 1, step + 1, H });
//						}
//
//						if (visit[ny][nx][n][H] == false)
//						{
//							visit[ny][nx][n][H] = true;
//							q.push({ nx, ny, n, step + 1, H });
//						}
//					}
//					else
//						break;
//				}
//			}
//		}
//	}
//}
//
//void solve()
//{
//	BFS();
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