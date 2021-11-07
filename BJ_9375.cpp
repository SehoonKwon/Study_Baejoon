#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


int main() {
	
	int T, N;
	cin >> T;
	
	while(T--)
	{
		unordered_map<string, int> mymap;
		string s1, s2;
		cin >> N;
		for(int i=0; i<N; i++)
		{
			cin >> s1 >> s2;
			mymap[s2]++;
		}
		
		int sum = 1;
		for(auto it : mymap)
			sum *= (it.second + 1);
		cout << sum - 1 <<"\n";
	}
	
	return 0;
}
