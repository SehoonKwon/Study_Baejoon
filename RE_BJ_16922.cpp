//#include <iostream>
//using namespace std;
//
////����� �� �� �����غ���, DFS N^4�� ������� �ٲ㺸��
//
//int N;
//int check[1001]; // 50�� 20�� �� �����°� ���� ū ���̹Ƿ� �ִ� 1000���� ���� �� ����
//int ans;
//
////�� ����� 4^N��. ���� ����Ұ�
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
////N�� 20�ۿ� �ȵǹǷ� 20^4 �� 4���������ε� ����
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