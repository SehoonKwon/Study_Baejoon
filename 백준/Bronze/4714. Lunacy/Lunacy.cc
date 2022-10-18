#include <iostream>
using namespace std;

int main() {
	
	double x;
	
	while(1){
		cin >> x;
		if(x == -1.0) break;
		
		double nx = x * 0.167;
		
		printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", x, nx);
	}
	
	return 0;
}