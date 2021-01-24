#include <iostream>
#include <cstring>
using namespace std;

int Array[101];

int main()
{
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
		int N;
		cin >> N;
		memset(Array,0,sizeof(Array)); //0으로 초기화, 0이 열려있는 상태
		
		for(int i=2; i<N+1; i++)
		{
			for(int j=i; j<N+1; j+=i)
			{
				if(Array[j]) Array[j]=0;
				else Array[j] = 1;
			}
		}
		
		int cnt = 0;
		for(int i=1; i<N+1; i++)
			if(!Array[i]) cnt++;
		
		cout<<cnt<<"\n";
	}
	return 0;
}
