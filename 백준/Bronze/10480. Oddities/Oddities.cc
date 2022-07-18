#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
		int x;
		cin >> x;
		if(x%2) printf("%d is odd\n", x);
		else printf("%d is even\n", x);
	}
	return 0;
}