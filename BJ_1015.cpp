#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

//같은 수가 여러번 나올 수도 있는 점을 주의하자

int N;
int Array[51], Array2[51], chk[51];

int main()
{
	// your code goes here
	cin >> N;
	for(int i=0; i<N; i++)
		cin>>Array[i];
	
	memcpy(Array2, Array, sizeof(Array));
	sort(Array, Array+N);
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			if(Array2[i] == Array[j] && chk[j] == false)
			{
				cout<<j<<" ";
				chk[j] = true;
				break;
			}
		}
	}
	
	return 0;
}
