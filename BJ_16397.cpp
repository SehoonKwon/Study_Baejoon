#include <iostream>
#include <queue>
#include <string>
using namespace std;

#define MAX 100000

int N, T, G;
int visit[100001];

struct point
{
	int val;
	int step;
};
queue<point> q;

void input()
{
	cin >> N >> T >> G;
}

int calcul(int X)
{
	if (X == 0) return X;

	string s = to_string(X);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != 0)
		{
			s[i]--;
			break;
		}
	}

	int res = stoi(s);
	return res;
}

int BFS()
{
	q.push({ N, 0 });
	visit[N] = true;

	while (!q.empty())
	{
		int X = q.front().val;
		int step = q.front().step;
		q.pop();

		if (X == G)
			return step;

		if (step == T) continue;

		// Button A
		int nx = X + 1;
		if (nx < MAX && visit[nx] == false)
		{
			visit[nx] = true;
			q.push({ nx, step + 1 });
		}

		// Button B
		nx = X * 2;
		if (nx < MAX)
		{
			nx = calcul(nx);
			if (nx < MAX && visit[nx] == false)
			{
				visit[nx] = true;
				q.push({ nx, step + 1 });
			}
		}
	}

	return -1;
}

void solve()
{
	int c = BFS();
	if(c == -1) cout << "ANG";
	else cout << c;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
