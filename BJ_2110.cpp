#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, C;
vector<int> v;

void input()
{
	cin >> N >> C;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
}

void solve()
{
	sort(v.begin(), v.end());

	int e = v.back() - v[0]; // MAX Len
	int s = 1; // MIN Len
	int ans = 0;

	while (s <= e)
	{
		int mid = (s + e) / 2; // 간격
		int cnt = 1; // 공유기 놓는 수(처음 한개)
		int now = v[0];

		for (int i = 1; i < v.size(); i++)
		{
			int d = v[i] - now; // 인접한 공유기 사이 거리
			if (mid <= d) // 인접한 공유기 사이 거리가 기준 간격 이상이면 공유기 개수 ++
			{
				cnt++;
				now = v[i]; // 새로 놓을 수 있을 때만 위치 갱신
			}
		}

		if (cnt >= C) //설치한 공유기 수가 기준 이상이면 => 가능한 것이므로 최댓값 갱신 후 간격 넓히기
		{
			s = mid + 1;
			ans = mid;
		}
		else //설치 공유기 수가 적으면 간격 줄이기
			e = mid - 1;
	}

	cout << ans;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
