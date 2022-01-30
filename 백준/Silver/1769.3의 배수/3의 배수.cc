#include <iostream>
#include <string>
using namespace std;

string s;

void check(string str, int cnt)
{
	int N = str.size();
	if (N < 2)
	{
		int X = stoi(str);
		if (X % 3 == 0)
			cout << cnt << "\nYES";
		else
			cout << cnt << "\nNO";
		exit(0);
	}
	else
	{
		int sum = 0;
		for (int i = 0; i < str.size(); i++)
			sum += (str[i] - '0');
		str = to_string(sum);
		check(str, cnt + 1);
	}
}

int main()
{
	cin >> s;
	check(s, 0);
	return 0;
}