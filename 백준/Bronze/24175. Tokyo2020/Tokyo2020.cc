#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (1) {
		int N;

		cin >> N;
		if (!N) break;
		
		unordered_map<int, int> goldYear;
		unordered_map<int, int> totalMedalYear;

		for (int i = 0; i < N; i++) {
			int Y;
			string s1, s2;
			cin >> Y >> s1 >> s2;

			totalMedalYear[Y]++;
			if (s2 == "Gold")
				goldYear[Y]++;
		}

		int ansGY = -1, cnt = -1;
		for (auto& it : goldYear) {
			if (cnt < it.second || (cnt == it.second && ansGY > it.first)) {
				ansGY = it.first;
				cnt = it.second;
			}
		}

		cnt = -1;
		int ansTY = -1;
		for (auto& it : totalMedalYear) {
			if (cnt < it.second || (cnt == it.second && ansTY > it.first)) {
				ansTY = it.first;
				cnt = it.second;
			}
		}
		cout << ansGY << " " << ansTY << "\n";
	}

	return 0;
}