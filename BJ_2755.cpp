#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>
using namespace std;

int N;

struct point
{
	int x;
	string y;
};

unordered_map<string, point> mymap;

void input()
{
	cin >> N;
	while (N--)
	{
		string s1, s2;
		int a;

		cin >> s1 >> a >> s2;
		mymap[s1] = { a, s2 };
	}
}

void solve()
{
	double res = 0;
	int n = 0;
	for (auto it : mymap)
	{
		n += it.second.x;

		int t1 = it.second.x;
		string t2 = it.second.y;
		if (t2 == "A+")
			res += 4.3 * t1;
		else if (t2 == "A0")
			res += 4.0 * t1;
		else if (t2 == "A-")
			res += 3.7 * t1;
		else if (t2 == "B+")
			res += 3.3 * t1;
		else if (t2 == "B0")
			res += 3.0 * t1;
		else if (t2 == "B-")
			res += 2.7 * t1;
		else if (t2 == "C+")
			res += 2.3 * t1;
		else if (t2 == "C0")
			res += 2.0 * t1;
		else if (t2 == "C-")
			res += 1.7 * t1;
		else if (t2 == "D+")
			res += 1.3 * t1;
		else if (t2 == "D0")
			res += 1.0 * t1;
		else if (t2 == "D-")
			res += 0.7 * t1;
	}

	res /= n;
	res = (round(res * 100)) / 100; //소수 3번째 자리에서 반올림 하려면 소수 3번째 자리의 숫자가 첫번째 소수가 되도록 설정
                                    //round 함수를 이용해 반올림을 구하고 다시 올렸던 크기만큼 나눠주기

	cout << fixed;
	cout.precision(2);
	cout << res;
}

int main()
{
	input();
	solve();
	return 0;
}
