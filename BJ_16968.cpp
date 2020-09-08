//#include <iostream>
//#include <string>
//using namespace std;
//
//int table[] = { 26, 10 };
//
//string s;
//
//void solve()
//{
//	int ans = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (i == 0)
//		{
//			if (s[i] == 'c') ans = table[0];
//			else ans = table[1];
//			continue;
//		}
//
//		if (s[i] == s[i - 1])
//		{
//			if (s[i] == 'c') ans *= (table[0] - 1);
//			else ans *= (table[1] - 1);
//		}
//		else
//		{
//			if (s[i] == 'c') ans *= table[0];
//			else ans *= table[1];
//		}
//	}
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	cin >> s;
//	solve();
//	return 0;
//}