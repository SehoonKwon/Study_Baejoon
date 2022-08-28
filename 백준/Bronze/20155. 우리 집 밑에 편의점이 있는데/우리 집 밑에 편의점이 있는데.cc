#include <iostream>
#include <algorithm>
using namespace std;

int Array[1001];

int main() {
	int N,M;
	cin >> N >> M;
	
	for(int i=0; i<N; i++){
		int x;
		cin >> x;
		Array[x]++;
	}
	
	sort(Array, Array+N);
	cout<<Array[N-1];
	return 0;
}