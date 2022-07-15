#include <iostream>
using namespace std;

int N,M;
char Array[101][101];

int main() {
	cin>>N>>M;
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin>>Array[i][j];
			if(Array[i][j] == 'W') Array[i][j] = 'B';
			else Array[i][j] = 'W';
		}
	}
	int cnt=0;
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			char c;
			cin >> c;
			if(Array[i][j] != c) cnt++; 
		}
	}
	cout<<cnt;
	return 0;
}