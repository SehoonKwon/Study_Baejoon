//#include <iostream>
//#include <vector>
//using namespace std;
//
//#define endl "\n"
//
////���ڰ��� ���� �� ���� ã�� ��
////���� visit�迭 ���� *�� ���� cnt�� �ߴµ� �̷� ����� ������. ����� ���� ���� �������� ��ġ�� ���ڰ����� ������ ���ڰ� ũ�⸸ŭ cnt�� ���̹Ƿ� ����
//
//int N, M;
//char Array[101][101];
//int visit[101][101];
//
//struct point
//{
//	int x;
//	int y;
//	int size;
//};
//
//vector<point> v, ans;
//
//void input()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == '*')  v.push_back({ j, i });
//		}
//	}
//}
//
//int check(int x, int y)
//{
//	int cnt;
//	for (cnt = 1; cnt < 50; cnt++)
//	{
//		if (x - cnt < 0 || x + cnt >= M || y - cnt < 0 || y + cnt >= N) break;
//		if (Array[y][x - cnt] == '.' || Array[y][x + cnt] == '.' || Array[y - cnt][x] == '.' || Array[y + cnt][x] == '.') break;
//	}
//
//	return cnt - 1;
//}
//
//void Vcheck(int X, int Y, int c)
//{
//	for (int i = 0; i < c + 1; i++)
//	{
//		visit[Y + i][X] = true;
//		visit[Y - i][X] = true;
//		visit[Y][X + i] = true;
//		visit[Y][X - i] = true;
//	}
//}
//
//void solve()
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		int X = v[i].x, Y = v[i].y;
//		int c = check(X, Y);
//		if (c)
//		{
//			ans.push_back({ X, Y, c });
//			Vcheck(X, Y, c);
//		}
//	}
//
//	for(int i=0; i<N; i++)
//		for(int j=0; j<M; j++)
//			if (Array[i][j] == '*' && visit[i][j] == false)
//			{
//				cout << -1 << endl;
//				return;
//			}
//	
//
//	cout << ans.size() << endl;
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i].y+1 << " " << ans[i].x+1 << " " << ans[i].size << endl;
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