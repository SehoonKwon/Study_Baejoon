//#include <iostream>
//using namespace std;
//
////경우의 수 잘 생각해보기, DFS N^4의 방법으로 바꿔보기
//
//int N;
//int check[1001]; // 50이 20번 더 해지는게 가장 큰 수이므로 최대 1000까지 나올 수 있음
//int ans;
//
////이 방식은 4^N임. 절대 통과불가
////void DFS(int I, int V, int X, int L, int cnt)
////{
////	if (cnt == N)
////	{
////		int res = 1 * I + 5 * V + 10 * X + 50 * L;
////		if (check[res] == 0)
////		{
////			check[res]++;
////			ans++;
////		}
////		return;
////	}
////
////	DFS(I + 1, V, X, L, I + V + X + L + 1);
////	DFS(I, V + 1, X, L, I + V + X + L + 1);
////	DFS(I, V, X + 1, L, I + V + X + L + 1);
////	DFS(I, V, X, L + 1, I + V + X + L + 1);
////}
//
////N이 20밖에 안되므로 20^4 라서 4중포문으로도 가능
//void solve()
//{
//	for (int i = 0; i <= N; i++)
//	{
//		for (int j = 0; j <= N; j++)
//		{
//			for (int k = 0; k <= N; k++)
//			{
//				for (int r = 0; r <= N; r++)
//				{
//					if (i + j + k + r == N)
//					{
//						int res = i * 1 + j * 5 + k * 10 + r * 50;
//						if (res > 1000) continue;
//						if (check[res] == 0)
//						{
//							check[res]++;
//							ans++;
//						}
//					}
//				}
//			}
//		}
//	}
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	cin >> N;
//	solve();
//	return 0;
//}