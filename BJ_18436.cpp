#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

#define MAX 100001
#define endl "\n"

int N, M;
int Array[MAX];

void input()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> Array[i];

	cin >> M;
}

int MakeEtree(vector<int>& tree, int node, int l, int r)
{
	if (l == r)
	{
		if (Array[l] % 2) return tree[node] = 0;
		else return tree[node] = 1;
	}

	int m = (l + r) / 2;
	return tree[node] = (MakeEtree(tree, node * 2, l, m) + MakeEtree(tree, node * 2 + 1, m + 1, r));
}

int equery(vector<int>& tree, int node, int l, int r, int ql, int qr)
{
	if (r < ql || qr < l) return 0;
	else if (ql <= l && r <= qr) return tree[node];
	else
	{
		int m = (l + r) / 2;
		return equery(tree, node * 2, l, m, ql, qr) + equery(tree, node * 2 + 1, m + 1, r, ql, qr);
	}
}

void update(vector<int>& tree, int node, int l, int r, int idx, int d)
{
	if (idx < l || r < idx) return;
	else
	{
		tree[node] += d;
		if (l != r)
		{
			int m = (l + r) / 2;
			update(tree, node * 2, l, m, idx, d);
			update(tree, node * 2 + 1, m + 1, r, idx, d);
		}
	}
}

int MakeOtree(vector<int>& tree, int node, int l, int r)
{
	if (l == r)
	{
		if (Array[l] % 2) return tree[node] = 1;
		else return tree[node] = 0;
	}

	int m = (l + r) / 2;
	return tree[node] = (MakeOtree(tree, node * 2, l, m) + MakeOtree(tree, node * 2 + 1, m + 1, r));
}

int oquery(vector<int>& tree, int node, int l, int r, int ql, int qr)
{
	if (r < ql || qr < l) return 0;
	else if (ql <= l && r <= qr) return tree[node];
	else
	{
		int m = (l + r) / 2;
		return oquery(tree, node * 2, l, m, ql, qr) + oquery(tree, node * 2 + 1, m + 1, r, ql, qr);
	}
}

void solve()
{
	int h = (int)ceil(log2(N));
	int tree_size = pow(2, h + 1);
	vector<int> etree(tree_size), otree(tree_size);
	MakeEtree(etree, 1, 1, N);
	MakeOtree(otree, 1, 1, N);

	while (M--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1)
		{
			int ed, od;
			if (Array[b] % 2) //이전에 홀수인경우
			{
				if (c % 2) //바뀌는 수도 홀수면
				{
					ed = 0; //변화 없음
					od = 0;
				}
				else
				{
					ed = 1; //짝수 1증가
					od = -1;
				}
			}
			else //짝수인 경우
			{
				if (c % 2)
				{
					ed = -1; //짝수 1감소
					od = 1;
					
				}
				else
				{
					ed = 0;
					od = 0;
				}
			}

			Array[b] = c;
			update(etree, 1, 1, N, b, ed);
			update(otree, 1, 1, N, b, od);
		}
		else if (a == 2)
			cout << equery(etree, 1, 1, N, b, c) << endl;
		else if (a == 3)
			cout << oquery(otree, 1, 1, N, b, c) << endl;
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
