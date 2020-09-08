//#include <iostream>
//using namespace std;
//
//#define endl "\n"
//
//int X, Y, H, W;
//int Array[601][601];
//
//void input()
//{
//	cin >> H >> W >> X >> Y;
//	for (int i = 0; i < H + X; i++)
//	{
//		for (int j = 0; j < W + Y; j++)
//			cin >> Array[i][j];
//	}
//}
//
//void solve()
//{
//	for (int i = 0; i < H; i++)
//	{
//		for (int j = 0; j < W; j++)
//			Array[i + X][Y + j] -= Array[i][j];
//	}
//
//	for (int i = 0; i < H; i++)
//	{
//		for (int j = 0; j < W; j++)
//			cout << Array[i][j] << " ";
//		cout << endl;
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	input();
//	solve();
//	return 0;
//}