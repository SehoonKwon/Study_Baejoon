#include <iostream>
#include <algorithm>
using namespace std;

int Array[5];

int main()
{
	for (int i = 0; i < 5; i++)
		cin >> Array[i];

	sort(Array, Array + 5);

	int ans = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++)
			for (int k = j + 1; k < 5; k++)
				if (Array[i] + Array[j] > Array[k]) ans++;
	}

	cout << ans;

	return 0;
}