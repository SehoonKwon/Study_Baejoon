#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
 
 #define endl "\n"
 
int Array[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
 
int main()
{
	int day, month, year;
	int leapYear;
	int total;
 
	while (1) {
		cin >> day >> month >> year;
 
		if (day == 0 && month == 0 && year == 0) break;
 
		leapYear = 0;
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
			leapYear = 1;
		}
 
		total = 0;
		if (leapYear == 1 && month > 2)	++total;
 
		for(int i=0; i<month; ++i) 
			total += Array[i];
		
		
		total += day;
 
		cout << total << endl;
	}
	
	return 0;
}