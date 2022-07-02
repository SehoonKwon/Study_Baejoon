#include <iostream>
using namespace std;

int Array[501][501];

int main() {
	int N;
	cin >> N;
	
	for(int i=1; i<=N*4; i++){
		for(int j=1; j<=N; j++){
			cout<<"@";
		}
		cout<<"\n";
	}
	
	for(int i=N*4+1; i<=N*5; i++){
		for(int j=1; j<=N*5; j++)
			cout<<"@";
		cout<<"\n";
	}
	
	
	return 0;
}