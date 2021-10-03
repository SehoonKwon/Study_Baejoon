#include <iostream>
using namespace std;

char MS[2], TK[2];
int wms, wtk;

void game(char MS, char TK)
{
	if(MS == 'R')
	{
		if(TK == 'S')	wms++;
		else if(TK == 'P') wtk++;
	}
	else if(MS == 'S')
	{
		if(TK == 'R') wtk++;
		else if(TK == 'P') wms++;
	}
	else if(MS == 'P')
	{
		if(TK == 'R') wms++;
		else if(TK == 'S') wtk++;
	}
}

int main() {
	// your code goes here
	
	for(int i=0; i<2; i++)
		cin >> MS[0] >> MS[1] >> TK[0] >> TK[1];
	
	for(int i=0; i<2; i++)
	{
		//민성이 기준
		wms = 0, wtk = 0;
		for(int j=0; j<2; j++)
			game(MS[i], TK[j]);
		
		if(wms == 2)
		{
			cout<<"MS";
			return 0;
		}
		
		//태경이 기준
		wms = 0, wtk = 0;
		for(int j=0; j<2; j++)
			game(MS[j], TK[i]);
		
		if(wtk == 2)
		{
			cout<<"TK";
			return 0;
		}
	}
		
	cout << "?";
	
	return 0;
}
