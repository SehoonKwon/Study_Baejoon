#include <iostream>
using namespace std;
 
int main() {
	int sum = 0;
	int x;
	while(1)
	{
		cin >> x;
		if(x == -1){
			cout<<sum;
			return 0;
		}
		sum += x;
	}
	return 0;
}