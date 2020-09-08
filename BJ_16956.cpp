//#include <iostream>
//#include <vector>
//using namespace std;
//
//#define endl "\n"
//
//int N, M;
//char Array[501][501];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
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
//	for(int i=0; i<N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == 'S')
//				v.push_back({ j,i });
//		}
//}
//
//void solve()
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		int X = v[i].x, Y = v[i].y;
//		for (int j = 0; j < 4; j++)
//		{
//			int nx = X + dx[j];
//			int ny = Y + dy[j];
//
//			if(nx > -1 && nx < M && ny > -1 && ny < N)
//				if (Array[ny][nx] == 'W')
//				{
//					cout << 0 << endl;
//					return;
//				}
//		}
//	}
//
//	cout << 1 << endl;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (Array[i][j] == '.') cout << "D";
//			else cout << Array[i][j];
//		}
//		cout << endl;
//	}
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