#include <iostream>
#include <vector>
using namespace std;

vector<int> v[100001];

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	int a, b;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1; i <= N; i++)
		cout << v[i].size() << "\n";

	return 0;
}