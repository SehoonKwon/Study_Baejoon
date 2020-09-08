//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define endl "\n"
//
////����Ŭ ���� �����ϱ� ���� �� �ܿ��α�
//
//int N;
//int Array[3001][3001];
//int visit[3001];
//int dist[3001];
//
//struct point
//{
//	int st;
//	int step;
//};
//
//queue<point> q;
//
//void input()
//{
//	cin >> N;
//
//	int A, B;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A >> B;
//		Array[A-1][B-1] = 1;
//		Array[B-1][A-1] = 1;
//	}
//}
//
//int DFS(int x, int p) //x�� ����, p�� �ٷ� ������ ����(��� �������� x �������� �Դ���)
//{
//	// -2 : ����Ŭ ã������ ����Ŭ�� ����X, -1 : ��ã�� 0~N-1 : ����Ŭ ã�Ұ� ����Ŭ�� ���� �ε���
//	if (visit[x] == 1) return x; // 1�� �湮�ߴµ� ����Ŭ�� �ƴѰ��, 2�� �湮+����Ŭ, �湮�ߴµ� �̹� �湮�� ��(1)�̸� ����Ŭ�̶�� ���̹Ƿ� �ε��� ����
//	visit[x] = 1;
//
//	for (int i = 0; i < N; i++)
//	{
//		if (Array[x][i] == 0) continue; //�̾��� �ִ� ������ �ƴϸ� ����
//		if (i == p) continue; //�ٷ� �� ��� �������� �ٽ� ���ư������� �ȵǹǷ� p�� �̿�
//		int res = DFS(i, x);
//		if (res == -2) return -2;
//		else if (res >= 0)
//		{
//			visit[x] = 2;
//			if (x == res) return -2; //���� ���� �������̸� �� �̻��� ����Ŭ�� ������ ���� �����Ƿ� -2 ����
//			else return res;
//		}
//	}
//
//	return -1;
//}
//
//void BFS()
//{
//	while (!q.empty())
//	{
//		int X = q.front().st;
//		int step = q.front().step;
//		q.pop();
//
//		for (int i = 0; i < N; i++)
//		{
//			if (i == X) continue;
//			if (Array[X][i] == 1 && visit[i] < 2)
//			{
//				visit[i] = 3; //����Ŭ ǥ�ð� �ƴ϶� BFS������ �湮ǥ�ÿ�
//				dist[i] = step + 1;
//				q.push({ i, step + 1 });
//			}
//		}
//	}
//}
//
//void solve()
//{
//	//����Ŭ ã��
//	DFS(0, -1);
//
//	for (int i = 0; i < N; i++)
//		if (visit[i] == 2)
//			q.push({ i, 0 });
//
//	BFS();
//
//	for (int i = 0; i < N; i++)
//		cout << dist[i] << " ";
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