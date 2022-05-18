#include <iostream>
#include <cmath>
using namespace std;

int P[6];

int main() {
	int T;
	cin >> T;
	while(T--)
	{
		for(int i=0; i<7; i++)
			cin>>P[i];
		
		int A = 9.23076*pow(26.7-P[0], 1.835);
		int B = 1.84523*pow(P[1]-75, 1.348);
		int C = 56.0211*pow(P[2]-1.5, 1.05);
		int D = 4.99087*pow(42.5-P[3], 1.81);
		int E = 0.188807*pow(P[4]-210, 1.41);
		int F = 15.9803*pow(P[5]-3.8, 1.04);
		int G = 0.11193*pow(254-P[6], 1.88);
		
		cout<<A+B+C+D+E+F+G<<"\n";
	}
	
	return 0;
}