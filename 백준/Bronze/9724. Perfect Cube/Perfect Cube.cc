#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for(int i=1; i<=T; i++)
	{
		int A, B;
		cin >> A >> B;

		int cnt = 0;
		for(int X = 1; X * X * X <= B; X++)
			if(A <= X*X*X && X*X*X <= B)
				cnt++;
				
		printf("Case #%d: %d\n", i, cnt);
	}
	return 0;
}