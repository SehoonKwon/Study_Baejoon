#include <iostream>
#include <queue>
#include <functional>
using namespace std;

//풀이 참고 했음. 아이디어 없으면 못풀듯. + 이 아이디어는 어떻게 생각했을까
//규칙 1 : 최대 힙 사이즈는 최소 힙 사이즈보다 항상 같거나 1크다
//규칙 2 : 최대 힙의 최댓값은 항상 최소 힙의 최솟값보다 작거나 같다
//위 규칙대로 원소들을 넣으면 최대 힙의 top 값이 항상 중간 값

#define endl "\n"

int N;
priority_queue<int, vector<int>, greater<int>> min_heap;
priority_queue<int> max_heap;

void solve()
{
	cin >> N;
	for (int i = 1; i < N + 1; i++)
	{
		int x;
		cin >> x;

		//첫번째 수는 무조건 max_heap (규칙1)
		if (i == 1)
			max_heap.push(x);
		else
		{
			if (max_heap.size() == min_heap.size())
				max_heap.push(x);
			else
				min_heap.push(x);

			if (max_heap.top() > min_heap.top())
			{
				int mtemp = min_heap.top();
				min_heap.pop();

				int Mtemp = max_heap.top();
				max_heap.pop();

				max_heap.push(mtemp);
				min_heap.push(Mtemp);
			}
		}

		cout << max_heap.top() << endl;
	}

}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();
	return 0;
}
