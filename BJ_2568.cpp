#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

#define MAX 100001
#define endl "\n"

int N;
int connect_line[500001];

struct LINE
{
	int a;
	int b;
};
vector<LINE> v;

struct Trace
{
	int idx;
	int val;
};

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ x, y });
		connect_line[x] = true; // 제시된 선 중 A 전봇대 라인 체크
	}
}

bool cmp(const LINE& u, const LINE& v)
{
	if (u.a < v.a) return true;
	else return false;
}

void solve()
{
	sort(v.begin(), v.end(), cmp);

	vector<Trace> tv(N); //역추적용 벡터
	
	//LIS
	int temp = v[0].b;
	vector<int> lv;
	lv.push_back(temp);
	tv[0] = { 0, v[0].a };

	for (int i = 1; i < v.size(); i++)
	{
		int next = v[i].b;
		int lineA = v[i].a;
		if (lv.back() < next)
		{
			tv[i] = { (int)lv.size(), lineA };
			lv.push_back(next);
		}
		else
		{
			vector<int>::iterator it = lower_bound(lv.begin(), lv.end(), next);
			int idx = it - lv.begin();
			lv[idx] = next;			
			tv[i] = { idx, lineA };
		}
	}

	cout << N - lv.size() << endl;

	//LIS Trace
	int t = lv.size() - 1; //t가 인덱스인데 0까지 가야하므로 -1 하고 시작
	
	stack<int> stk;
	for (int i = N - 1; i > -1; i--)
	{
		if (tv[i].idx == t)
		{
			stk.push(tv[i].val);
			t--;
		}
	}

	while (!stk.empty())
	{
		int x = stk.top();
		connect_line[x] = false; //LIS와 연결된 A 전봇대 선은 지우지 않기 위해 false 체크
		stk.pop();
	}

	for (int i = 1; i < 500001; i++)
		if (connect_line[i]) //주어진 선 인데 false로 체크가 안바뀌었다면 지워야 될 선
			cout << i << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
