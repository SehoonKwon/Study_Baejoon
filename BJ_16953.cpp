//#include <iostream>
//#include <queue>
//#include <cmath>
//using namespace std;
//
////처음에 당연히 BFS로 풀었으나 이렇게 풀면 큐에 2^n개씩 증가하면서 찾는데 최악의 case 1 -> 100000000 경우 무조건 시간초과
////DFS로 풀면 한 수로부터 계속 *2 or *10+1 씩 해가며 빠르게 큰 값으로 변해가므로 0초만에 통과.
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