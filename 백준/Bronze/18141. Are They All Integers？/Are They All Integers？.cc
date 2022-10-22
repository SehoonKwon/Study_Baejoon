#include <iostream>
using namespace std;

int Array[51];

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Array[i];

	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			if (i == k) continue;
			for (int j = 0; j < N; j++) {
				if (j == k || j == i) continue;
				if ((Array[i] - Array[j]) % Array[k] != 0) {
					cout << "no";
					return 0;
				}
			}
		}
	}
	cout << "yes";
	return 0;
}