#include <iostream>
#include <vector>
using namespace std;

struct point
{
	int x;
	int y;
};

int main() {
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		
		vector<point> v;
		for(int i=1; i<12; i++){
			for(int j=i+1; j<=12; j++)
				if(i + j == N)
					v.push_back({i, j});
		}
		
		cout<<"Pairs for "<<N<<": ";

		for(int i=0; i<v.size(); i++){
				if(i > 0) cout<<", ";
				cout<<v[i].x <<" "<<v[i].y;
		}
		cout<<"\n";
	}
	return 0;
}