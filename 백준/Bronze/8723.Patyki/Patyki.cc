#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int Array[3];
 
int main() {
	cin>>Array[0]>>Array[1]>>Array[2];
	if(Array[0]==Array[1] && Array[1]==Array[2]) cout<<2;
	else
	{
		sort(Array, Array+3);
		if(pow(Array[0],2) + pow(Array[1],2) == pow(Array[2],2)) cout<<1;
		else cout<< 0;
	}
 
	return 0;
}