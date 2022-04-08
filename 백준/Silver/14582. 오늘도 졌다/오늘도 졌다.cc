#include <iostream>
using namespace std;

int Array[2][10];

int main() {
	
	for(int k=0; k<2; k++)
		for(int i=0; i<9; i++)
			cin >> Array[k][i];
		
	int flag = 0;	
	int sumA = 0, sumB = 0;
	for(int i=0; i<9; i++)
	{
		sumA += Array[0][i];
        if(sumA > sumB)
        {
            cout<<"Yes";
            return 0;
        }
        
		sumB += Array[1][i];
	}
	
	cout<<"No";
	
	return 0;
}