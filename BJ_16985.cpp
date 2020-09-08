//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <vector>
//using namespace std;
//
////하란대로 차근차근 하면 됌. 배열 돌리는 부분은 복습하기
//
//int Array[5][5][5], Miro[5][5][5];
//int visit[5][5][5], cvisit[5];
//int MIN = 987654321;
//int dx[] = { 0,0,1,-1, 0, 0 };
//int dy[] = { 1,-1,0, 0, 0, 0 };
//int dz[] = { 0,0,0,0,1,-1 };
//
//struct point
//{
//	int x;
//	int y;
//	int z;
//	int step;
//};
//
//vector<int> v;
//
//void input()
//{
//	for (int i = 0; i < 5; i++)
//		for (int j = 0; j < 5; j++)
//			for (int k = 0; k < 5; k++)
//				cin >> Array[i][j][k];
//}
//
//void Setting()
//{
//	for (int i = 0; i < 5; i++)
//		memcpy(Miro[i], Array[v[i]], sizeof(Array[i]));
//}
//
//void Rotate(int idx)
//{
//	for (int i = 0; i < 5 / 2; i++)
//		for (int j = i; j < 5 - 1 - i; j++)
//		{
//			int Top = Miro[idx][i][j]; // Top ← 위쪽
//
//			Miro[idx][i][j] = Miro[idx][5 - 1 - j][i]; // 위쪽 ← 왼쪽
//
//			Miro[idx][5 - 1 - j][i] = Miro[idx][5 - 1 - i][5 - 1 - j]; // 왼쪽 ← 아래쪽
//
//			Miro[idx][5 - 1 - i][5 - 1 - j] = Miro[idx][j][5 - 1 - i]; // 아래쪽 ← 오른쪽
//
//			Miro[idx][j][5 - 1 - i] = Top; // 오른쪽 ← Top(위쪽)
//		}
//}
//
//int BFS()
//{
//	if (Miro[0][0][0] == 0) return 987654321;
//
//	queue<point> q;
//	q.push({ 0, 0, 0, 0 });
//
//	memset(visit, 0, sizeof(visit));
//	visit[0][0][0] = true;
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int Z = q.front().z;
//		int step = q.front().step;
//		q.pop();
//
//		if (X == 4 && Y == 4 && Z == 4)
//		{
//			while (!q.empty()) q.pop();
//			return step;
//		}
//
//		if (step > MIN) continue;
//
//		for (int i = 0; i < 6; i++)
//		{
//			int nx = X + dx[i];
//			int ny = Y + dy[i];
//			int nz = Z + dz[i];
//
//			if (nx > -1 && nx < 5 && ny > -1 && ny < 5 && nz > -1 && nz < 5)
//			{
//				if (visit[nz][ny][nx] == 0 && Miro[nz][ny][nx] == 1)
//				{
//					visit[nz][ny][nx] = true;
//					q.push({ nx, ny, nz, step + 1 });
//				}
//			}
//		}
//
//	}
//
//	return 987654321;
//}
//
//void DFS(int cnt)
//{
//	if (cnt == 5)
//	{
//		memset(Miro, 0, sizeof(Miro));
//		Setting();
//
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 4; j++)
//			{
//				for (int k = 0; k < 4; k++)
//				{
//					for (int l = 0; l < 4; l++)
//					{
//						for (int m = 0; m < 4; m++)
//						{
//							int ans = BFS();
//							if (ans < MIN) MIN = ans;
//
//							Rotate(4);
//						}
//						Rotate(3);
//					}
//					Rotate(2);
//				}
//				Rotate(1);
//			}
//			Rotate(0);
//		}
//
//		return;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (cvisit[i] == true) continue;
//
//		cvisit[i] = true;
//		v.push_back(i);
//		DFS(cnt + 1);
//		v.pop_back();
//		cvisit[i] = false;
//
//	}
//
//}
//
//void solve()
//{
//	//큐브 만들고(순열 -> 위에부터 한번씩 회전시켜가며 들어가기) -> 시도해보기
//	DFS(0);
//
//	if (MIN == 987654321) MIN = -1;
//	cout << MIN;
//}
//
//int main()
//{
//	input();
//	solve();
//
//	return 0;
//}