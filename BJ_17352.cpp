#include <iostream>
#include <set>
using namespace std;

int N;
int parent[300001];

int myFind(int x)
{
	if (x == parent[x]) return x;
	else return parent[x] = myFind(parent[x]);
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int i = 1; i < N + 1; i++)
		parent[i] = i;

	for (int i = 0; i < N - 2; i++)
	{
		int a, b;
		cin >> a >> b;
		int A = myFind(a);
		int B = myFind(b);

		parent[B] = A;
	}

	set<int> s;
	for (int i = 1; i < N + 1; i++)
	{
		int a = myFind(i);
		s.insert(a);
	}

	for (auto it : s)
		cout << it << " ";

	return 0;
}
