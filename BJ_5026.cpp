#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		string s;
		cin >> s;
		if (s[0] == 'P')
			cout << "skipped" << "\n";
		else
		{
			stringstream ss(s);
			string token;
			int sum = 0;
			while (getline(ss, token, '+'))
			{
				int temp = stoi(token);
				sum += temp;
			}
			cout << sum << "\n";
		}
	}
	return 0;
}
