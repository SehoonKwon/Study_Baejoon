//#include <iostream>
//#include <queue>
//#include <cmath>
//using namespace std;
//
////ó���� �翬�� BFS�� Ǯ������ �̷��� Ǯ�� ť�� 2^n���� �����ϸ鼭 ã�µ� �־��� case 1 -> 100000000 ��� ������ �ð��ʰ�
////DFS�� Ǯ�� �� ���κ��� ��� *2 or *10+1 �� �ذ��� ������ ū ������ ���ذ��Ƿ� 0�ʸ��� ���.
//
//int A, B;
//int ans = -1;
//
//struct point
//{
//	int x;
//	int step;
//};
//
////void solve()
////{
////	queue<point> q;
////	q.push({ A, 0 });
////
////	while (!q.empty())
////	{
////		int X = q.front().x;
////		int step = q.front().step;
////		q.pop();
////
////		if (X == B)
////		{
////			cout << step + 1 << endl;
////			return;
////		}
////
////		if (X > B) continue;
////
////		q.push({ 2 * X, step + 1 });
////		q.push({ 10*X + 1, step + 1 });
////	}
////
////	cout << "-1" << endl;
////}
//
//void DFS(long long int num, int cnt)
//{
//	if (ans != -1) return;
//	if (num > B) return;
//	else if (num == B)
//	{
//		ans = cnt + 1;
//		return;
//	}
//
//	DFS(num * 2, cnt + 1);
//	DFS(num * 10 + 1, cnt + 1);
//}
//
//void solve()
//{
//	DFS(A, 0);
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	cin >> A >> B;
//	solve();
//	return 0;
//}