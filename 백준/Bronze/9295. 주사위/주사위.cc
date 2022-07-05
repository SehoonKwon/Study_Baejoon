#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for(int num=1; num<=T; num++){
		int a, b;
		cin >> a >> b;
		printf("Case %d: %d\n", num, a+b);
	}
	return 0;
}