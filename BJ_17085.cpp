//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////처음에 틀린이유 : 크기가 13까지라고 생각했지만 더 큰 십자가가 있을 수 있음(문제 설명만 13까지 나온것뿐)
////따라서 최대 가로 15 세로 14 크기의 십자가까지 고려해서 하기
//
//int N, M;
//char Array[16][16];
//int table[] = { 1, 5, 9, 13, 17, 21, 25, 29 };
//int ans;
//
//struct point
//{
//	int x;
//	int y;
//};
//
//vector<point> v;
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == '#') v.push_back({ j, i });
//		}
//}
//
//int check(int x, int y, int c)
//{
//	for (int i = y - c; i <= y + c; i++)
//	{
//		if (i < 0 || i >= N) return 0;
//		if (Array[i][x] != '#') return 0;
//	}
//
//	for (int i = x - c; i <= x + c; i++)
//	{
//		if (i < 0 || i >= M) return 0;
//		if (Array[y][i] != '#') return 0;
//	}
//
//	return 1;
//}
//
//void Vcheck(int x, int y, int c, char tf)
//{
//	for (int i = y - c; i <= y + c; i++)
//		Array[i][x] = tf;
//
//	for (int i = x - c; i <= x + c; i++)
//		Array[y][i] = tf;
//}
//
//void solve()
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		int X1 = v[i].x, Y1 = v[i].y;
//		for (int k = 7; k >= 0; k--) //1번 십자가 크기 정하기
//		{
//			int c1 = check(X1, Y1, k);
//			if (c1)
//			{
//				Vcheck(X1, Y1, k, '*');
//				for (int j = 0; j < v.size(); j++)
//				{
//					if (i == j) continue;
//					int X2 = v[j].x, Y2 = v[j].y;
//					for (int r = 7; r >= 0; r--) // 2번 십자가 크기 정하기
//					{
//						int c2 = check(X2, Y2, r);
//						if (c2)
//						{
//							Vcheck(X2, Y2, r, '*');
//							ans = max(ans, table[k]*table[r]);
//							Vcheck(X2, Y2, r, '#');
//						}
//					}
//				}
//				Vcheck(X1, Y1, k, '#');
//			}
//		}
//	}
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