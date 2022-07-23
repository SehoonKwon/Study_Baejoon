#include <iostream>
using namespace std;

int N;
int Array[501][501];

int main() {
	cin >> N;
	for(int i=1; i<=N*5; i++){
		for(int j=1; j<=N; j++)
			Array[i][j] = 1;
			
		for(int j=N*4+1; j<=N*5; j++)
			Array[i][j] = 1;
	}
	
	for(int i=N+1; i<=N*2; i++)
		for(int j=1; j<=N*5; j++)
			Array[i][j] = 1;
	
	for(int i=N*3+1; i<=N*4; i++)
		for(int j=1; j<=N*5; j++)
			Array[i][j] = 1;
	
	for(int i=1; i<=N*5; i++){
		for(int j=1; j<=N*5; j++){
			if(Array[i][j] == 1) cout<<"@";
			else cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}