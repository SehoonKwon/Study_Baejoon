//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
////브루트포스라고 무턱대로 전부 검사하는 것이 아니라 효율적으로 검사하기
////나는 모든 점에 대해서 붙여보는 시도를 하려했으나 이것보다는 붙일 수 있는 경우를 생각해보고 직접 붙이지 않고 바로 검사
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
//					//스티커를 붙이는 방법은 수평으로 이어붙이거나, 수직으로 붙이기. (가로 한줄로 붙이나 세로한줄로 붙이나는 회전시키며 보면 결국 같음)
//					if (R1 + R2 <= H && max(C1, C2) <= W) // 수평으로 이어붙었을 경우 둘 중 큰 높이만 모눈종이를 안넘으면 됌.
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