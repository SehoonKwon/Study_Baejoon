#include <iostream>
using namespace std;

int main() {
	int S,A,B;
	cin>>S>>A>>B;
	int pay = 250;
	if(S<=A) cout<<pay;
	else
	{
		S -= A;
		int k = S/B;
		int r = S%B;
		if(r > 0) k++;
		cout<<pay + k*100;
	}
	return 0;
}