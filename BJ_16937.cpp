//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
////���Ʈ������� ���δ�� ���� �˻��ϴ� ���� �ƴ϶� ȿ�������� �˻��ϱ�
////���� ��� ���� ���ؼ� �ٿ����� �õ��� �Ϸ������� �̰ͺ��ٴ� ���� �� �ִ� ��츦 �����غ��� ���� ������ �ʰ� �ٷ� �˻�
//
//int H, W, N;
//int Array[100][100];
//int MAX = 0;
//
//struct point
//{
//	int r;
//	int c;
//};
//
//vector<point> v;
//
//void input()
//{
//	cin >> H >> W;
//	cin >> N;
//	
//	int R, C;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> R >> C;
//		v.push_back({ R,C });
//	}
//}
//
//void solve()
//{
//	for (int i = 0; i < v.size() - 1; i++)
//	{
//		for (int j = i + 1; j < v.size(); j++)
//		{
//			int R1 = v[i].r, C1 = v[i].c, R2 = v[j].r, C2 = v[j].c;
//			
//			for (int k = 0; k < 2; k++)
//			{
//				for (int l = 0; l < 2; l++)
//				{
//					//��ƼĿ�� ���̴� ����� �������� �̾���̰ų�, �������� ���̱�. (���� ���ٷ� ���̳� �������ٷ� ���̳��� ȸ����Ű�� ���� �ᱹ ����)
//					if (R1 + R2 <= H && max(C1, C2) <= W) // �������� �̾�پ��� ��� �� �� ū ���̸� �����̸� �ȳ����� ��.
//						MAX = max(MAX, R1*C1 + R2 * C2);
//
//					if(max(R1,R2) <= H && C1+C2 <= W)
//						MAX = max(MAX, R1*C1 + R2 * C2);
//
//					swap(R2, C2);
//				}
//
//				swap(R1, C1);
//			}
//		}
//	}
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