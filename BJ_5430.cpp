#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <deque>
using namespace std;

string p;
int N;
deque<int> dq;

void input()
{
	dq.clear();
	cin >> p;
	cin >> N;
	if (N == 0)
	{
		string q;
		cin >> q;
		return;
	}

	for (int i = 0; i <= 2*N; i++)
	{
		if (i % 2)
		{
			int x;
			cin >> x;
			dq.push_back(x);
		}
		else
		{
			char x;
			cin >> x;
		}
	}
}

void solve()
{
	int fb = 1; // 1은 front, -1은 back
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] == 'D')
		{
			if (dq.size() <= 0)
			{
				cout << "error\n";
				return;
			}

			if (fb == 1)
				dq.pop_front();
			else
				dq.pop_back();
		}
		else
		{
			fb = -fb;
		}
	}

	int idx = 0;
	if (fb == -1) reverse(dq.begin(), dq.end());
	cout << "[";
	for (int i = 0; i < dq.size(); i++)
	{
		cout << dq[i];
		if (i != dq.size() - 1) cout << ",";
	}
	cout << "]\n";
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		input();
		solve();
	}
	return 0;
}
