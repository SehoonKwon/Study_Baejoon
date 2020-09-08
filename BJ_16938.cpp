//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N, L, R, X;
//int Array[15];
//int visit[15];
//vector<int> v;
//int ans;
//
//void input()
//{
//	cin >> N >> L >> R >> X;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//}
//
//void DFS(int idx, int cnt, int sum, int MAX, int MIN)
//{
//	if (sum > R) return;
//	else if (L <= sum && sum <= R && cnt >= 2 && (MAX-MIN) >= X)
//		ans++;
//
//	for (int i = idx; i < N; i++)
//	{
//		if (visit[i] == true) continue;
//		visit[i] = true;
//		DFS(i, cnt+1, sum+Array[i], max(MAX,Array[i]), min(MIN, Array[i]));
//		visit[i] = false;
//	}
//}
//
//void solve()
//{
//	DFS(0, 0, 0, 0, 987654321);
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