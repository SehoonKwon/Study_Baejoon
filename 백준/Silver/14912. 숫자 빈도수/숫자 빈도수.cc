#include <iostream>
#include <string>
using namespace std;

int N;
char K;

int main()
{
	cin >> N >> K;
	int cnt = 0;
	for (int i = 1; i <= N; i++)
	{
		string t = to_string(i);
		for (int j = 0; j < t.size(); j++)
			if (t[j] == K) cnt++;
	}
	cout << cnt;
	return 0;
}