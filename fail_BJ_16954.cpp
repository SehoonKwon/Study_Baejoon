//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//using namespace std;
//
////벽을 하면서 이동시키지 말고 미리 세팅해놓기
//
//char Array[8][8][8];
//int dx[] = { -1, -1, -1, 0, 0, 0, 1, 1, 1 };
//int dy[] = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };
//
//struct point
//{
//	int x;
//	int y;
//	int step;
//};
//
//vector<point> w;
//
//void input()
//{
//	for (int k = 0; k < 8; k++)
//	{
//		for (int i = 0; i < 8; i++)
//			for (int j = 0; j < 8; j++)
//			{
//				if (k == 0)
//				{
//					cin >> Array[0][i][j];
//					if (Array[0][i][j] == '#')
//						w.push_back({ j, i });
//				}
//				else
//					Array[k][i][j] = '.';
//			}
//
//	}
//}
//
//void wall(int t)
//{
//	if (w.size() == 0) return;
//
//	for (int i = 0; i < w.size(); i++)
//	{
//		if (w[i].y == 7)
//		{
//			w.erase(w.begin() + i);
//			i--;
//			continue;
//		}
//
//		w[i].y++;
//		Array[t][w[i].y][w[i].x] = '#';
//	}
//}
//
//int BFS()
//{
//	queue<point> q;
//	q.push({ 0, 7 });
//
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int step = q.front().step;
//		q.pop();
//		
//		if (X == 7 && Y == 0) return 1;
//
//		for (int i = 0; i < 9; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//
//			if (nx > -1 && nx < 8 && ny > -1 && ny < 8)
//			{
//				if (step < 7 && Array[step][ny][nx] == '.' && Array[step + 1][ny][nx] == '.')
//					q.push({ nx, ny, step + 1 });
//				else if (step == 7)
//					return 1;
//			}
//		}
//	}
//
//	return 0;
//}
//
//void solve()
//{
//	for (int i = 1; i < 8; i++)
//		wall(i);
//
//	int ans = BFS();
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}