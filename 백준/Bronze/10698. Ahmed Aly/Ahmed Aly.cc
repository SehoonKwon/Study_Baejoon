#include <iostream>
#include <string>
using namespace std;

int A, B, C;
char O, dump;
string ans;

int main() {
	int T;
	cin >> T;
	for (int num = 1; num < T + 1; num++)
	{
		cin >> A >> O >> B >> dump >> C;
		if (O == '+')
		{
			if (A + B == C) ans = "YES";
			else ans = "NO";
		}
		else
		{
			if (A - B == C) ans = "YES";
			else ans = "NO";
		}
		printf("Case %d: %s\n", num, ans.c_str());
	}
	return 0;
}