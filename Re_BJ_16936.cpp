//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////브루트포스처럼 하는 것이 아니라 문제를 이해하면 단순 정렬문제로 바뀐다.(맨 밑에 해설)
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
////곱하기 2는 모든 경우에서 가능하지만 나누기3은 나누어 떨어질때만 가능하므로 한정돼있다. 따라서 어떤 수를 3이 들어간 횟수를 기준으로 정렬
////나누기를 해주면 3의 개수가 줄어드므로 3에 대해서는 내림차순, 곱하기2는 수가 커지는 것이므로 오름차순으로 정렬