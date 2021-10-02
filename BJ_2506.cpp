#include <iostream>
using namespace std;
 
int N;
 
int main() {
	// your code goes here
 
	cin >> N;
	int sum = 0;
	int cnt = 0;
	for(int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		if(x == 1)
		{
			cnt++;
			sum += cnt;
		}
		else cnt = 0;
	}
 
	cout << sum;
	return 0;
}
