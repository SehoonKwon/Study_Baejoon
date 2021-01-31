#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	// your code goes here
	string s, temp = "";
	long long ans = 0;
	for(int i=0; i<3; i++)
	{
		cin >> s;
		string val;
		if(s == "black") val = "0";
		else if(s == "brown") val = "1";
		else if(s == "red") val = "2";
		else if(s == "orange") val = "3";
		else if(s == "yellow") val = "4";
		else if(s == "green") val = "5";
		else if(s == "blue") val = "6";
		else if(s == "violet") val = "7";
		else if(s == "grey") val = "8";
		else val = "9";
		
		if(i < 2) temp +=val;
		else
		{
			long long int x = stoi(temp);
			int y = stoi(val);
			ans = x * pow(10, y);
		}
	}
	
	cout<<ans;
	
	return 0;
}
