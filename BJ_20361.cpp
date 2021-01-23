#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, X, K;

struct point
{
	int num;
	int ball;
};

int main()
{
	cin >> N >> X >> K;
	vector<point> v(N + 1);
	v[X].ball = 1;

	for (int i = 0; i < K; i++)
	{
		int a, b;
		cin >> a >> b;
		swap(v[a], v[b]);
	}

	for (int i = 1; i < N + 1; i++)
	{
		if (v[i].ball == true)
		{
			cout << i;
			break;
		}
	}

	return 0;
}
