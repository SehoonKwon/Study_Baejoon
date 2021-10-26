#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int Array[30];
string s;

int main() {
	// your code goes here

	int T;
	cin >> T;
	cin.ignore();
	while (T--)
	{
		memset(Array, 0, sizeof(Array));
		s.clear();
		getline(cin, s);
		for (int i = 0; i < s.size(); i++)
			Array[s[i] - 'a']++;

		int MAX = 0, cnt = 0;
		char A = '?';

		for (int i = 0; i < 30; i++)
		{
			if (MAX < Array[i])
			{
				cnt = 1;
				MAX = Array[i];
				A = i + 'a';
			}
			else if (MAX == Array[i])
				cnt++;
		}

		if (cnt > 1) A = '?';
		cout << A << "\n";
	}

	return 0;
}
