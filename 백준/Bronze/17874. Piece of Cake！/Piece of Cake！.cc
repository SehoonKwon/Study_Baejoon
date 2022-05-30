#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, h, v;
	cin >> n >> h >> v;
	int MAX = 0;
	MAX = max(MAX, h*v);
	MAX = max(MAX, h*(n-v));
	MAX = max(MAX, (n-h)*v);
	MAX = max(MAX, (n-h)*(n-v));
	cout<<4*MAX;
	return 0;
}