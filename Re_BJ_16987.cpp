//#include <iostream>
//using namespace std;
//
////문제를 잘 이해해야될듯. 안깨지면 그걸로 계속 치는게 아니라 왼쪽에 있는거 집어서 치고 '내려놓음' 그 후 집었던 계란의 오른쪽에 있는 계란 집어서 치고 반복임
//
//int N;
//int MAX = 0;
//
//struct point
//{
//	int S;
//	int W;
//};
//
//point egg[8];
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> egg[i].S >> egg[i].W;
//}
//
//int check()
//{
//	int cnt = 0;
//	for (int i = 0; i < N; i++)
//		if (egg[i].S <= 0) cnt++;
//	return cnt;
//}
//
//void DFS(int now)
//{
//	//마지막에 잡은게 가장 오른쪽 계란이라면
//	if (now == N)
//	{
//		int res = check();
//		if (res > MAX) MAX = res;
//		return;
//	}
//	
//	// 집은게 깨져있는 계란인경우
//	if (egg[now].S <= 0)
//	{
//		DFS(now + 1);
//		return; //리턴 해줘야 탐색끝나고 해당 경우에 대해 더 이상 탐색 안함
//	}
//
//	int flag = 0; // 모두 깨져있는 상태인지 체크용
//	for (int i = 0; i < N; i++)
//	{
//		if (now == i) continue;
//		if (egg[i].S <= 0) continue;
//		
//		flag = 1; //한개라도 안깨진게 있다고 표시
//		egg[now].S -= egg[i].W;
//		egg[i].S -= egg[now].W;
//		DFS(now + 1); //집었던 것의 오른쪽 계란
//		egg[now].S += egg[i].W;
//		egg[i].S += egg[now].W;		
//	}
//
//	//모두 깨져있다면 바로 마지막 걸로 보내서 마무리
//	if (flag == 0)
//		DFS(N);
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