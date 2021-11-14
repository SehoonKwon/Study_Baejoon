#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N, M;
int Array[1001][1001];
int dx[] = { 0, 0, -1, 1 };
int dy[] = { 1, -1, 0, 0 };
int dir_table[4][2] = { {2, 3}, {3, 2}, {1, 0}, {0, 1} };
vector<string> sv;
vector<int> iv;

void input()
{
	cin >> M >> N;

	string s;
	int x;
	for (int i = 0; i < N; i++)
	{
		cin >> s >> x;
		sv.push_back(s);
		iv.push_back(x);
	}
}

void solve()
{
	int X = 0, Y = 0, dir = 3;
	for (int i = 0; i < N; i++)
	{
		if (sv[i] == "TURN")
			dir = dir_table[dir][iv[i]];
		else
		{
			X += (dx[dir] * iv[i]);
			Y += (dy[dir] * iv[i]);

			if (X < 0 || X > M || Y < 0 || Y > M)
			{
				cout << -1;
				return;
			}
		}
	}

	cout << X << " " << Y;
}

int main()
{
	input();
	solve();
	return 0;
}
