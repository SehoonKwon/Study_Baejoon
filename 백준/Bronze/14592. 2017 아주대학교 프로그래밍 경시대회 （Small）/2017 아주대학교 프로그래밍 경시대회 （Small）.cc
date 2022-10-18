#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;

struct point
{
	int idx;
	int score;
	int cnt;
	int time;
};
vector<point> v;

void input()
{
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int s, c, t;
		cin >> s >> c >> t;
		v.push_back({ i, s, c, t });
	}
}

bool cmp(const point& u, const point& v)
{
	if (u.score > v.score) return true;
	else if (u.score == v.score) {
		if (u.cnt < v.cnt) return true;
		else if (u.cnt == v.cnt) {
			if (u.time < v.time) return true;
			else return false;
		}
		else return false;
	}
	else return false;
}

void solve()
{
	sort(v.begin(), v.end(), cmp);
	cout << v[0].idx;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}