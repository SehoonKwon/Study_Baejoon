#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int N;
int Array[100001];

void input()
{
	cin >> N;
	for(int i=0; i<N; i++)
		cin>>Array[i];
}

void solve()
{
	long long int sum = 0;
	sort(Array, Array+N, greater<int>());
	
	for(int i=0; i<N; i++)
	{
		if(Array[i]-i > 0)
			sum +=(Array[i]-i);
	}
	cout<<sum;
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	solve();
	return 0;
}