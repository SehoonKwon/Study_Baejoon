#include <iostream>
#include <string>
using namespace std;

int calcul(string s)
{
	int x = stoi(s);
	int res = 0;
	while (x > 0)
	{
		int num = x % 10;
		x /= 10;
		res += num;
	}

	return res;
}

int main()
{
	string s;
	cin >> s;

	string left = s.substr(0, s.size() / 2);
	string right = s.substr(s.size() / 2, s.size());

	int Lval = calcul(left);
	int Rval = calcul(right);

	if (Lval == Rval)
		cout << "LUCKY";
	else
		cout << "READY";

	return 0;
}
