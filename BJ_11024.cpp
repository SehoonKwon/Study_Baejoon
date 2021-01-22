#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Tokenize 연습하기 좋음!! 스킬 익히자

int main()
{
	int T;
	cin >> T;
	cin.ignore();
	while (T--)
	{
		string s;
		getline(cin, s);

		stringstream ss(s); // stringstream 변수에 raw 데이터를 넣는다
		string token; // 분리될 토큰들을 정리할 변수
		int sum = 0;
		while (getline(ss, token, ' ')) // 전체를 토크나이즈, (stringstream변수, 토큰변수, 토크나이즈 할 데이터)
		{
			int temp = stoi(token); //여기서 token들은 토크나이즈 할 데이터를 기준으로 하나씩 떨어져 나온 것
			sum += temp;
		}
		cout << sum << "\n";
	}

	return 0;
}
