#include <iostream>
using namespace std;

//구현 문제가 아니라 사실 수학 문제임. 구현으로 풀면 시간초과
//description 해설 참조

int N, K;

int main()
{
	cin >> N >> K;
	int cnt = 0;
	while (1)
	{
		int temp = N;
		int tcnt = 0;
		while (temp > 0)
		{
			if (temp % 2) tcnt++;
			temp /= 2;
		}

		if(tcnt <= K) break;
		N++;
		cnt++;
	}
	cout << cnt;
	return 0;
}

///////////////////////////////////////// 아래는 2진수를 변환(bitset이용)해서 하는건데 매우 느림. 시간초과 걸릴뻔
//#include <iostream>
//#include <bitset>
//using namespace std;
//
////구현 문제가 아니라 사실 수학 문제임. 구현으로 풀면 시간초과
//
//int N, K;
//
//int main()
//{
//	cin >> N >> K;
//	int cnt = 0;
//	while (1)
//	{
//		string s = bitset<30>(N).to_string(); // 10^7인 2진수 아무거나 해도 되는데 그냥 크게 2^30으로 잡음
//		int chk = 0;
//		for (int i = 0; i < s.size(); i++)
//			if (s[i] == '1') chk++;
//
//		if (chk <= K) break;
//		N++;
//		cnt++;
//	}
//	cout << cnt;
//	return 0; 
//}
