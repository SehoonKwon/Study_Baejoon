#include <iostream>
#include <algorithm>
using namespace std;

int H, W;
int Array[501];

void input()
{
	cin >> H >> W;
	for (int i = 0; i < W; i++)
		cin >> Array[i];
}

void solve()
{
	int sum = 0;
	for (int i = 0; i < W; i++)
	{
		int l = 0, r = 0;
		if (i > 0)
		{
			for (int j = i - 1; j >= 0; j--)
				l = max(l, Array[j]);
		}
		else
			l = Array[i]; //왼쪽 끝일 땐 자기가 기준

		if (i < W - 1)
		{
			for (int j = i + 1; j < W; j++)
				r = max(r, Array[j]);
		}
		else
			r = Array[i];

		int rain = min(l, r);
		if (rain < Array[i]) continue;
		sum += (rain - Array[i]);
	}

	cout << sum;
}

int main()
{
	input();
	solve();
	return 0;
}
