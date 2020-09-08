//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define endl "\n"
//
////�������� BFS �������Ҷ��� ������ �迭�� �̿�����
//
//int N;
//int Array[11][11];
//int visit[11][11][101][3]; //��ǥ, number, ��
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
//		//�� ��ü
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
//		//����Ʈ
//		if (H == 0)
//		{
//			for (int i = 0; i < 8; i++)
//			{
//				int nx = X + dx_n[i];
//				int ny = Y + dy_n[i];
//
//				if (nx > -1 && nx < N && ny > -1 && ny < N)
//				{
//					if (Array[ny][nx] == n + 1 && visit[ny][nx][n + 1][H] == false) //���� ĭ�� ������ ������ ���
//					{
//						visit[ny][nx][n + 1][H] = true;
//						q.push({ nx, ny, n + 1, step + 1, H });
//					}
//					if (visit[ny][nx][n][H] == false) //���� ĭ�� ���ϴ� ���ڰ� �ƴѰ��, �̵��� �ϴµ� n������ ��ǥ�� �ٸ��Ƿ� �湮�� ���ؼ� �ȉ�.
//					{
//						visit[ny][nx][n][H] = true;
//						q.push({ nx, ny, n, step + 1, H });
//					}
//				}
//			}
//		}
//		else if (H == 1) //���
//		{
//			for (int i = 0; i < 4; i++)
//			{
//				for (int j = 0;; j++) //�������� ��� ���Ƿ�
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
//		else //��
//		{
//			for (int i = 0; i < 4; i++)
//			{
//				for (int j = 0;; j++) //�������� ��� ���Ƿ�
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