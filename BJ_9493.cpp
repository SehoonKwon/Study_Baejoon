#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#define endl "\n"

double M, A, B;

int main()
{
	while (1)
	{
		cin >> M >> A >> B;
		if (M == 0 && A == 0 && B == 0)
			break;

		double ta = M / A;
		double tb = M / B;

		double d = (ta - tb) * 3600;

		int h = 0, m = 0;

		if (d >= 3600)
		{
			h = d / 3600;
			d -= 3600 * h;
		}

		if (d >= 60)
		{
			m = d / 60;
			d -= 60 * m;
		}

		string str = "";
		if (h == 0)
			str += "0";
		else
			str += to_string(h);

		str += ":";

		if (m == 0)
			str += "00";
		else
		{
			if (m < 10) str += "0";
			str += to_string(m);
		}
		str += ":";

		if (d == 0)
			str += "00";
		else
		{
			d = round(d);
			if (d < 10) str += "0";
			str += to_string((int)d);
		}

		cout << str << endl;

	}

	return 0;
}
