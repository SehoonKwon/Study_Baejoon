#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() 
{
	string s;
	stack<int> stk;
	while (1) {
		getline(cin, s);
		if (s == "문제")
			stk.push(1);
		else if (s == "고무오리") {
			if (stk.empty()) {
				stk.push(1);
				stk.push(1);
			}
			else
				stk.pop();
		}
		else if (s == "고무오리 디버깅 끝") break;
	}

	if (stk.empty()) cout << "고무오리야 사랑해";
	else cout << "힝구";

	return 0;
}