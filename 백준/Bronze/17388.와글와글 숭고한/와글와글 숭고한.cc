#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct univ
{
	int x;
	string name;
};
vector<univ> v(3);

bool cmp(const univ& u, const univ& v)
{
	if (u.x < v.x) return true;
	else return false;
}

int main() {

	cin >> v[0].x >> v[1].x >> v[2].x;
	v[0].name = "Soongsil";
	v[1].name = "Korea";
	v[2].name = "Hanyang";

	if (v[0].x + v[1].x + v[2].x >= 100) cout << "OK";
	else
	{
		sort(v.begin(), v.end(), cmp);
		cout << v[0].name;
	}
	return 0;
}