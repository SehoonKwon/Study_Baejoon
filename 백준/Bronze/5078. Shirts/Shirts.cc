#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int N, M;
struct point {
	char s;
	char c;
};
vector<point> v;
map<char, int> mymap;

bool cmp(const point& u, const point& v)
{
	if (mymap[u.s] < mymap[v.s]) return true;
	else if (mymap[u.s] == mymap[v.s]) {
		if (u.c < v.c) return true;
		else return false;
	}
	else return false;
}

void SortingIndex()
{
	mymap['S'] = 1;
	mymap['M'] = 2;
	mymap['L'] = 3;
}

int main() {
    SortingIndex();
	while (1) {
		string str;
		cin >> N;
		if (N == 0) break;
		v.clear();
		for (int i = 0; i < N; i++) {
			cin >> str;
			v.push_back({ str[0], str[1] });
		}

		cin >> M;
		for (int i = 0; i < M; i++) {
			cin >> str;
			v.push_back({ str[0], str[1] });
		}
        
		sort(v.begin(), v.end(), cmp);
		for (auto& it : v)
			cout << it.s << it.c << " ";
		cout << "\n";
	}
	return 0;
}