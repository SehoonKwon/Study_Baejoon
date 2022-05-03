#include <iostream>
using namespace std;

#define pi 3.1415927
#define secToHour 3600

int main() {
	double L, C, T;
	for(int num = 1; ;num++)
	{
		cin>>L>>C>>T;
		if(C == 0) break;
		
		double Distance = L*pi*C / (12*5280);
		double Speed = Distance*secToHour/T;
		printf("Trip #%d: %.2lf %0.2lf\n", num, Distance, Speed);
	}
	return 0;
}