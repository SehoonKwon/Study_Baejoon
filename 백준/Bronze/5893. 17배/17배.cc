#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s1, s2;
int A[1001], B[1001], ans[1001];

void solve()
{
	if (s1.size() == 1 && s1[0] == '0' && s2.size() == 1 && s2[0] == '0')
	{
		cout << "0" << endl;
		return;
	}

	for (int i = 0; i < s1.size(); i++)
		if (s1[s1.size() - 1 - i] == '1') A[i] = 1;

	for (int i = 0; i < s2.size(); i++)
		if (s2[s2.size() - 1 - i] == '1') B[i] = 1;

	int len = max(s1.size(), s2.size());
	int len2 = len;

	for (int i = 0; i < len; i++)
	{
		ans[i] += (A[i] + B[i]);
		if (ans[i] >= 2)
		{
			if (i == len - 1) len2++;
			ans[i + 1]++;
			ans[i] -= 2;
		}
	}

	int flag = 0;
	for (int i = len2 - 1; i > -1; i--)
	{
		if (flag == 0 && ans[i] == 0) continue;
		else if (flag == 0 && ans[i] == 1) flag = 1;

		if (flag) cout << ans[i];
	}

	if (flag == 0) cout << "0"; //마지막까지 아무것도 출력 못한 경우
	cout << "\n";
}

int main() {
	cin >> s1;
	s2 = s1;
	s1 += "0000";
	
	solve();
	return 0;
}