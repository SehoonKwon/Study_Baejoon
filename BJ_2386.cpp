#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (1)
	{
		string s;
		getline(cin, s);
		if (s[0] == '#') break;

		char target = s[0];
		int cnt = 0;
		for (int i = 2; i < s.size(); i++)
			if (s[i] == target || s[i] == (target - 'a' + 'A')) cnt++;

		cout << target << " " << cnt << "\n";
	}
	return 0;
}
