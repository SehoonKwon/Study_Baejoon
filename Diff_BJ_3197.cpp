//#include <iostream>
//#include <queue>
//using namespace std;
//
////ice�극��ũ�� queue�� ���� �ش� ��¥�� ��� ���ϸ� ó���غ���
////ó���� �� ��ġ�� �� ť�� �ְ� ������ ���� ��� ���̸� �׳� ����, ������ ������ ť�� �־��ֱ�(���� �� ť �۾��� ���)
////�̷��� �ص� �ð��ʰ���. memset�� ���� visit�� �ʱ�ȭ�ϴ� ��� X, ť�� �̿�����(���� ���� �۾��� ����� ���� ã������ ã���� �� ť�� �ִ¹��)
//
//int R, C;
//char Array[1501][1501];
//int visit[1501][1501];
//int Sx = -1, Sy = -1, Dx, Dy;
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int flag;
//int T;
//
//struct point
//{
//	int x;
//	int y;
//};
//
//queue<point> iceQ, iceNQ, SwanQ, SwanNQ;
//
//void input()
//{
//	cin >> R >> C;
//	for (int i = 0; i < R; i++)
//		for (int j = 0; j < C; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == 'L')
//			{
//				if (Sx == -1 && Sy == -1)
//				{
//					Sx = j;
//					Sy = i;
//				}
//				else
//				{
//					Dx = j;
//					Dy = i;
//				}
//			}
//
//			if (Array[i][j] == '.' || Array[i][j] == 'L')
//				iceQ.push({ j, i })
//		}
//}
//
//void BFS()
//{
//	while (!SwanQ.empty())
//	{
//		int X = SwanQ.front().x;
//		int Y = SwanQ.front().y;
//		SwanQ.pop();
//
//		if (X == Dx && Y == Dy)
//		{
//			flag = 1;
//			return;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < C && ny > -1 && ny < R)
//			{
//				if (visit[ny][nx] == false)
//				{
//					visit[ny][nx] = true;
//					if (Array[ny][nx] == 'X') SwanNQ.push({ nx, ny });
//					else SwanQ.push({ nx, ny });
//				}
//			}
//		}
//	}
//
//	return;
//}
//
//void icebreak()
//{
//	while (!iceQ.empty())
//	{
//		int X = iceQ.front().x;
//		int Y = iceQ.front().y;
//		iceQ.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < C && ny > -1 && ny < R)
//			{
//				if (Array[ny][nx] == 'X') //�湮 ǥ�� �ʿ����. ���� �ߴٰ� visit �ʱ�ȭ �ϴ��� �ð��ʰ��ɸ�.
//				{
//					Array[ny][nx] = '.';
//					iceNQ.push({ nx, ny });
//				}
//			}
//		}
//	}
//}
//
//void solve()
//{
//	SwanQ.push({ Sx, Sy });
//
//	while (1)
//	{
//		BFS();
//		if (flag) break;
//		icebreak();
//		iceQ = iceNQ;
//		SwanQ = SwanNQ;
//		while (!iceNQ.empty()) iceNQ.pop();
//		while (!SwanNQ.empty()) SwanNQ.pop();
//		T++;
//	}
//
//	cout << T << endl;
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