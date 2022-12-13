#include <iostream>
#include <algorithm>
using namespace std;

int Array[2][5];

int main() {

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++)
			cin >> Array[i][j];

		sort(Array[i], Array[i] + 5);
	}

	int cnt = 0;
	for (int i = 0; i < 5; i++)
		if (Array[0][i] > Array[1][i]) cnt++;

	cout << cnt;

	return 0;
}