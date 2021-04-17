#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N; // N은 최대 10만이므로 2^20 보단 작다
		string s = bitset<20>(N).to_string();
		reverse(s.begin(), s.end());
		for (int i=0; i<s.size(); i++)
			if (s[i] == '1') cout << i << " ";
		cout << "\n";
	}
	return 0;
}
