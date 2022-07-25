#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int Array[101];

int main() {
	cin >> N >> M;
	
	for(int i=1; i<=N; i++)
		cin >> Array[i];
	
	for(int i=1; i<=M; i++) {
		for(int j=1; j<N; j++) {
			if(Array[j] % i > Array[j+1] % i)
				swap(Array[j], Array[j+1]);
		}
	}
	
	for(int i=1; i<=N; i++)
		cout<<Array[i]<<"\n";
	return 0;
}