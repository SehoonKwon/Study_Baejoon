#include <iostream>
#include <cstring>
using namespace std;

int Array[11][11];

int main() {
	for(int num = 1;; num++)
	{
		memset(Array, 0, sizeof(Array));
		int sum = 0;
		int N;
		cin >> N;
		if(N == 0) break;
		
		for(int i=1; i<=N; i++)
			for(int j=1; j<=i; j++)
				cin>>Array[i][j];
		
		for(int i=1; i<N; i++)
		{
			sum += Array[i][1];
			if(i > 1)
				sum += Array[i][i];
		}
		for(int i=1; i<=N; i++)
			sum += Array[N][i];
		
		printf("Case #%d:%d\n", num, sum);
	}
	return 0;
}