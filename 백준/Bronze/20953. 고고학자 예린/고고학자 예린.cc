#include <iostream>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--)
	{
		int a, b;
		cin >> a >> b;
		int A = a+b;
		int B = (a+b)*(a+b-1)/2;
		cout<<A*B<<"\n";
	}
	return 0;
}