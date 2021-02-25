#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

#define endl "\n"

int N, M;
int parent[1001];
double visit[1001][1001];

struct point
{
	long long int x; //결과가 long long 나오기 위해서 미리 ll 타입으로
	long long int y;
};

point Array[1001];

struct Edge
{
	int s;
	int e;
	double dist;
};

vector<Edge> edge;

void input()
{
	cin >> N >> M;

	for (int i = 1; i < N + 1; i++)
		cin >> Array[i].x >> Array[i].y;

	for (int i = 1; i < N + 1; i++)
		parent[i] = i;

	for (int i = 1; i < M + 1; i++)
	{
		int s, e;
		cin >> s >> e;
		parent[e] = s;
		visit[s][e] = 1;
		visit[e][s] = 1;
		edge.push_back({ s, e, 0 });
	}
}

bool cmp(const Edge& u, const Edge& v)
{
	if (u.dist < v.dist) return true;
	else return false;
}

int myFind(int x)
{
	if (x == parent[x]) return x;
	else return parent[x] = myFind(parent[x]);
}

void solve()
{
	//전체 쌍의 거리 구하기
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j < N + 1; j++)
		{
			if (i == j) continue;
			if (visit[i][j] == 1) continue;

			long long temp = (Array[i].x - Array[j].x) * (Array[i].x - Array[j].x) + (Array[i].y - Array[j].y) * (Array[i].y - Array[j].y); //0,0과 100만,100만 좌표의 경우 10^6^2 로 int 벗어남
			double d = sqrt(temp);
			visit[i][j] = 1;
			visit[j][i] = 1;
			edge.push_back({ i, j, d });
		}
	}
	
	sort(edge.begin(), edge.end(), cmp);
	double sum = 0;
	int cnt = 0;
	for (auto it : edge)
	{
		int aRoot = myFind(it.s);
		int bRoot = myFind(it.e);

		if (aRoot == bRoot) continue;

		parent[bRoot] = aRoot;
		sum += it.dist;
		cnt++;
		if (cnt == N - 1) break;
	}

	cout << fixed;
	cout.precision(2);
	cout << sum << endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
