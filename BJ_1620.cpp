#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int N, M;
unordered_map<string, int> mymap1;
unordered_map<int, string> mymap2;


int main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> N >> M;
	for(int i =1; i<N+1; i++)
	{
		string str;
		cin >> str;
		mymap1[str] = i;
		mymap2[i] = str;
	}
	
	while(M--)
	{
		string str;
		cin >> str;
		if(str[0] >= 'A' && str[0] <= 'Z')
			cout<<mymap1[str]<<"\n";
		else
			cout<<mymap2[stoi(str)]<<"\n";
	}
	
	return 0;
}
