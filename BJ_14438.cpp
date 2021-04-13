#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

#define INF (int)1e9
#define endl "\n"

int N, M;
int Array[100001];

void input()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> Array[i];

	cin >> M;
}

int MakeTree(vector<int>& tree, int node, int left, int right)
{
	if (left == right) return tree[node] = Array[left];

	int mid = (left + right) / 2;
	return tree[node] = min(MakeTree(tree, node * 2, left, mid), MakeTree(tree, node * 2 + 1, mid + 1, right));
}

int Query(vector<int> &tree, int node, int left, int right, int qleft, int qright)
{
	if (qright < left || right < qleft) return INF;
	else if (qleft <= left && right <= qright) return tree[node];
	else
	{
		int mid = (left + right) / 2;
		return min(Query(tree, node * 2, left, mid, qleft, qright), Query(tree, node * 2 + 1, mid + 1, right, qleft, qright));
	}
}

int Update(vector<int> &tree, int node, int left, int right, int idx, int d)
{
	if (idx < left || right < idx) return tree[node];
	else
	{
		if (left == right) return tree[node] = d;
		else
		{
			int mid = (left + right) / 2;
			return tree[node] = min(Update(tree, node * 2, left, mid, idx, d), Update(tree, node * 2 + 1, mid + 1, right, idx, d));
		}
	}
}

void solve()
{
	int h = (int)ceil(log2(N));
	int tree_size = pow(2, h + 1);
	vector<int> tree(tree_size);
	MakeTree(tree, 1, 1, N);

	while (M--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		if (a == 1)
		{
			Array[b] = c;
			Update(tree, 1, 1, N, b, c);
		}
		else
			cout << Query(tree, 1, 1, N, b, c) << endl;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
