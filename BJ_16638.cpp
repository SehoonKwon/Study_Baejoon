//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
////calcul에서 처음엔 vector<char> 하나로 했지만 이러면 계산결과로 나온 int값이 2자리 수 이상일경우 char[1] 한칸에 담지 못해서 틀렸었음.
//
//int N;
//string s;
//int visit[19]; //괄호 유무 체크
//int MAX = -2147483648;
//
//void input()
//{
//	cin >> N;
//	cin >> s;
//}
//
//int oper(int A, int B, char C)
//{
//	if (C == '+') return A + B;
//	else if (C == '-') return A - B;
//	else if (C == '*') return A*B;
//}
//
//int calcul()
//{
//	vector<int> num;
//	vector<char> O;
//	for (int i = 0; i < N;)
//	{
//		if (visit[i] == true)
//		{
//			int A = s[i] - '0', B = s[i + 2] - '0';
//			int R = oper(A, B, s[i + 1]);
//			num.push_back(R);
//			i = i + 3;
//		}
//		else
//		{
//			if ((i % 2) == 0) num.push_back(s[i] - '0');
//			else O.push_back(s[i]);
//			i++;
//		}
//	}
//
//	//1에서 추가되는 부분, * 연산자 우선적으로 먼저 계산하기
//	for (int i = 0; i < O.size(); i++)
//	{
//		if (O[i] == '*')
//		{
//			int R = oper(num[i], num[i + 1], O[i]);
//			num[i] = R;
//			num.erase(num.begin() + i + 1);
//			O.erase(O.begin() + i);
//			i--; //해당 인덱스 지웠으니 땡겨지면서 새로운 연산자인데 i--를 안해주면 검사하지 않고 넘어가버림
//		}
//	}
//
//	int res = num[0];
//	for (int num_cnt = 1, O_cnt = 0; O_cnt < O.size(); num_cnt++, O_cnt++)
//	{
//		res = oper(res, num[num_cnt], O[O_cnt]);
//	}
//
//	return res;
//}
//
//void DFS(int idx)
//{
//	if (idx > N - 2)
//	{
//		int c = calcul();
//		if (c > MAX) MAX = c;
//		return;
//	}
//
//	//현재 칸에 괄호가 추가 가능할때
//	for (int i = idx; i < N; i = i + 2)
//	{
//		if (i < N - 2)
//		{
//			//현재 칸에 괄호를 추가하는 경우
//			if (visit[i] == false && visit[i + 2] == false)
//			{
//				visit[i] = true;
//				visit[i + 2] = true;
//				DFS(i + 2);
//				visit[i] = false;
//				visit[i + 2] = false;
//			}
//
//			//현재 칸에 괄호를 추가하지 않는 경우
//			//해당 작업 안해줘도 for문으로 인해 괄호 안한 것과 같은 효과
//		}
//		else
//			DFS(i + 1);
//	}
//}
//
//void solve()
//{
//	DFS(0);
//
//	cout << MAX << endl;
//}
//
//int main()
//{
//	input();
//	solve();
//	return 0;
//}