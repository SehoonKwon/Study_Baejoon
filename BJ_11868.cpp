#include <iostream>
using namespace std;

int N;
int Array[101];

int main() {
	
	cin >> N;
	int res, x;
	for(int i = 0; i < N; i++)
	{
		cin >> x;
		if(i == 0) res = x;
		else res ^= x;
	}
	
	if(res > 0)
		cout<<"koosaga";
	else
		cout<<"cubelover";
	
	return 0;
}
