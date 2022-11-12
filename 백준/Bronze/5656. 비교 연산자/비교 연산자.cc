#include <iostream>
#include <string>
using namespace std;

int main() {
	int A, B;
	string S;
	int pCase = 1;
	while (1) {
		cin >> A >> S >> B;
		if (S == "E") break;

		int res = 0;
		if (S == ">") res = A > B;
		else if (S == ">=") res = A >= B;
		else if (S == "<") res = A < B;
		else if (S == "<=") res = A <= B;
		else if (S == "==") res = A == B;
		else if (S == "!=") res = A != B;
		
		if (res) printf("Case %d: true\n", pCase);
		else printf("Case %d: false\n", pCase);
		pCase++;
	}
	return 0;
}