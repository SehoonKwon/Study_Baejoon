//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
////���̵�� ����, �� �ؿ� ���̵�� ����
//
//int N, K;
//int Array[1001];
//int ans = 987654321;
//
//void input()
//{
//	cin >> N >> K;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//}
//
//void solve()
//{
//	int cnt = 0, ans = -1;
//	for (int j = 1; j < 1001; j++) //A1�� ������ ���� 1~1000
//	{
//		cnt = 0;
//
//		for (int i = 0; i < N; i++)
//			if (Array[i] != j + i*K) cnt++;
//
//		if (ans == -1 || cnt < ans) ans = cnt;  //ó�� ���� �ݵ�� ans�������ֱ�, j+i*K >1000 �ΰ�츦 ���� ���ص� �ӵ� 0ms
//	}
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}
//
//
//// ��������� i+1��° ž�� i���� K��ŭ ���ƾ��ϹǷ� A1 A2 A3 => A1 A1+K, A1+2K ... 