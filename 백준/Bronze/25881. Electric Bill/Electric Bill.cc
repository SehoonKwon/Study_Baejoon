#include <iostream>
using namespace std;

int main() {

	int p1, p2;
	cin >> p1 >> p2;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int w;
		cin >> w;
		cout << w << " ";
		if (w <= 1000)
			cout << p1 * w;
		else {
			int sum = p1 * 1000;
			sum += p2 * (w - 1000);
			cout << sum;
		}
		cout << "\n";
	}

	return 0;
}