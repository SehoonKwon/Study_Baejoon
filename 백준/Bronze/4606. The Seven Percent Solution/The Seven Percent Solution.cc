#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string s;
unordered_map<char, string> mymap;

void MakeTable()
{
	mymap[' '] = "%20";
	mymap['!'] = "%21";
	mymap['$'] = "%24";
	mymap['%'] = "%25";
	mymap['('] = "%28";
	mymap[')'] = "%29";
	mymap['*'] = "%2a";
}

int main()
{
	MakeTable();

	while (1) {
		getline(cin, s);
		if (s == "#") break;

		for (int i = 0; i < s.size(); i++) {
			auto it = mymap.find(s[i]);
			if (it != mymap.end()) cout << mymap[s[i]];
			else cout << s[i];
		}
		cout << "\n";
	}

	return 0;
}