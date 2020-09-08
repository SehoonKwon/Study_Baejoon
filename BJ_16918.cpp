//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//int N, M, T;
//char Array[200][200], Array2[200][200];
//int Bomb[200][200], Bomb2[200][200];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { -1,1,0,0 };
//
//void input()
//{
//	cin >> N >> M >> T;
//
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			cin >> Array[i][j];
//			if (Array[i][j] == 'O')
//				Bomb[i][j] = 0;
//			else
//				Bomb[i][j] = -1;
//		}
//
//	memcpy(Array2, Array, sizeof(Array));
//	memcpy(Bomb2, Bomb, sizeof(Bomb));
//}
//
//void setting(int t)
//{
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//		{
//			if (Array[i][j] == '.')
//			{
//				Array[i][j] = 'O';
//				Bomb[i][j] = t;
//			}
//		}
//}
//
//void act(int t)
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (Array[i][j] == 'O')
//			{
//				if (Bomb[i][j] == t - 3)
//				{
//					Array2[i][j] = '.';
//					Bomb2[i][j] = -1;
//
//					for (int k = 0; k < 4; k++)
//					{
//						int nx = j + dx[k];
//						int ny = i + dy[k];
//
//						if (nx > -1 && nx < M && ny > -1 && ny < N)
//						{
//							Array2[ny][nx] = '.';
//							Bomb2[ny][nx] = -1;
//						}
//					}
//				}
//			}
//		}
//	}
//
//	memcpy(Array, Array2, sizeof(Array2));
//	memcpy(Bomb, Bomb2, sizeof(Bomb2));
//}
//
//void solve()
//{
//
//	for (int i = 2; i < T + 1; i++)
//	{
//		setting(i); //ºóÄ­¿¡ ÆøÅº ¼³Ä¡
//		memcpy(Array2, Array, sizeof(Array));
//		memcpy(Bomb2, Bomb, sizeof(Bomb));
//		i++;
//		if (i > T) break;
//		act(i);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//			cout << Array[i][j];
//		cout << "\n";
//	}
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}