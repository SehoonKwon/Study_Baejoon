#include <iostream>
using namespace std;
 
int main() {
	while(1){
		int N;
		cin >> N;
		if(N == 0) break;
 
		int M = 0, J = 0;
		int x;
		for(int i=0; i<N; i++){
			cin >> x;
			if(x == 0) M++;
			else J++;
		}
		printf("Mary won %d times and John won %d times\n", M, J);
	}
	return 0;
}