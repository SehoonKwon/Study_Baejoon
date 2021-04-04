#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

#define endl "\n"

int N, M;
int Array[100001];

void input()
{
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		cin >> Array[i];
}

int MakeMaxTree(vector<int> &tree, int node, int left, int right)
{
	if (left == right)
		return tree[node] = Array[left];

	int mid = (left + right) / 2;

	return tree[node] = max(MakeMaxTree(tree, node * 2, left, mid), MakeMaxTree(tree, node * 2 + 1, mid + 1, right));
}

int maxquery(vector<int>& tree, int node, int left, int right, int qleft, int qright )
{
	if (qright < left || right < qleft) return 0;
	else if (qleft <= left && right <= qright) return tree[node];
	else
	{
		int mid = (left + right) / 2;
		return max(maxquery(tree, node * 2, left, mid, qleft, qright), maxquery(tree, node * 2 + 1, mid + 1, right, qleft, qright));
	}
}

int MakeMinTree(vector<int> &tree, int node, int left, int right)
{
	if (left == right)
		return tree[node] = Array[left];

	int mid = (left + right) / 2;

	return tree[node] = min(MakeMinTree(tree, node * 2, left, mid), MakeMinTree(tree, node * 2 + 1, mid + 1, right));
}

int minquery(vector<int>& tree, int node, int left, int right, int qleft, int qright)
{
	if (qright < left || right < qleft) return 1000000001;
	else if (qleft <= left && right <= qright) return tree[node];
	else
	{
		int mid = (left + right) / 2;
		return min(minquery(tree, node * 2, left, mid, qleft, qright), minquery(tree, node * 2 + 1, mid + 1, right, qleft, qright));
	}
}


void solve()
{
	int h = (int)ceil(log2(N));
	int tree_size = pow(2, (h + 1));
	vector<int> maxtree(tree_size);
	vector<int> mintree(tree_size);
	MakeMaxTree(maxtree, 1, 1, N);
	MakeMinTree(mintree, 1, 1, N);

	while (M--)
	{
		int a, b;
		cin >> a >> b;
		int Mval = maxquery(maxtree, 1, 1, N, a, b);
		int mval = minquery(mintree, 1, 1, N, a, b);
		cout << mval << " " << Mval << endl;
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
