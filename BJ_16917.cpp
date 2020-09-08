//#include <iostream>
//#include <algorithm>
//using namespace std;
//
////BJ님 코드. 훨씬 간결 아래에 제출한 내 코드와 비교해보기
//
//int A, B, C, X, Y;
//
//void input()
//{
//	cin >> A >> B >> C >> X >> Y;
//}
//
//void solve()
//{
//	int ans = X*A + Y*B;
//	for (int i = 1; i <= 100000; i++)
//	{
//		int price = 2 * i*C + max(0, X - i)*A + max(0, Y - i)*B;
//		if (ans > price) ans = price;
//	}
//	cout << ans << endl;
//}
//
//////내 코드
////void solve()
////{
////	int x = 0, y = 0, money = 0;
////	while (1)
////	{
////		if (x >= X && y >= Y) break;
////
////		if (x < X && y < Y)
////		{
////			if (2 * C < A + B)
////			{
////				x++;
////				y++;
////				money += 2 * C;
////			}
////			else
////			{
////				x++;
////				y++;
////				money += (A + B);
////			}
////		}
////		else if (x < X)
////		{
////			if (2 * C < A)
////			{
////				x++;
////				money += 2 * C;
////			}
////			else
////			{
////				x++;
////				money += A;
////			}
////		}
////		else if (y < Y)
////		{
////			if (2 * C < B)
////			{
////				y++;
////				money += 2 * C;
////			}
////			else
////			{
////				y++;
////				money += B;
////			}
////		}
////	}
////
////	cout << money << endl;
////}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}