#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// LIS 연습

int N;
int Array[1000001];
vector<int> v;
int len;

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	v.push_back(Array[0]); //첫 값 넣기
	for (int i = 1; i < N; i++)
	{
		if (v[len] < Array[i]) //LIS 벡터의 마지막 원소가 Arr[idx]값 보다 작으면 조건 만족이므로 벡터에 추가
		{
			v.push_back(Array[i]);
			len++;
		}
		else //LIS 벡터의 마지막 원소보다 작은 경우엔 LIS 벡터 새로 갱신, 이때 위치 찾는 것은 로어바운드
		{
			int idx = lower_bound(v.begin(), v.end(), Array[i]) - v.begin();
			v[idx] = Array[i];
		}
	}
	cout << v.size();
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
