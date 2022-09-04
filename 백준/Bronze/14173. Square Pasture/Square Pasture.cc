#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int x1, x2, y1, y2;
	int x3, x4, y3, y4;
	
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;
	
	int A = max(x2, x4) - min(x1, x3);
	int B = max(y2, y4) - min(y1, y3);
	int res = max(A, B);
	cout<<res*res;
	
	return 0;
}