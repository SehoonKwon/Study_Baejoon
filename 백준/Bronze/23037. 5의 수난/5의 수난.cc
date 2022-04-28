#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;
	int res = 0;
	while(N > 0)
	{
		int r = N%10;
		N/=10;
		res += pow(r, 5);
	}
	cout<<res;
	return 0;
}