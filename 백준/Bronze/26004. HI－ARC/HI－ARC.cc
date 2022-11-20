#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

char Array[] = {'H', 'I', 'A', 'R', 'C'};
unordered_map<char, int> mymap;

int main() {
	int N;
	string s;
	cin >> N >> s;
	
	for(int i=0; i<s.size(); i++){
		for(int j=0; j<5; j++)
			if(Array[j] == s[i])
				mymap[s[i]]++;
	}
	
	int MIN = (int)1e9;
	for(auto &it : mymap)
		MIN = min(MIN, it.second);
	
    if(mymap.size() < 5)
        MIN = 0;
    
	cout<<MIN;
	
	return 0;
}