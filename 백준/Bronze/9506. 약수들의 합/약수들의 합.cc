#include <iostream>
#include <vector>
using namespace std;

int N;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (1) {
		cin >> N;
		if (N == -1) break;

		int sum = 0;
		vector<int> v;
		for (int i = 1; i < N; i++)
			if (N % i == 0) {
				sum += i;
				v.push_back(i);
			}
		if (sum != N) cout << N << " is NOT perfect.\n";
		else {
			cout << N << " = ";
			for (const auto& it : v) {
				cout << it;
				if(it != v.back()) cout << " + ";
			}
			cout << "\n";
		}
	}

	return 0;
}