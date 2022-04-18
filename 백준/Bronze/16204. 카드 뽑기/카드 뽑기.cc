#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N,M,K;
	cin >> N >> M >> K;
	int A = min(M, K);
	int B = min(N-M, N-K);
	cout<<A+B;
	return 0;
}