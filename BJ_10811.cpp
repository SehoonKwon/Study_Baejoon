#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;
	vector<int> v(N + 1);
	for (int i = 1; i < N + 1; i++)
		v[i] = i;

	for (int i = 0; i < M; i++)
	{
		int a, b;
		cin >> a >> b;
		reverse(v.begin() + a, v.begin() + b + 1);
	}

	for (int i = 1; i < N + 1; i++)
		cout << v[i] << " ";

	return 0;
}
