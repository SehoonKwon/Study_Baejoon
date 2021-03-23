#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// LIS 연습 + LIS 역추적

int N;
int Array[1000001];
vector<int> LIS;

struct point
{
	int idx; // LIS의 배열을 만드는 원래 배열의 idx
	int val; // LIS의 배열을 만드는 원래 배열의 idx에 해당하는 값
};

vector<point> ans(1000001);

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	LIS.push_back(Array[0]); //첫 값 넣기
	ans[0] = { 0, Array[0] };

	for (int i = 1; i < N; i++)
	{
		if (LIS.back() < Array[i]) //LIS 벡터의 마지막 원소가 Arr[idx]값 보다 작으면 조건 만족이므로 벡터에 추가
		{
			ans[i] = { (int)LIS.size(), Array[i] }; //idx와 원래 값 넣어주기
			LIS.push_back(Array[i]); //이게 먼저오면 LIS 사이즈 때문에 idx 값이 안맞음
		}
		else //LIS 벡터의 마지막 원소보다 작은 경우엔 LIS 벡터 새로 갱신, 이때 위치 찾는 것은 로어바운드
		{
			int idx = lower_bound(LIS.begin(), LIS.end(), Array[i]) - LIS.begin();
			LIS[idx] = Array[i];
			ans[i] = { idx, Array[i] }; // idx와 원래 값 바꿔주기
		}
	}

	//LIS의 값
	cout << LIS.size() << "\n";

    //LIS 역추적
	stack<int> stk;
	int t = LIS.size() - 1; //idx가 0부터 시작이므로 -1 해주기
	for (int i = N - 1; i > -1; i--)
	{
		if (ans[i].idx == t)
		{
			stk.push( ans[i].val );
			t--;
		}
	}

	//LIS 배열
	while (!stk.empty())
	{
		cout << stk.top() << " ";
		stk.pop();
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
