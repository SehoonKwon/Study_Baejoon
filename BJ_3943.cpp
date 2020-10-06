#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		cin >> N;
		vector<int> v;

		while (1)
		{
			v.push_back(N);
			if (N == 1) break;

			if (N % 2)
				N = N * 3 + 1;
			else
				N /= 2;
		}

		sort(v.begin(), v.end());
		cout << v[v.size() - 1] <<"\n";
	}

	return 0;
}
