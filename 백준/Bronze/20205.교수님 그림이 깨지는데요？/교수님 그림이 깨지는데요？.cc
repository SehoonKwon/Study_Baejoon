#include <iostream>
using namespace std;

int N,K;
int Array[11][11], ans[101][101];

int main() {
	cin >> N >> K;
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
			cin >> Array[i][j];
			
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
			for(int r = 0; r < K; r++)
				for(int l = 0; l < K; l++)
					ans[i*K+r][j*K+l] = Array[i][j];

	for(int i=0; i<K*N; i++)
	{
		for(int j=0; j<K*N; j++)
			cout<<ans[i][j]<<" ";
		cout<<"\n";	
	}
	return 0;
}