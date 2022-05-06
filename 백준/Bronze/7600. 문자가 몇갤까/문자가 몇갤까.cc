#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int Array[128];

int main() {
	while (1)
	{
		string s;
		getline(cin, s);
		if (s == "#") break;

		memset(Array, 0, sizeof(Array));
		for (int i = 0; i < s.size(); i++)
		{
			s[i] = tolower(s[i]);
			Array[s[i]]++;
		}

		int cnt = 0;
		for (int i = 97; i <= 122; i++)
			if (Array[i] != 0) cnt++;
		cout << cnt << "\n";

	}
	return 0;
}