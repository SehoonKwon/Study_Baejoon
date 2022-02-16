#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define ll long long

int N, T;
ll x;
unordered_map<ll, int> mymap;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		mymap.clear();
		cin >> T;
		int flag = 0;
        ll num = 0;
		for (int j = 0; j < T; j++)
		{
			cin >> x;
			mymap[x]++;
			if (mymap[x] > T / 2)
			{
				flag = 1;
				num = x;
			}
		}

		if (flag == 0) cout << "SYJKGW\n";
		else cout << num << "\n";
	}
	return 0;
}