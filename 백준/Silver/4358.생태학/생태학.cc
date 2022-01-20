#include <iostream>
#include <string>
#include <map>
using namespace std;

#define endl "\n"

int N, cnt;
map<string, double> mymap;

void input()
{
	string s;
	while (1)
	{
		getline(cin, s);
		if (cin.eof() == true) return;
		mymap[s]++;
		cnt++;
	}
}

void solve()
{
	cout << fixed;
	cout.precision(4);
	for (auto it : mymap)
		cout << it.first << " " << it.second * 100 / cnt << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	solve();
	return 0;
}