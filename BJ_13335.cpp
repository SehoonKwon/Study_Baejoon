#include <iostream>
#include <deque>
using namespace std;

//13335 트럭

int N, W, L;
int Array[1001];
int finish[1001];

void input()
{
	cin >> N >> W >> L;
	for (int i = 0; i < N; i++)
		cin >> Array[i];
}

void solve()
{
	int front_idx = 0; // front truck
	int truck_idx = 0;
	deque<int> dq; //도로 위의 차량
	int time = 0;
	int curw = 0;
	while (1)
	{
		if (finish[N - 1] == true) break;
		time++;

		for (int i = 0; i < dq.size(); i++)
		{
			dq[i]++;
			if (dq[i] > W)
			{
				finish[front_idx] = true;
				curw -= Array[front_idx];
				front_idx++;
				dq.pop_front();
				i--;
			}
		}

		if (truck_idx < N && curw + Array[truck_idx] <= L)
		{
			dq.push_back(1);
			curw += Array[truck_idx];
			truck_idx++;
		}
	}

	cout << time;
}

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	input();
	solve();
	return 0;
}
