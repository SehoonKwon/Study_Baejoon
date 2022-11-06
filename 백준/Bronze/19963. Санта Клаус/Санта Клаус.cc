#include <iostream>
#include <string>
using namespace std;

int N, M, K;
int Array[101];

int main() {

	cin >> N >> M >> K;

	int x;
	for (int i = 0; i < M; i++) {
		cin >> x;
		Array[x]++;
	}


	for (int i = 0; i < K; i++) {
		cin >> x;
		Array[x]++;
	}

	cout << N - (M + K) << "\n";
	for (int i = 1; i <= N; i++)
		if (!Array[i]) cout << i << " ";

	return 0;
}