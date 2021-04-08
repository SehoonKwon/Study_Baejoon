#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define INF (int)(1e9+7)
#define endl "\n"
#define ll long long

int N, M;
ll Array[1000001];

void input()
{
	cin >> N >> M;
}

ll Maketree(vector<ll> &tree, int node, int left, int right)
{
	if (left == right) return tree[node] = Array[left];

	int mid = (left + right) / 2;
	return tree[node] = Maketree(tree, node * 2, left, mid) + Maketree(tree, node * 2 + 1, mid + 1, right);
}

ll query(vector<ll> &tree, int node, int left, int right, int qleft, int qright)
{
	if (qright < left || right < qleft) return 0;
	else if (qleft <= left && right <= qright) return tree[node];
	else
	{
		int mid = (left + right) / 2;
		return query(tree, node * 2, left, mid, qleft, qright) + query(tree, node * 2 + 1, mid + 1, right, qleft, qright);
	}
}

void update(vector<ll> &tree, int node, int left, int right, int idx, ll d)
{
	if (idx < left || right < idx) return;
	else
	{
		tree[node] += d;
		if (left != right)
		{
			int mid = (left + right) / 2;
			update(tree, node * 2, left, mid, idx, d);
			update(tree, node * 2 + 1, mid + 1, right, idx, d);
		}
	}
}

void solve()
{
	int h = (int)ceil(log2(N));
	int tree_size = pow(2, h + 1);
	vector<ll> tree(tree_size);
	Maketree(tree, 1, 1, N);

	while (M--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0)
		{
			if (c < b) swap(b, c);
			cout << query(tree, 1, 1, N, b, c) << endl;
		}
		else
		{
			ll d = c - Array[b];
			Array[b] = c;
			update(tree, 1, 1, N, b, d);
		}
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
