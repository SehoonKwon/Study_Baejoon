//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////���Ʈ����ó�� �ϴ� ���� �ƴ϶� ������ �����ϸ� �ܼ� ���Ĺ����� �ٲ��.(�� �ؿ� �ؼ�)
//
//int N;
//
//struct point
//{
//	int thr_cnt;
//	long long num;
//};
//
//vector<point> v;
//
//int calcul(long long X)
//{
//	int cnt = 0;
//	while (X%3 == 0)
//	{
//		X /= 3;
//		cnt++;
//	}
//
//	return cnt;
//}
//
//void input()
//{
//	cin >> N;
//	
//	long long X;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> X;
//		if (X % 3 == 0)
//		{
//			int c = calcul(X);
//			v.push_back({ c, X });
//		}
//		else
//			v.push_back({ 0, X });
//	}
//}
//
//bool cmp(point& u, point& v)
//{
//	if (u.thr_cnt > v.thr_cnt) return true;
//	else if (u.thr_cnt == v.thr_cnt)
//	{
//		if (u.num < v.num) return true;
//		else return false;
//	}
//	else return false;
//}
//
//void solve()
//{
//	sort(v.begin(), v.end(), cmp);
//
//	for (int i = 0; i < N; i++)
//		cout << v[i].num << " ";
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
//
////���ϱ� 2�� ��� ��쿡�� ���������� ������3�� ������ ���������� �����ϹǷ� �������ִ�. ���� � ���� 3�� �� Ƚ���� �������� ����
////�����⸦ ���ָ� 3�� ������ �پ��Ƿ� 3�� ���ؼ��� ��������, ���ϱ�2�� ���� Ŀ���� ���̹Ƿ� ������������ ����