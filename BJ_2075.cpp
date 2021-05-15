#include <iostream>
#include <queue>
using namespace std;

//메모리 제한이 12MB라서 일반적으로 전부 저장하고 sort해서 풀면 못품
//1500^2*4 = 9MB이고 헤더파일들 때문에 충분히 메모리 초과 => 알고싶은 크기 N만큼만 저장하자 + 매번 정렬이 필요하므로 PQ

struct cmp
{
	bool operator()(int x, int y) { return x > y; }
};

int N;
priority_queue<int, vector<int>, cmp> pq;
vector<int> v;

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			int x;
			cin >> x;
			if (pq.size() < N)
				pq.push(x);
			else
			{
				if (pq.top() > x) continue;
				pq.pop();
				pq.push(x);
			}
		}
}

void solve()
{
	cout << pq.top();
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
