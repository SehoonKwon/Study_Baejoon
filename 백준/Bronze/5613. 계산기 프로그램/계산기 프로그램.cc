#include <iostream>
using namespace std;

int main() {
	int X;
	char c;

	int cnt = 0;
	int sum = 0;
	while (1) {
		if (cnt % 2) {
			cin >> c;
			if (c == '=') {
				cout << sum;
				return 0;
			}
		}
		else {
			cin >> X;
			if (cnt) {
				if (c == '+') sum += X;
				else if (c == '-') sum -= X;
				else if (c == '*') sum *= X;
				else if (c == '/') sum /= X;
			}
			else sum = X;
		}
		cnt++;
	}

	return 0;
}