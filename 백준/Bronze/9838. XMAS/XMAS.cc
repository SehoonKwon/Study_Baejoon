#include <iostream>
using namespace std;

int Array[20001];

int main() {
	int N;
	cin >> N;
	for(int i=1; i<=N; i++){
		int x;
		cin >> x;
		Array[x] = i;
	}
	
	for(int i=1; i<=N; i++)
		cout<<Array[i]<<"\n";
		
	return 0;
}