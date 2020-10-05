#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

#define INF (int)1e9

//정렬로 풀었을 땐 어디가 잘못되었는지 

int V, M, J, S;
int dist[2][101];

struct point
{
	int dest;
	int val;
};

struct Hoobo
{
	int j;
	int s;
	int sum;
	int dest;
};

vector<point> v[101];

void input()
{
	cin >> V >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;

		v[a].push_back({ b, c });
		v[b].push_back({ a, c });
	}

	cin >> J >> S;
}

struct cmp
{
	bool operator()(const point& u, const point& v)
	{
		if (u.val > v.val) return true;
		else return false;
	}
};

void Dijk(int JS)
{
	for (int i = 1; i < V + 1; i++)
		dist[JS][i] = INF;

	priority_queue<point, vector<point>, cmp> pq;
	if (JS == 0) pq.push({ J, 0 });
	else pq.push({ S, 0 });

	while (!pq.empty())
	{
		int Node = pq.top().dest;
		int val = pq.top().val;
		pq.pop();

		if (dist[JS][Node] != INF) continue;
		dist[JS][Node] = val;

		for (int i = 0; i < v[Node].size(); i++)
		{
			int nx = v[Node][i].dest;
			int w = v[Node][i].val;

			pq.push({ nx, val + w });
		}
	}
}

void solve()
{
	Dijk(0); //지헌
	Dijk(1); //성하

	vector<Hoobo> ans;
	for (int i = 1; i < V + 1; i++)
	{
		if (i == J || i == S) continue; //시작점 제외
		if(dist[0][i] != INF && dist[1][i] != INF) //도달 가능한 곳에 대해서만
			ans.push_back({ dist[0][i], dist[1][i], dist[0][i]+dist[1][i], i });
	}

	if (ans.size() == 0)
	{
		cout << -1;
		return;
	}

	//조건2
	int minsum = INF;
	for (int i = 0; i < ans.size(); i++)
		if (ans[i].sum < minsum) minsum = ans[i].sum;

	vector<Hoobo> temp;
	for (int i = 0; i < ans.size(); i++)
		if (ans[i].sum == minsum) temp.push_back(ans[i]);

	ans.clear();
	ans = temp;
	
	//조건3
	for (int i = 0; i < ans.size(); i++)
	{
		if (ans[i].j > ans[i].s)
		{
			ans.erase(ans.begin() + i);
			i--;
		}
	}

	//조건4
	minsum = INF;
	for (int i = 0; i < ans.size(); i++)
		if (ans[i].j < minsum) minsum = ans[i].j;

	temp.clear();
	for (int i = 0; i < ans.size(); i++)
		if (ans[i].j == minsum) temp.push_back(ans[i]);

	//조건5
	int output = INF;
	for (int i = 0; i < temp.size(); i++)
		if (temp[i].dest < output) output = temp[i].dest;

	if (output == INF) output = -1;
	cout << output;
}


int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
