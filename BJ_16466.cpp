#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> v;

void input()
{
	cin >> N;
	for(int i=0; i<N; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
}

void solve()
{
	sort(v.begin(), v.end());
	int idx = 0;
	for(int i=1; ; i++)
	{
		if(i == v[idx])
			idx++;
		else
		{
			cout << i;
			return;
		}
	}
	
}

int main() {
	
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
