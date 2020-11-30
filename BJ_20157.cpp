#include <iostream>
#include <map>
using namespace std;

int N;
map<double, int> map1, map2, map3, map4;

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		double a, b;
		cin >> a >> b;
		double ab = b / a;
		if (a >= 0 && b >= 0) map1[ab]++;
		else if (a < 0 && b >= 0) map2[ab]++;
		else if (a < 0 && b < 0) map3[ab]++;
		else if (a >= 0 && b < 0) map4[ab]++;
	}
}

void solve()
{
	int MAX = 0;
	for (map<double,int>::iterator iter = map1.begin(); iter != map1.end(); iter++)
		if (MAX < iter->second) MAX = iter->second;

	for (map<double, int>::iterator iter = map2.begin(); iter != map2.end(); iter++)
		if (MAX < iter->second) MAX = iter->second;

	for (map<double, int>::iterator iter = map3.begin(); iter != map3.end(); iter++)
		if (MAX < iter->second) MAX = iter->second;

	for (map<double, int>::iterator iter = map4.begin(); iter != map4.end(); iter++)
		if (MAX < iter->second) MAX = iter->second;

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
