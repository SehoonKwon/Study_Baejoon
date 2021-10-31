#include <iostream>
using namespace std;

int Array[101];

int main() {
	
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++)
		cin >> Array[i];
	
	double X;
	int Y;
	cin >> X >> Y;
	
	int Xans = (int)(N * X/100);
	cout << Xans <<" ";
	
	int cnt = 0;
	for(int i=0; i<N; i++)
		if(Array[i] >= Y) cnt++;
		
	cout << cnt;
	
	return 0;
}
