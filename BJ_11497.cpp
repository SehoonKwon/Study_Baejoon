#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int N;
vector<int> v;

void input()
{
	cin >> N;
	v.clear();
	v.resize(N);
	
	for(int i=0; i<N; i++)
		cin >> v[i];
}

void solve()
{
	sort(v.begin(), v.end());
	
	vector<int> tv;
	tv.resize(N);
	
	int l = 0, r = N-1;
	for(int i = 0; i < N; i++)
	{
		if(i%2)
		{
			tv[r] = v[i];
			r--;
		}
		else
		{
			tv[l] = v[i];
			l++;
		}
		
	}
	
	int MAX = abs(tv.back() - tv[0]);
	for(int i=0; i < N - 1; i++)
		if(MAX < abs(tv[i+1] - tv[i])) MAX = abs(tv[i+1]-tv[i]);
		
	cout << MAX << "\n";
}

int main() {
	
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;
	while(T--)
	{
		input();
		solve();
	}
	
	return 0;
}
