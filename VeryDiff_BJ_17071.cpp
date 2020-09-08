//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
////같은 곳을 여러번 방문하므로 일반적인 BFS가 아니다. 규칙을 보면 최초로 방문한 시간 이후로 +2 초마다 방문하므로 체크는 최초시간 한번만
//
//int N, K;
//int visit[500001][2]; //0은 짝수스텝, 1은 홀수스텝 기록. 따로 나누지 않고 배열로 하면 t = 1-t 라는 식을 통해 편리한 코딩가능
//int ans;
//
//struct point
//{
//	int X;
//	int step;
//	int t; // 스위칭용
//};
//
//queue<point> q;
//
//void BFS()
//{
//	queue<point> nq; // 다음번에 검사할 step의 큐(temp같은)
//	visit[N][0] = 0;
//	nq.push({ N, 0 });
//
//	for (int time = 1; ;time++) //while 큐안에서 검사하면 K가 계속 증가되므로 한 step마다 하려면 nq라는 임시저장 큐와 while밖에 반복문 두기
//	{
//		q = nq;
//		while (!nq.empty()) nq.pop();
//		while (!q.empty())
//		{
//			int X = q.front().X;
//			int step = q.front().step;
//			int t = q.front().t;
//			q.pop();
//
//			for (int i : {X - 1, X + 1, 2 * X}) //새로운 코딩스킬이므로 알아둡시다. 저번에 나온 vector를 int x : vector 했던 것과 같은 듯
//			{
//				if (i >= 0 && i <= 500000 && visit[i][1 - t] == -1) //  1-t 중요, 다음 번에 방문할 칸이 가능한 조건이면
//				{
//					visit[i][1 - t] = step + 1;
//					nq.push({ i, step + 1, 1 - t });
//				}
//			}
//		}
//
//		//한번 끝나면 검사, 다 돌고 하면 50만번째 지점까지 체크한 뒤이므로 많이 느림, 찾으면 바로 종료할 수 있도록
//		K += time;
//		if (K > 500000) return;
//		else if (visit[K][time % 2] != -1 && visit[K][time % 2] <= time)
//		{
//			ans = time;
//			return;
//		}
//	}
//}
//
//void solve()
//{
//	if (N == K)
//	{
//		cout << "0" << endl;
//		return;
//	}
//
//	BFS();
//	if (ans == 0) ans = -1;
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	cin >> N >> K;
//	memset(visit, -1, sizeof(visit)); // 0으로 안한 이유는 첫 방문이 0번째 step. 방문 못하는 곳과 구별하기 위해서
//	solve();
//	return 0;
//}