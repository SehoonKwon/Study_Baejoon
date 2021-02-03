#include <iostream>
#include <map>
#include <string>
using namespace std;

int N, M;
map<string, int> mymap;
string str[100001];

void input()
{
	cin >> N >> M;
	string s;
	for (int i = 1; i < N + 1; i++)
	{
		cin >> s;
		str[i] = s;
		mymap[s] = i;
	}
}

void solve()
{
	string s;
	for (int i = 0; i < M; i++)
	{
		cin >> s;
		if (s[0] >= '0' && s[0] <= '9')
		{
			int x = stoi(s);
			cout << str[x] << "\n";
		}
		else
		{
			int x = mymap[s];
			cout << x << "\n";
		}
	
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
