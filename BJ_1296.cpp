#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int N;
string strYD;
string strH[51];
unordered_map<char, int> cntLOVE;

struct point
{
	string teamName;
	int cnt;
};
vector<point> v;

bool cmp(const point& u, const point& v)
{
	if (u.cnt > v.cnt) return true;
	else if (u.cnt == v.cnt) {
		if (u.teamName < v.teamName) return true;
		else return false;
	}
	else return false;
}

int main() {

	cin >> strYD >> N;
	for (int i = 0; i < N; i++)
		cin >> strH[i];

	for (int i = 0; i < strYD.size(); i++)
		cntLOVE[strYD[i]]++;

	for (int i = 0; i < N; i++) {
		unordered_map<char, int> cntTemp = cntLOVE;
		for (int j = 0; j < strH[i].size(); j++)
			cntTemp[strH[i][j]]++;

		int sum = (cntTemp['L'] + cntTemp['O']) * (cntTemp['L'] + cntTemp['V']) * (cntTemp['L'] + cntTemp['E']) * (cntTemp['O'] + cntTemp['V']) * (cntTemp['O'] + cntTemp['E']) * (cntTemp['V'] + cntTemp['E']);
		int res = sum % 100;
		v.push_back({ strH[i], res });
	}

	sort(v.begin(), v.end(), cmp);
	cout << v[0].teamName;

	return 0;
}
