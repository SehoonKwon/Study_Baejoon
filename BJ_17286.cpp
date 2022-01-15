#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int yx, yy;
int MIN = (int)1e9;
int visit[3];
vector<int> v;
struct point
{
	int x;
	int y;
};
point Array[3];

void input()
{
	cin >> yx >> yy;
	int x, y;
	for (int i = 0; i < 3; i++)
	{
		cin >> x >> y;
		Array[i].x = x;
		Array[i].y = y;
	}
}

int calcul()
{
	int tx = yx, ty = yy;
	double sum = 0;
	for (int i = 0; i < 3; i++)
	{
		int X = Array[v[i]].x;
		int Y = Array[v[i]].y;

		double res = pow(X - tx, 2) + pow(Y - ty, 2);
		res = sqrt(res);
		sum += res;

		tx = X;
		ty = Y;
	}

	return (int)sum;
}

void DFS()
{
	if (v.size() == 3)
	{
		MIN = min(MIN, calcul());
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		if (visit[i] == true) continue;
		visit[i] = true;
		v.push_back(i);
		DFS();
		v.pop_back();
		visit[i] = false;
	}
}

void solve()
{
	DFS();
	cout << MIN;
}

int main()
{
	input();
	solve();
	return 0;
}
