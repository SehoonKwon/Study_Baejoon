#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
	cout << 4 + 2 * max(x1, x2) + 2 * (y1 + y2);
	
	return 0;
}