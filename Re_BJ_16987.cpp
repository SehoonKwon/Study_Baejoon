//#include <iostream>
//using namespace std;
//
////������ �� �����ؾߵɵ�. �ȱ����� �װɷ� ��� ġ�°� �ƴ϶� ���ʿ� �ִ°� ��� ġ�� '��������' �� �� ������ ����� �����ʿ� �ִ� ��� ��� ġ�� �ݺ���
//
//int N;
//int MAX = 0;
//
//struct point
//{
//	int S;
//	int W;
//};
//
//point egg[8];
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> egg[i].S >> egg[i].W;
//}
//
//int check()
//{
//	int cnt = 0;
//	for (int i = 0; i < N; i++)
//		if (egg[i].S <= 0) cnt++;
//	return cnt;
//}
//
//void DFS(int now)
//{
//	//�������� ������ ���� ������ ����̶��
//	if (now == N)
//	{
//		int res = check();
//		if (res > MAX) MAX = res;
//		return;
//	}
//	
//	// ������ �����ִ� ����ΰ��
//	if (egg[now].S <= 0)
//	{
//		DFS(now + 1);
//		return; //���� ����� Ž�������� �ش� ��쿡 ���� �� �̻� Ž�� ����
//	}
//
//	int flag = 0; // ��� �����ִ� �������� üũ��
//	for (int i = 0; i < N; i++)
//	{
//		if (now == i) continue;
//		if (egg[i].S <= 0) continue;
//		
//		flag = 1; //�Ѱ��� �ȱ����� �ִٰ� ǥ��
//		egg[now].S -= egg[i].W;
//		egg[i].S -= egg[now].W;
//		DFS(now + 1); //������ ���� ������ ���
//		egg[now].S += egg[i].W;
//		egg[i].S += egg[now].W;		
//	}
//
//	//��� �����ִٸ� �ٷ� ������ �ɷ� ������ ������
//	if (flag == 0)
//		DFS(N);
//}
//
//void solve()
//{
//	DFS(0);
//
//	cout << MAX << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}