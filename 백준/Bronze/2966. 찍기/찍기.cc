#include <iostream>
#include <string>
using namespace std;

int Array[3];
char S[3] = { 'A','B','C' };
char C[4] = { 'B','A','B','C' };
char H[6] = { 'C','C','A','A','B','B' };

int main() {
	
	int N;
	string s;
	cin >> N >> s;
	
	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (S[i % 3] == s[i]) Array[0]++;
		if (C[i % 4] == s[i]) Array[1]++;
		if (H[i % 6] == s[i]) Array[2]++;
	}

	int res = 0;
	for (int i = 0; i < 3; i++)
		if (res < Array[i]) res = Array[i];
	cout << res << "\n";

	if (Array[0] == res) cout << "Adrian" << "\n";
	if (Array[1] == res) cout << "Bruno" << "\n";
	if (Array[2] == res) cout << "Goran" << "\n";

	return 0;
}