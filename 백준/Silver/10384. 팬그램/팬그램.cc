#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int Array[26];

int main() {
	int T;
	cin >> T;
	cin.ignore();
	for (int num = 1; num <= T; num++)
	{
		memset(Array, 0, sizeof(Array));
		string s;
		getline(cin, s);
		for (int i = 0; i < s.size(); i++)
			if (s[i] >= 'a' && s[i] <= 'z')
				Array[s[i] - 'a']++;
			else if (s[i] >= 'A' && s[i] <= 'Z')
				Array[s[i] - 'A']++;

		int MIN = 100000;
		for (int i = 0; i < 26; i++)
			MIN = min(Array[i], MIN);

		switch (MIN)
		{
		case 1:
			printf("Case %d: Pangram!\n", num);
			break;
		case 2:
			printf("Case %d: Double pangram!!\n", num);
			break;
		case 3:
			printf("Case %d: Triple pangram!!!\n", num);
			break;
		default:
			printf("Case %d: Not a pangram\n", num);
			break;
		}
	}
	return 0;
}