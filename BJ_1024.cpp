#include <iostream>
using namespace std;

#define INF (int)1e9

int N, L;

int main()
{
	// your code goes here
	cin >> N >> L;
	int s = 0, e = 1;
	int len = INF, sum = s;
	int ans1 = 0, ans2 = 0;
	while(e <= N+1)
	{
		if(sum >= N)
		{
			int tlen = e - s;
			if(sum == N && (tlen >= L && tlen <= 100))
			{
				if(tlen < len)
				{
					ans1 = s;
					ans2 = e;
					len = tlen;
				}
			}
			sum -= s;
			s++;
		}
		else
		{
			sum += e;
			e++;
		}
	}
	
	if(len > 100) cout << -1;
	else
		for(int i = ans1; i < ans2; i++)
			cout<<i<<" ";
	
	return 0;
}
