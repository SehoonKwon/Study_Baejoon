//#include <iostream>
//#include <queue>
//using namespace std;
//
////ice브레이크를 queue를 통해 해당 날짜에 녹는 빙하만 처리해보기
////처음에 물 위치를 다 큐에 넣고 인접한 곳이 모두 물이면 그냥 무시, 육지를 만나면 큐에 넣어주기(다음 번 큐 작업에 사용)
////이렇게 해도 시간초과임. memset을 통해 visit을 초기화하는 방법 X, 큐를 이용하자(다음 번에 작업할 놈들을 새로 찾지말고 찾았을 때 큐에 넣는방식)
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
//				if (Array[ny][nx] == 'X') //방문 표시 필요없음. 괜히 했다가 visit 초기화 하느라 시간초과걸림.
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