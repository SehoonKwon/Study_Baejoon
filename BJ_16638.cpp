//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
////calcul���� ó���� vector<char> �ϳ��� ������ �̷��� ������� ���� int���� 2�ڸ� �� �̻��ϰ�� char[1] ��ĭ�� ���� ���ؼ� Ʋ�Ⱦ���.
//
//int N;
//string s;
//int visit[19]; //��ȣ ���� üũ
//int MAX = -2147483648;
//
//void input()
//{
//	cin >> N;
//	cin >> s;
//}
//
//int oper(int A, int B, char C)
//{
//	if (C == '+') return A + B;
//	else if (C == '-') return A - B;
//	else if (C == '*') return A*B;
//}
//
//int calcul()
//{
//	vector<int> num;
//	vector<char> O;
//	for (int i = 0; i < N;)
//	{
//		if (visit[i] == true)
//		{
//			int A = s[i] - '0', B = s[i + 2] - '0';
//			int R = oper(A, B, s[i + 1]);
//			num.push_back(R);
//			i = i + 3;
//		}
//		else
//		{
//			if ((i % 2) == 0) num.push_back(s[i] - '0');
//			else O.push_back(s[i]);
//			i++;
//		}
//	}
//
//	//1���� �߰��Ǵ� �κ�, * ������ �켱������ ���� ����ϱ�
//	for (int i = 0; i < O.size(); i++)
//	{
//		if (O[i] == '*')
//		{
//			int R = oper(num[i], num[i + 1], O[i]);
//			num[i] = R;
//			num.erase(num.begin() + i + 1);
//			O.erase(O.begin() + i);
//			i--; //�ش� �ε��� �������� �������鼭 ���ο� �������ε� i--�� �����ָ� �˻����� �ʰ� �Ѿ����
//		}
//	}
//
//	int res = num[0];
//	for (int num_cnt = 1, O_cnt = 0; O_cnt < O.size(); num_cnt++, O_cnt++)
//	{
//		res = oper(res, num[num_cnt], O[O_cnt]);
//	}
//
//	return res;
//}
//
//void DFS(int idx)
//{
//	if (idx > N - 2)
//	{
//		int c = calcul();
//		if (c > MAX) MAX = c;
//		return;
//	}
//
//	//���� ĭ�� ��ȣ�� �߰� �����Ҷ�
//	for (int i = idx; i < N; i = i + 2)
//	{
//		if (i < N - 2)
//		{
//			//���� ĭ�� ��ȣ�� �߰��ϴ� ���
//			if (visit[i] == false && visit[i + 2] == false)
//			{
//				visit[i] = true;
//				visit[i + 2] = true;
//				DFS(i + 2);
//				visit[i] = false;
//				visit[i + 2] = false;
//			}
//
//			//���� ĭ�� ��ȣ�� �߰����� �ʴ� ���
//			//�ش� �۾� �����൵ for������ ���� ��ȣ ���� �Ͱ� ���� ȿ��
//		}
//		else
//			DFS(i + 1);
//	}
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