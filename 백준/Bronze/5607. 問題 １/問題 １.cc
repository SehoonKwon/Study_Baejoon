#include <iostream>
using namespace std;

int N;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> N;
	int sumA, sumB;
	sumA = sumB = 0;
	int a, b;
	for(int i=0; i<N; i++)
	{
		cin >> a >> b;
		if(a == b)
		{
			sumA += a;
			sumB += b;
		}
		else if(a < b)
			sumB += (a+b);
		else
			sumA += (a+b);
	}
	cout<<sumA<<"\n"<<sumB;
	return 0;
}