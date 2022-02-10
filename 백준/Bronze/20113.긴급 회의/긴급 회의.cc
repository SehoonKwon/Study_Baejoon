#include <iostream>
using namespace std;

int N, x;
int Array[101];

int main() {
	cin >> N;
	for(int i=0; i<N; i++)
	{
		cin >> x;
		Array[x]++;
	}
	
	int MAX = 0, cnt = 1, ans = 0;
	for(int i=1; i<=N; i++)
	{
		if(MAX < Array[i])
		{
			MAX = Array[i];
			cnt = 1;
			ans = i;
		}
		else if(MAX == Array[i])
			cnt++;
	}
	
	if(cnt == 1)	cout<<ans;
	else	cout<<"skipped";
	
	return 0;
}