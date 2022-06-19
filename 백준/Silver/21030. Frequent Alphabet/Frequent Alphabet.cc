#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Array[27][100001];
int cArray[27];

int main() {

	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	string s1, s2;
	cin >> N >> s1 >> s2;

	int MAX = -1;
	for (int i = 0; i < N; i++){
		char c1 = s1[i] - 'a';
		char c2 = s2[i] - 'a';

		if (Array[c1][i] == 0) {
			Array[c1][i] = 1;
			cArray[c1]++;
		}

		if (Array[c2][i] == 0) {
			Array[c2][i] = 1;
			cArray[c2]++;
		}

		MAX = max(MAX, max(cArray[c1], cArray[c2]));
	}
	cout << MAX;
	return 0;
}