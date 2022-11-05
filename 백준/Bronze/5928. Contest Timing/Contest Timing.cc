#include <iostream>
using namespace std;

int D, H, M;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> D >> H >> M;

	int d = D - 11;
	int h = H - 11;
	int m = M - 11;

	int time = d * 1440 + h * 60 + m;

	if (time < 0) time = -1;
	cout << time;

	return 0;
}