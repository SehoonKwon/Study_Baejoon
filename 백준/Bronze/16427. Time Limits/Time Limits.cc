#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, s;
	cin >> n >> s;
	
	int MAX = -1;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		if(MAX < x) MAX = x;
	}
	
	int res = MAX * s;
	double ans = res / 1000.0;
	ans = ceil(ans);
	
	cout<<ans;
	
	return 0;
}