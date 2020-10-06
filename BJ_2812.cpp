#include <string>
#include <vector>
#include <iostream>
using namespace std;

//프로그래머스 문제
//그리디방식 아이디어 생각안났음

void solution(string number, int k) {
	string answer = "";
	vector<int> v;
	for (int i = 0; i < number.size(); i++)
		v.push_back(number[i] - '0');

	vector<int> ans;
	for (int i = 0; i < v.size(); i++)
	{
		if (ans.size() == 0)
			ans.push_back(v[i]);
		else
		{
			if (k == 0)
				ans.push_back(v[i]);
			else
			{
				//더 큰 값을 만날 때 까지 계속 pop
				while (k > 0 && ans.size() > 0 && ans[ans.size() - 1] < v[i])
				{
					ans.pop_back();
					k--;
				}
				ans.push_back(v[i]);
			}
		}
	}

	if (k > 0)
	{
		for (int i = 0; i < k; i++)
			ans.pop_back();
	}

	for (int i = 0; i < ans.size(); i++)
		answer.push_back(ans[i] + '0');

	cout << answer;
}

int main()
{
	string s;
	int a, k;
	cin >> a >> k >> s;
	solution(s, k);
	return 0;
}
