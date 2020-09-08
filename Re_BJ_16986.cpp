//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//int N, K;
//int D[9][9];
//int visit[9];
//int RSP[3][20];
//int cnt[3];
//int ans;
//vector<int> v;
//
//void input()
//{
//	cin >> N >> K;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			cin >> D[i][j];
//
//	for (int i = 1; i < 3; i++)
//		for (int j = 0; j < 20; j++)
//		{
//			cin >> RSP[i][j];
//			RSP[i][j]--;
//		}
//}
//
//void setting()
//{
//	for (int i = 0; i < N; i++)
//		RSP[0][i] = v[i];
//}
//
//void match()
//{
//	int win[3] = { 0, 0, 0 };
//	int t1 = 0, t2 = 1;
//	memset(cnt, 0, sizeof(cnt));
//	memset(win, 0, sizeof(win));
//	while (1)
//	{
//		if (t1 > t2) swap(t1, t2); // 뒷사람이 이기는게 아니라 진행 순서 0, 1, 2 순서에서 늦은 사람이 이기는 방식임. 없으면 오답
//		
//		if (t1 == 0)
//		{
//			if (cnt[t1] >= N) return; //지우의 경우 20번까지 정보가 없는 경우도 있기에
//			if (cnt[t2] >= 20) return;
//		}
//		else if (t2 == 0)
//		{
//			if (cnt[t2] >= N) return;
//			if (cnt[t1] >= 20) return;
//		}
//		else //지우가 없는경우는 최대 20번까지 존재
//		{
//			if (cnt[t1] >= 20) return;
//			if (cnt[t2] >= 20) return;
//		}
//
//		int res = D[RSP[t1][cnt[t1]]][RSP[t2][cnt[t2]]];
//		cnt[t1]++;
//		cnt[t2]++;
//		if (res == 2) //t1이 이기는경우
//		{
//			win[t1]++;
//
//			//이 조건이 다음 루프에서 확인되면 88%에서 오답 -> 
//			//루프들어와서 가장 먼저 확인하도록 하면 옮겨도 통과 45~60라인에서 먼저 return 되는 경우 때문에 틀렸던듯
//			if (win[t1] == K) 
//			{
//				if (t1 == 0) ans = 1;
//				return;
//			}
//			t2 = 3 - t1 - t2;
//		}
//		else
//		{
//			win[t2]++;
//			if (win[t2] == K)
//			{
//				if (t2 == 0) ans = 1;
//				return;
//			}
//			int temp = 3 - t1 - t2;
//			t1 = t2;
//			t2 = temp;
//		}
//	}
//}
//
//void DFS(int cnt)
//{
//	if (ans == 1) return;
//	if (cnt == N)
//	{
//		setting();
//		match();
//		return;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		if (visit[i] == true) continue;
//		visit[i] = true;
//		v.push_back(i);
//		DFS(cnt + 1);
//		v.pop_back();
//		visit[i] = false;
//	}
//}
//
//void solve()
//{
//	DFS(0);
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