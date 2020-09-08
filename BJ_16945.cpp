//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int Array[9], temp[9], visit[10];
//int MIN = 987654321;
//vector<int> v;
//
//int isMagic()
//{
//	//매직스퀘어 검사
//	int M = v[0] + v[1] + v[2];
//	if (M != (v[0] + v[3] + v[6])) return 0;
//	if (M != (v[0] + v[4] + v[8])) return 0;
//	if (M != (v[1] + v[4] + v[7])) return 0;
//	if (M != (v[2] + v[5] + v[8])) return 0;
//	if (M != (v[2] + v[4] + v[6])) return 0;
//	if (M != (v[3] + v[4] + v[5])) return 0;
//	if (M != (v[6] + v[7] + v[8])) return 0;
//
//	return 1;
//}
//
//int check()
//{
//	//이동 비용 검사
//	int cnt = 0;
//	for (int i = 0; i < 9; i++)
//		if (Array[i] != v[i]) cnt += abs(Array[i] - v[i]);
//
//	return cnt;
//}
//
//void DFS(int idx)
//{
//	if (idx > 9) return;
//	else if (v.size() == 9)
//	{
//		if (isMagic())
//		{
//			MIN = min(MIN, check());
//		}
//		return;
//	}
//
//	for (int i = 1; i < 10; i++)
//	{
//		if (visit[i] == true) continue;
//		visit[i] = true;
//		v.push_back(i);
//		DFS(idx + 1);
//		v.pop_back();
//		visit[i] = false;
//	}
//
//}
//
//void solve()
//{
//	DFS(0);
//
//	cout << MIN << endl;
//}
//
//int main()
//{
//	for (int i = 0; i < 9; i++)
//		cin >> Array[i];
//
//	solve();
//	return 0;
//}