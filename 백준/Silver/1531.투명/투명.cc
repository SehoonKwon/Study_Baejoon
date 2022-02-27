#include <iostream>
using namespace std;

int N, M;
int Array[101][101];

int main()
{
	cin >> N >> M;
	while (N--)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1; i <= x2; i++)
			for (int j = y1; j <= y2; j++)
				Array[i][j]++;
	}

	int ans = 0;
	for (int i = 1; i < 101; i++)
		for (int j = 1; j < 101; j++)
			if (Array[i][j] > M) ans++;

	cout << ans;
	return 0;
}