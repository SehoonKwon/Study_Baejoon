//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define endl "\n"
//
////set~Ro�κп��� ������ ���������� �ϳ��� ���Ϳ� ȸ���������� ������ idx ������ ����� �ʿ���� 1ĭ�� +���ְ� Array�� �� �������ָ� ��
////�ٽ� Ǯ��� �ּ�ó�� ���� �� ȿ�������� ¥����
//
//int N, M, R;
//int Array[301][301];
//
//vector<int> u, r, d, l;
//
//void input()
//{
//	cin >> N >> M >> R;
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			cin >> Array[i][j];
//}
//
//void Rotate(int g_cnt)
//{
//	int v_idx = 0;
//	for (int i = g_cnt; i < M - g_cnt - 1; i++)
//	{
//		Array[g_cnt][i] = u[v_idx + 1];
//		v_idx++;
//		if (v_idx == u.size() - 1)
//		{
//			v_idx = 0;
//			break;
//		}
//	}
//	for (int i = g_cnt; i < N - g_cnt - 1; i++)
//	{
//		Array[i][M - 1 - g_cnt] = r[v_idx + 1];
//		v_idx++;
//		if (v_idx == r.size() - 1)
//		{
//			v_idx = d.size() - 1;
//			break;
//		}
//	}
//	for (int i = M - g_cnt - 1; i > g_cnt; i--)
//	{
//		Array[N - 1 - g_cnt][i] = d[v_idx - 1];
//		v_idx--;
//		if (v_idx == 0)
//		{
//			v_idx = l.size() - 1;
//			break;
//		}
//	}
//	for (int i = N - g_cnt - 1; i > g_cnt; i--)
//	{
//		Array[i][g_cnt] = l[v_idx - 1];
//		v_idx--;
//		if (v_idx == 0)
//			break;
//	}
//}
//
//void set_groups(int g_cnt)
//{
//	u.clear();
//	r.clear();
//	d.clear();
//	l.clear();
//
//	for (int i = g_cnt; i < M - g_cnt; i++)
//		u.push_back(Array[g_cnt][i]);
//	for (int i = g_cnt; i < N - g_cnt; i++)
//		r.push_back(Array[i][M - 1 - g_cnt]);
//	for (int i = g_cnt; i < M - g_cnt; i++)
//		d.push_back(Array[N - 1 - g_cnt][i]);
//	for (int i = g_cnt; i < N - g_cnt; i++)
//		l.push_back(Array[i][g_cnt]);
//}
//
//void PRT()
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//			cout << Array[i][j] << " ";
//		cout << endl;
//	}
//}
//
//void solve()
//{
//	//�׷� �� ���ϱ�
//	int g_cnt = min(N, M) / 2;
//
//	//������ �ٸ� �׷쿡�� ������ ���ִϱ� �׷��� ���� ���ϰ� R�� ȸ���� �ȿ� for���� ������ R % �׵θ�(�׷�) ������� ����� Ƚ�� ���̱� ����
//	for (int k = 0; k < R; k++)
//	{
//		for (int i = 0; i < g_cnt; i++)
//		{
//			//�׷� ����(�׷� = �׵θ�)
//			set_groups(i);
//			Rotate(i);
//		}
//	}
//
//	PRT();
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