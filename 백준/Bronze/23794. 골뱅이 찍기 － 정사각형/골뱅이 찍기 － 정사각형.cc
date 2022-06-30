#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for(int i=1; i<=N+2; i++){
		for(int j=1; j<=N+2; j++){
			if(i == 1 || i == N+2 || j == 1 || j == N+2)
				cout<<"@";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}