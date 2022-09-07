#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for(int num=1; num<=T; num++){
		
		printf("Case %d:\n", num);
		int N;
		cin >> N;
		
		int x;
		for(int i=0; i<N; i++){
			scanf("%d", &x);
			if(x < 6) printf("%d\n", x+1);
		}
	}
	return 0;
}