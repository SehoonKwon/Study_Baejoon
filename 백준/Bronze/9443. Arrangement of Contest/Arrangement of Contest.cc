#include <iostream>
#include <string>
using namespace std;

int N;
int Array[28];
string s[101];

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s[i];
		Array[s[i][0] - 'A']++;
	}

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (Array[i] == 0) break;
		cnt++;
	}

	cout << cnt;
	return 0;
}