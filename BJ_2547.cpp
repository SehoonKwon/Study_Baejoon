#include <iostream>
using namespace std;

//오버플로우 신경써야 하는 문제

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N;

		unsigned long long int sum = 0;
		unsigned long long int x;
		for (int i = 0; i < N; i++)
		{
			cin >> x;
			if (x%N == 0)
				continue;
			sum += x;
			sum %= N;
		}

		if (sum%N == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}
