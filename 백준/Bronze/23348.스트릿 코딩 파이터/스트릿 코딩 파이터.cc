#include <iostream>
#include <algorithm>
using namespace std;

int A,B,C,N;
int MAX;
int score[3];

int main() {
	
	cin >> A >> B >> C >> N;
	int a, b, c;
	for(int i=0; i<N; i++)
	{
		int sum = 0;
		for(int j=0; j<3; j++)
		{
			cin>>a>>b>>c;
			sum += (a*A + b*B + c*C);
		}
		MAX = max(MAX, sum);
	}
	cout<<MAX;
	return 0;
}