//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <set>
//#include <queue>
//using namespace std;
//
////못풀어서 참고한 코드. 다시 풀어보기
//
//#define endl "\n"
//
//int A[100002], check[100002];
//int idx = 1;
//int N, x, y;
//
//vector<int> edge[100002];
//queue<int> q;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N - 1; i++)
//	{
//		cin >> x >> y;
//		edge[x].push_back(y);
//		edge[y].push_back(x);
//	}
//
//	for (int i = 0; i < N; i++)
//		cin >> A[i];
//}
//
//void solve()
//{
//	if (A[0] != 1)
//	{
//		cout << 0 << endl;
//		return;
//	}
//
//	q.push(1);
//	check[1] = 1;
//	set<int> s;
//	while (!q.empty())
//	{
//		int now = q.front();
//		q.pop();
//
//		int sz = 0;
//		for (int next : edge[now])
//		{
//			if (check[next] == 0)
//			{
//				s.insert(next);
//				check[next] = 1;
//				sz++;
//			}
//		}
//
//		for (int i = idx; i < idx + sz; i++)
//		{
//			if (s.count(A[i]) == 0) 
//			{
//				cout << 0 << endl;
//				return;
//			}
//			else q.push(A[i]);
//		}
//
//		idx += sz;
//	}
//
//	cout << 1 << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}