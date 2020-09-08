//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
////아이디어 문제, 맨 밑에 아이디어 설명
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
//	for (int j = 1; j < 1001; j++) //A1로 가능한 수는 1~1000
//	{
//		cnt = 0;
//
//		for (int i = 0; i < N; i++)
//			if (Array[i] != j + i*K) cnt++;
//
//		if (ans == -1 || cnt < ans) ans = cnt;  //처음 돌땐 반드시 ans갱신해주기, j+i*K >1000 인경우를 제외 안해도 속도 0ms
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
//// 계속적으로 i+1번째 탑이 i보다 K만큼 높아야하므로 A1 A2 A3 => A1 A1+K, A1+2K ... 