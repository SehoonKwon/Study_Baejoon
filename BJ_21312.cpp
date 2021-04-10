#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Array[3];
vector<int> v;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		cin >> Array[i];
		v.push_back(Array[i]);
	}


	for (int i = 0; i < 2; i++)
		for (int j = i + 1; j < 3; j++)
			v.push_back(Array[i] * Array[j]);

	v.push_back(Array[0] * Array[1] * Array[2]);

	sort(v.rbegin(), v.rend());

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 2)
		{
			cout << v[i];
			return 0;
		}
	}

	cout << v[0];

	return 0;
}
