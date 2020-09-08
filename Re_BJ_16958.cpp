//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
////A->B로 가는 경우의 수를 생각해보기. 몇개 없는데 거기서 잘 생각하면 단 2개로 줄어듬
//
//int N, T, M;
//int A[1001], B[1001];
//
//struct point
//{
//	int y;
//	int x;
//	int S;
//};
//
//vector<point> v;
//
//void input()
//{
//	cin >> N >> T;
//
//	int s, x, y;
//	v.push_back({}); //1번 도시부터 시작하기 위한 더미
//	for (int i = 0; i < N; i++)
//	{
//		cin >> s >> x >> y;
//		v.push_back({ x, y,s });
//	}
//
//	cin >> M;
//	for (int i = 0; i < M; i++)
//		cin >> A[i] >> B[i];
//}
//
//int cal_dist(int u, int w)
//{
//	return abs(v[u].y - v[w].y) + abs(v[u].x - v[w].x);
//}
//
//int check(int n)
//{
//	int AS, BS, AS_idx, BS_idx, M = 987654321;
//	if (v[A[n]].S == 1) AS = 0; //A가 특별한 도시면 특별한 도시로 이동하는 비용X (바로 텔레포트 가능하므로)
//	else
//	{
//		for (int i = 1; i < N + 1; i++)
//		{
//			if (v[i].S == 0) continue; //특별한 도시가 아니면 관심X
//			if (cal_dist(A[n], i) < M)
//			{
//				M = cal_dist(A[n], i);
//				AS_idx = i;
//			}
//		}
//
//		AS = M;
//	}
//
//	M = 987654321;
//	if (v[B[n]].S == 1) BS = 0;
//	else
//	{
//		for (int i = 1; i < N + 1; i++)
//		{
//			if (v[i].S == 0) continue; //특별한 도시가 아니면 관심X
//			if (cal_dist(B[n], i) < M)
//			{
//				M = cal_dist(B[n], i);
//				BS_idx = i;
//			}
//		}
//
//		BS = M;
//	}
//
//	//텔레포트를 2번하는 경우는 없다. why ?  텔레포트 2번 = 2T인데 항상 T보다 작으므로
//	return AS + T + BS;
//}
//
//void solve()
//{
//	for (int i = 0; i < M; i++)
//	{
//		// 1.A->B로 그냥가기
//		int dist = cal_dist(A[i], B[i]);
//
//		// 2. A->AS->BS->B로 특별한 도시 거쳐가기. 이때 A, B가 특별한 도시라면 A, B에서 특별한 도시로 가는 비용이 0
//		dist = min(dist, check(i));
//
//		cout << dist << endl;
//	}
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}