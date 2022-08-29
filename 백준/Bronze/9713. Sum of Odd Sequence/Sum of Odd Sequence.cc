#include <iostream>
using namespace std;
 
int main() {
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
 
		int sum = 0;
		for(int i=1; i<N+1; i = i+2)
			sum += i;
 
		cout<<sum<<"\n";
	}
	return 0;
}