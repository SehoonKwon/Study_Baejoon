#include <iostream>
using namespace std;

int cnt[3];

int main() {
	int T;
	cin >> T;
	while(T>0)
	{
		if(T >= 300)
		{
			T-=300;
			cnt[0]++;
		}
		else if(T>=60)
		{
			T-=60;
			cnt[1]++;
		}
		else if(T>=10)
		{
			T-=10;
			cnt[2]++;
		}
		else
		{
			cout<<-1;
			return 0;
		}
	}
	for(int i=0; i<3; i++)
		cout<<cnt[i]<<" ";
	return 0;
}