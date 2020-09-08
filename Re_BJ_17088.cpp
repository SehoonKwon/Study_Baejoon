//#include <iostream>
//#include <cstring>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//#define MAX (int)(10e5 +1)
//
////등차수열의 성질을 이용해서 되는지 안되는지를 따져보자. 이러면 3^N -> 3^2 * N 으로 줄어듬 (경우의 수 9가지 * for문을 통한 비교 N개)
////다시 풀땐 for문을 이용해서 최대한 줄여보자. 백준님 코드는 50줄 근처임
//
//int N;
//int Array[MAX], temp[MAX];
//int ans = 987654321;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//}
//
//void solve()
//{
//	int cnt, D;
//	//1)
//	temp[0] = Array[0] + 1;
//	
//	//1-1)
//	temp[1] = Array[1] + 1;
//	cnt = 1; // 원래 배열에서 연산 1번 했으므로 cnt = 1 로시작 (temp[0] = Array[0] + 1)
//	D = temp[1] - temp[0];
//	for (int i = 1; i < N; i++)
//	{
//		temp[i] = temp[0] + D*i;
//		if (abs(temp[i] - Array[i]) == 1) cnt++;
//		else if (abs(temp[i] - Array[i]) > 1)
//		{
//			cnt = 987654321;
//			break;
//		}
//	}
//	ans = min(ans, cnt);
//
//	//1-2)
//	temp[1] = Array[1];
//	cnt = 1;
//	D = temp[1] - temp[0];
//	for (int i = 1; i < N; i++)
//	{
//		temp[i] = temp[0] + D*i;
//		if (abs(temp[i] - Array[i]) == 1) cnt++;
//		else if (abs(temp[i] - Array[i]) > 1)
//		{
//			cnt = 987654321;
//			break;
//		}
//	}
//	ans = min(ans, cnt);
//
//	//1-3)
//	temp[1] = Array[1] - 1;
//	cnt = 1;
//	D = temp[1] - temp[0];
//	for (int i = 1; i < N; i++)
//	{
//		temp[i] = temp[0] + D*i;
//		if (abs(temp[i] - Array[i]) == 1) cnt++;
//		else if (abs(temp[i] - Array[i]) > 1)
//		{
//			cnt = 987654321;
//			break;
//		}
//	}
//	ans = min(ans, cnt);
//
//	//2)
//	//2-1)
//	temp[0] = Array[0];
//	temp[1] = Array[1] + 1;
//	cnt = 0;
//	D = temp[1] - temp[0];
//	for (int i = 1; i < N; i++)
//	{
//		temp[i] = temp[0] + D*i;
//		if (abs(temp[i] - Array[i]) == 1) cnt++;
//		else if (abs(temp[i] - Array[i]) > 1)
//		{
//			cnt = 987654321;
//			break;
//		}
//	}
//	ans = min(ans, cnt);
//
//	//2-2)
//	temp[1] = Array[1];
//	cnt = 0;
//	D = temp[1] - temp[0];
//	for (int i = 1; i < N; i++)
//	{
//		temp[i] = temp[0] + D*i;
//		if (abs(temp[i] - Array[i]) == 1) cnt++;
//		else if (abs(temp[i] - Array[i]) > 1)
//		{
//			cnt = 987654321;
//			break;
//		}
//	}
//	ans = min(ans, cnt);
//
//	//2-3)
//	temp[1] = Array[1] - 1;
//	cnt = 0;
//	D = temp[1] - temp[0];
//	for (int i = 1; i < N; i++)
//	{
//		temp[i] = temp[0] + D*i;
//		if (abs(temp[i] - Array[i]) == 1) cnt++;
//		else if (abs(temp[i] - Array[i]) > 1)
//		{
//			cnt = 987654321;
//			break;
//		}
//	}
//	ans = min(ans, cnt);
//
//	//3)
//	//3-1)
//	temp[0] = Array[0] - 1;
//	temp[1] = Array[1] + 1;
//	cnt = 1;
//	D = temp[1] - temp[0];
//	for (int i = 1; i < N; i++)
//	{
//		temp[i] = temp[0] + D*i;
//		if (abs(temp[i] - Array[i]) == 1) cnt++;
//		else if (abs(temp[i] - Array[i]) > 1)
//		{
//			cnt = 987654321;
//			break;
//		}
//	}
//	ans = min(ans, cnt);
//
//	//3-2)
//	temp[1] = Array[1];
//	cnt = 1;
//	D = temp[1] - temp[0];
//	for (int i = 1; i < N; i++)
//	{
//		temp[i] = temp[0] + D*i;
//		if (abs(temp[i] - Array[i]) == 1) cnt++;
//		else if (abs(temp[i] - Array[i]) > 1)
//		{
//			cnt = 987654321;
//			break;
//		}
//	}
//	ans = min(ans, cnt);
//
//	//3-3)
//	temp[1] = Array[1] - 1;
//	cnt = 1;
//	D = temp[1] - temp[0];
//	for (int i = 1; i < N; i++)
//	{
//		temp[i] = temp[0] + D*i;
//		if (abs(temp[i] - Array[i]) == 1) cnt++;
//		else if (abs(temp[i] - Array[i]) > 1)
//		{
//			cnt = 987654321;
//			break;
//		}
//	}
//	ans = min(ans, cnt);
//
//	if (ans == 987654321) ans = -1;
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