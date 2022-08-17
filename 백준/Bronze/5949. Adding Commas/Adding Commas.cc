#include <iostream>

#include <string>

#include <algorithm>

using namespace std;

int main()

{

	string s;	cin >> s;

	int cnt = 0;

	int len = s.length();

	string nS = "";

	for (int i = len - 1; i >= 0; i--) {

		if (cnt == 3) {

			nS += ",";

			cnt = 0;

		}

		nS += s[i];

		cnt++;

	}

	reverse(nS.begin(), nS.end());

	cout << nS << "\n";

	return 0;

}