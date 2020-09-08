//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int N;
//int visit[10];
//string A, B;
//int ans;
//vector<int> v;
//
//int calcul()
//{
//	string s = "";
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		string temp = "";
//		temp += A[v[i]];
//		s += temp;
//	}
//
//	int c = stoi(s), b = stoi(B);
//	if (c <= b) return c;
//	else return -1;
//}
//
//void DFS(int idx, int cnt)
//{
//	if (cnt == N)
//	{
//		if (A[v[0]] == '0') return;
//
//		int res = calcul();
//		if (res > ans) ans = res;
//		return;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		if (visit[i] == true) continue;
//		visit[i] = true;
//		v.push_back(i);
//		DFS(i, cnt + 1);
//		v.pop_back();
//		visit[i] = false;
//	}
//}
//
//void solve()
//{
//	DFS(0, 0);
//	if (ans == 0) ans = -1;
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	cin >> A >> B;
//	N = A.size();
//
//	solve();
//	return 0;
//}