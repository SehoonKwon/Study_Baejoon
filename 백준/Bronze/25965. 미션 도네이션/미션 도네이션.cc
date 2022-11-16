#include <iostream>
using namespace std;

#define ll long long

ll Array[101][3];

int main() {
	int N;
	cin >> N;

	while (N--) {
		ll K = 0, D = 0, A = 0;
		int M;
		cin >> M;

		ll res = 0;
		
		for (int i = 0; i < M; i++)
			for (int j = 0; j < 3; j++)
				cin >> Array[i][j];

		ll k, d, a;
		cin >> k >> d >> a;

		ll temp = 0;
		for (int i = 0; i < M; i++) {
			temp = Array[i][0] * k - Array[i][1] * d + Array[i][2] * a;
			if (temp < 0) temp = 0;
			res += temp;
		}

		cout << res << "\n";
	}

	return 0;
}