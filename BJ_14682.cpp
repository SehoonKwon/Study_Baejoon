#include <iostream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	long long n = (long long)N;
	long long sum = n;
	for (int i = 1; i <= K; i++) {
		n *= 10;
		sum += n;
	}

	cout << sum;

	return 0;
}
