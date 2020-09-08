//#include <iostream>
//using namespace std;
//
//int N;
//int ans;
//int Array[1001];
//int R[] = { 0,1,5,10,50 };
//
////중복조합
//void DFS(int idx, int cnt, int sum)
//{
//	if (cnt == N)
//	{
//		if (Array[sum] == 0)
//		{
//			Array[sum]++;
//			ans++;
//		}
//		return;
//	}
//
//	//중복조합은 visit배열이 없고 백트래킹 과정도 X
//	//중복조합의 경우의 수는 nHr = n+r-1Cr
//	for (int i = idx; i < 5; i++)
//		DFS(i, cnt + 1, sum + R[i]);
//
//}
//
//void solve()
//{
//	DFS(1, 0, 0);
//
//	cout << ans;
//}
//
//int main()
//{
//	cin >> N;
//	solve();
//	return 0;
//}