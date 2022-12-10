#include <iostream>
#include <cmath>
using namespace std;

int Array[10001];

int main() {

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Array[i];

	long long sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++)
			sum += (long long)abs(Array[i] - Array[j]);
	}
	cout << 2*sum;
	return 0;
}