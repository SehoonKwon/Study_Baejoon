#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int N, M;
int Array[28];
string s[101];

int main()
{
	cin >> N >> M;
	char nM = char('A' + M);
	for (int i = 0; i < N; i++)
		cin >> s[i];

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int sCnt = 0;
		memset(Array, 0, sizeof(Array));

		for (int j = 0; j < s[i].size(); j++) {
			char c = s[i][j];
			if (c >= 'A' && c < nM && Array[int(c - 'A')] < 1) {
				sCnt++;
				Array[int(c - 'A')]++;
			}
		}
		if (sCnt == s[i].length()) cnt++;
	}

	cout << cnt;

	return 0;
}