#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	int M = (A + B + C) / 3;

	int sum = 0;
	while (1) {
		if (A == B && B == C && C == M) break;

		if (A < M) {
			if (B > M) {
				A++;
				B--;
				sum++;
			}
			else {
				A++;
				C--;
				sum += 2;
			}
		}

		if (B < M) {
			if (A > M) {
				A--;
				B++;
				sum++;
			}
			else {
				B++;
				C--;
				sum++;
			}
		}

		if (C < M) {
			if (B > M) {
				B--;
				C++;
				sum++;
			}
			else {
				C++;
				A--;
				sum += 2;
			}
		}
	}

	cout << sum;

	return 0;
}