//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
////���� ���� ������ �湮�ϹǷ� �Ϲ����� BFS�� �ƴϴ�. ��Ģ�� ���� ���ʷ� �湮�� �ð� ���ķ� +2 �ʸ��� �湮�ϹǷ� üũ�� ���ʽð� �ѹ���
//
//int N, K;
//int visit[500001][2]; //0�� ¦������, 1�� Ȧ������ ���. ���� ������ �ʰ� �迭�� �ϸ� t = 1-t ��� ���� ���� ���� �ڵ�����
//int ans;
//
//struct point
//{
//	int X;
//	int step;
//	int t; // ����Ī��
//};
//
//queue<point> q;
//
//void BFS()
//{
//	queue<point> nq; // �������� �˻��� step�� ť(temp����)
//	visit[N][0] = 0;
//	nq.push({ N, 0 });
//
//	for (int time = 1; ;time++) //while ť�ȿ��� �˻��ϸ� K�� ��� �����ǹǷ� �� step���� �Ϸ��� nq��� �ӽ����� ť�� while�ۿ� �ݺ��� �α�
//	{
//		q = nq;
//		while (!nq.empty()) nq.pop();
//		while (!q.empty())
//		{
//			int X = q.front().X;
//			int step = q.front().step;
//			int t = q.front().t;
//			q.pop();
//
//			for (int i : {X - 1, X + 1, 2 * X}) //���ο� �ڵ���ų�̹Ƿ� �˾Ƶӽô�. ������ ���� vector�� int x : vector �ߴ� �Ͱ� ���� ��
//			{
//				if (i >= 0 && i <= 500000 && visit[i][1 - t] == -1) //  1-t �߿�, ���� ���� �湮�� ĭ�� ������ �����̸�
//				{
//					visit[i][1 - t] = step + 1;
//					nq.push({ i, step + 1, 1 - t });
//				}
//			}
//		}
//
//		//�ѹ� ������ �˻�, �� ���� �ϸ� 50����° �������� üũ�� ���̹Ƿ� ���� ����, ã���� �ٷ� ������ �� �ֵ���
//		K += time;
//		if (K > 500000) return;
//		else if (visit[K][time % 2] != -1 && visit[K][time % 2] <= time)
//		{
//			ans = time;
//			return;
//		}
//	}
//}
//
//void solve()
//{
//	if (N == K)
//	{
//		cout << "0" << endl;
//		return;
//	}
//
//	BFS();
//	if (ans == 0) ans = -1;
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	cin >> N >> K;
//	memset(visit, -1, sizeof(visit)); // 0���� ���� ������ ù �湮�� 0��° step. �湮 ���ϴ� ���� �����ϱ� ���ؼ�
//	solve();
//	return 0;
//}