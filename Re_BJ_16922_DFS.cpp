//#include <iostream>
//using namespace std;
//
//int N;
//int ans;
//int Array[1001];
//int R[] = { 0,1,5,10,50 };
//
////�ߺ�����
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
//	//�ߺ������� visit�迭�� ���� ��Ʈ��ŷ ������ X
//	//�ߺ������� ����� ���� nHr = n+r-1Cr
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