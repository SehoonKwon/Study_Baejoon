#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
	long long cnt = 0;
	for(int i=1; i<=N-1; i++)
		for(int j = i+1; j<=N; j++)
			cnt++;	
    
	cout<<cnt<<endl<<2;	
	return 0;
}