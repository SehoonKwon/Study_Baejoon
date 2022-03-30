#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	regex re("(pi|ka|chu)+");

	if (regex_match(s, re))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}