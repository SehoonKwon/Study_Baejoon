#include <iostream>
#include <vector>
using namespace std;

int N, K, L;
vector<int> v;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> K >> L;
	int a, b, c;
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b >> c;
		if (a >= L && b >= L && c >= L && (a + b + c) >= K)
		{
			v.push_back(a);
			v.push_back(b);
			v.push_back(c);
		}
	}

	cout << v.size() / 3 << "\n";
	for (auto it : v)
		cout << it << " ";

	return 0;
}
