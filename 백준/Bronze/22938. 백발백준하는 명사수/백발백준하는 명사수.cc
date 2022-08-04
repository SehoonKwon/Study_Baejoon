#include <iostream>
using namespace std;

#define ll long long

int main() {
	ll x1, y1, r1;
	ll x2, y2, r2;
	
	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;
	
	ll nX = x1 - x2;
	ll nY = y1 - y2;
	ll nR = r1 + r2;
	
	if(nR*nR > nX*nX + nY*nY) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}