#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int Array[11];
string str[3] = { "too high", "too low", "right on" };
int lower = 0, higher = 100;

int main()
{
	int N;
	int wrong = false;
	while (1)
	{
		cin >> N;
		cin.ignore();
		if (N == 0) break;
		
		string s;
		getline(cin, s);
		if (s == str[0])
		{
			higher = min(higher, N);
		}
		else if (s == str[1])
		{
			lower = max(lower, N);
		}
		else
		{
			if(N > lower && N < higher)
				cout << "Stan may be honest\n";
			else
				cout << "Stan is dishonest\n";
			lower = 0;
			higher = 100;
		}
	}
	return 0;
}
