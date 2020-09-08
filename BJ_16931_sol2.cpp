//#include <iostream>
//using namespace std;
//
////더 빠른 방법의 코드.
////윗면과 아랫면은 넓이이므로 먼저 계산해주고 각 층에 대해서 옆칸과 비교해서 얼마나 보여지는지를 계산
//
//int a[102][102];
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> a[i][j];
//		}
//	}
//	int ans = 2 * n*m;
//	for (int x = 1; x <= n; x++) {
//		for (int y = 1; y <= m; y++) {
//			for (int k = 0; k<4; k++) {
//				int nx = x + dx[k];
//				int ny = y + dy[k];
//				if (a[x][y] - a[nx][ny] >= 0) {
//					ans += a[x][y] - a[nx][ny];
//				}
//			}
//		}
//	}
//	cout << ans << '\n';
//	return 0;
//}