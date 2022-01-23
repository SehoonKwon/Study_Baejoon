#include <iostream>
#include <string>
using namespace std;
 
string str;
char Array[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
 
int main() {
	while(1)
	{
		getline(cin, str);
		if(str == "#") break;
 
		int cnt = 0;
		for(int i=0; i<str.size(); i++)
			for(int j=0; j<10; j++)
				if(str[i] == Array[j])
					cnt++;
 
		cout<<cnt<<"\n";
	}
	return 0;
}