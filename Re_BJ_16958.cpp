//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
////A->B�� ���� ����� ���� �����غ���. � ���µ� �ű⼭ �� �����ϸ� �� 2���� �پ��
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
//	v.push_back({}); //1�� ���ú��� �����ϱ� ���� ����
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
//	if (v[A[n]].S == 1) AS = 0; //A�� Ư���� ���ø� Ư���� ���÷� �̵��ϴ� ���X (�ٷ� �ڷ���Ʈ �����ϹǷ�)
//	else
//	{
//		for (int i = 1; i < N + 1; i++)
//		{
//			if (v[i].S == 0) continue; //Ư���� ���ð� �ƴϸ� ����X
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
//			if (v[i].S == 0) continue; //Ư���� ���ð� �ƴϸ� ����X
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
//	//�ڷ���Ʈ�� 2���ϴ� ���� ����. why ?  �ڷ���Ʈ 2�� = 2T�ε� �׻� T���� �����Ƿ�
//	return AS + T + BS;
//}
//
//void solve()
//{
//	for (int i = 0; i < M; i++)
//	{
//		// 1.A->B�� �׳ɰ���
//		int dist = cal_dist(A[i], B[i]);
//
//		// 2. A->AS->BS->B�� Ư���� ���� ���İ���. �̶� A, B�� Ư���� ���ö�� A, B���� Ư���� ���÷� ���� ����� 0
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