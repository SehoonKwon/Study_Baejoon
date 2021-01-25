#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long int

int N;

struct point
{
	ll val;
	int cnt;
};

vector<point> v;
vector<ll> nv;
map<ll, int> mymap;

void input()
{
	cin >> N;
	for(int i=0; i<N; i++)
	{
		ll x;
		cin >> x;
		if(mymap[x] == 0) nv.push_back(x);
		mymap[x]++;
	}
}

bool cmp(const point& u, const point& v)
{
	if(u.cnt > v.cnt) return true;
	else if(u.cnt == v.cnt)
	{
		if(u.val < v.val) return true;
		else return false;
	}
	else return false;
}

void solve()
{
	for(auto it : nv)
	{
		int ncnt = mymap[it];
		v.push_back({it, ncnt});
	}
	
	sort(v.begin(), v.end(), cmp);
	cout<<v[0].val;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	input();
	solve();
	return 0;
}
