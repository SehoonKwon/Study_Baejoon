#include <iostream>
using namespace std;
 
int N;
double Array[101][2];
 
int main() {
	cin >> N;
	double ans = 0;
	for(int i=0; i<N; i++)
	{
		cin >> Array[i][0] >> Array[i][1];
		ans += (Array[i][0]*Array[i][1]);
	}
	cout<<fixed;
	cout.precision(3);
	cout<<ans;
	return 0;
}