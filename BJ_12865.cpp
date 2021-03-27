#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, W;
int DP[101][100001]; // 개수 x 무게 테이블

struct point
{
	int w;
	int p;
};

vector<point> v;

void input()
{
	cin >> N >> W;

	int w, p;
	v.push_back({ 0, 0 }); //dummy
	for (int i = 0; i < N; i++)
	{
		cin >> w >> p;
		v.push_back({ w, p });
	}
}

bool cmp(point& u, point& v)
{
	if (u.w < v.w) return true;
	else return false;
}

void solve()
{
	sort(v.begin(), v.end(), cmp);

	int MAX = 0;
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 0; j <= W; j++)
		{
			if (v[i].w > j) // j 무게 자체를 초과해버려서 아예 못넣는경우
				DP[i][j] = DP[i - 1][j];
			else
				DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - v[i].w] + v[i].p); //안넣는 경우 vs 넣는경우(이전 넣었을 때의 값과의 연동)
			
			MAX = max(MAX, DP[i][j]);
		}
	}

	cout << MAX;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
