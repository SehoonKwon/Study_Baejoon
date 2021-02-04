#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <cmath>
using namespace std;

//greater<int>를 틀린 점 못찾아내서 1시간 헤맴. double 형이니 greater<double> !!

int N, M, K;
vector<double> v[101];

void input()
{
	cin >> N >> M >> K;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int x;
			double y;

			cin >> x >> y;
			v[x - 1].push_back(y);
		}
	}
}

void solve()
{

	vector<double> ans;
	for (int i = 0; i < N; i++)
  {
    sort(v[i].begin(), v[i].end(), greater<double>());
		ans.push_back(v[i][0]);
  }
  
	sort(ans.begin(), ans.end(), greater<double>());

	double sum = 0.0;
	for (int i = 0; i < K; i++)
		sum += ans[i];

	sum *= 10; //소수 둘째 자리를 소수 첫째 자리로 만들기 위해 
	sum = round(sum);
	sum *= 0.1; //다시 자릿수 내려줌

	cout << fixed;
	cout.precision(1);
	cout << sum;
}

int main()
{
	input();
	solve();
	return 0;
}
