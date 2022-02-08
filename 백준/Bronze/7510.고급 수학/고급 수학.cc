#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for(int i=1; i<=N; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		a *= a;
		b *= b;
		c *= c;
		
		if(a+b == c || b+c == a || a+c == b)
			cout<<"Scenario #"<<i<<":\nyes\n\n";
		else
			cout<<"Scenario #"<<i<<":\nno\n\n";
	}
	return 0;
}