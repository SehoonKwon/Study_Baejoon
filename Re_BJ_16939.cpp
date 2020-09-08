//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int Array[6][2][2], Array2[6][2][2];
//
//void input()
//{
//	for (int i = 0; i < 6; i++)
//		for (int j = 0; j < 2; j++)
//			for (int k = 0; k < 2; k++)
//				cin >> Array[i][j][k];
//
//	memcpy(Array2, Array, sizeof(Array));
//}
//
//int check()
//{
//	for (int i = 0; i < 6; i++)
//	{
//		int color = Array[i][0][0];
//		for (int j = 0; j < 2; j++)
//			for (int k = 0; k < 2; k++)
//				if (Array[i][j][k] != color) return 0;
//	}
//
//	return 1;
//}
//
//void Rotate_UL()
//{
//	int temp1 = Array[3][0][0], temp2 = Array[3][0][1];
//	Array[3][0][0] = Array[1][0][0];
//	Array[3][0][1] = Array[1][0][1];
//	Array[1][0][0] = Array[4][0][0];
//	Array[1][0][1] = Array[4][0][1];
//	Array[4][0][0] = Array[5][0][0];
//	Array[4][0][1] = Array[5][0][1];
//	Array[5][0][0] = temp1;
//	Array[5][0][1] = temp2;
//}
//
//void Rotate_DL()
//{
//	int temp1 = Array[3][1][0], temp2 = Array[3][1][1];
//	Array[3][1][0] = Array[1][1][0];
//	Array[3][1][1] = Array[1][1][1];
//	Array[1][1][0] = Array[4][1][0];
//	Array[1][1][1] = Array[4][1][1];
//	Array[4][1][0] = Array[5][1][0];
//	Array[4][1][1] = Array[5][1][1];
//	Array[5][1][0] = temp1;
//	Array[5][1][1] = temp2;
//}
//
//void Rotate_LU()
//{
//	int temp1 = Array[5][0][1], temp2 = Array[5][1][1];
//	Array[5][1][1] = Array[0][0][0];
//	Array[5][0][1] = Array[0][1][0];
//	Array[0][0][0] = Array[1][0][0];
//	Array[0][1][0] = Array[1][1][0];
//	Array[1][0][0] = Array[2][0][0];
//	Array[1][1][0] = Array[2][1][0];
//	Array[2][1][0] = temp1;
//	Array[2][0][0] = temp2;
//
//}
//
//void Rotate_RU()
//{
//	int temp1 = Array[5][0][0], temp2 = Array[5][1][0];
//	Array[5][1][0] = Array[0][0][1];
//	Array[5][0][0] = Array[0][1][1];
//	Array[0][0][1] = Array[1][0][1];
//	Array[0][1][1] = Array[1][1][1];
//	Array[1][0][1] = Array[2][0][1];
//	Array[1][1][1] = Array[2][1][1];
//	Array[2][1][1] = temp1;
//	Array[2][0][1] = temp2;
//
//}
//
//void Rotate_FL()
//{
//	int temp = Array[0][1][0];
//	Array[0][1][0] = Array[3][1][1];
//	Array[3][1][1] = Array[2][0][1];
//	Array[2][0][1] = Array[4][1][0];
//	Array[4][1][0] = temp;
//	temp = Array[0][1][1];
//	Array[0][1][1] = Array[3][0][1];
//	Array[3][0][1] = Array[2][0][0];
//	Array[2][0][0] = Array[4][1][0];
//	Array[4][1][0] = temp;
//}
//
//void Rotate_BL()
//{
//	int temp = Array[0][0][1];
//	Array[0][0][1] = Array[4][1][1];
//	Array[4][1][1] = Array[2][1][0];
//	Array[2][1][0] = Array[3][0][0];
//	Array[3][0][0] = temp;
//	temp = Array[0][0][0];
//	Array[0][0][0] = Array[4][0][1];
//	Array[4][0][1] = Array[2][1][1];
//	Array[2][1][1] = Array[3][1][0];
//	Array[3][1][0] = temp;
//}
//
//void solve()
//{
//	int ans = 0;
//	memcpy(Array, Array2, sizeof(Array2));
//	Rotate_RU();
//	if (check()) ans =  1;
//
//	memcpy(Array, Array2, sizeof(Array2));
//	Rotate_LU();
//	if (check()) ans = 1;
//
//	memcpy(Array, Array2, sizeof(Array2));
//	Rotate_UL();
//	if (check()) ans = 1;
//
//	memcpy(Array, Array2, sizeof(Array2));
//	Rotate_DL();
//	if (check()) ans = 1;
//
//	memcpy(Array, Array2, sizeof(Array2));
//	Rotate_FL();
//	if (check()) ans = 1;
//
//	memcpy(Array, Array2, sizeof(Array2));
//	Rotate_BL();
//	if (check()) ans = 1;
//
//	memcpy(Array, Array2, sizeof(Array2));
//	for (int j = 0; j < 3; j++)
//		Rotate_LU();
//	if (check()) ans = 1;
//
//	memcpy(Array, Array2, sizeof(Array2));
//	for (int j = 0; j < 3; j++)
//		Rotate_RU();
//	if (check()) ans = 1;
//
//	memcpy(Array, Array2, sizeof(Array2));
//	for (int j = 0; j < 3; j++)
//		Rotate_UL();
//	if (check()) ans = 1;
//
//	memcpy(Array, Array2, sizeof(Array2));
//	for (int j = 0; j < 3; j++)
//		Rotate_DL();
//	if (check()) ans = 1;
//
//	memcpy(Array, Array2, sizeof(Array2));
//	for (int j = 0; j < 3; j++)
//		Rotate_FL();
//	if (check()) ans = 1;
//
//	memcpy(Array, Array2, sizeof(Array2));
//	for (int j = 0; j < 3; j++)
//		Rotate_BL();
//	if (check()) ans = 1;
//
//	cout << ans;
//}
//
//int main()
//{
//	input();
//	solve();
//	
//	return 0;
//}