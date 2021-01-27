#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

//배열돌리기1과 다른 점은 R이 매우커서 규칙을 찾아준 뒤 불필요한 계산 안해야 함.
//처음엔 무턱대고 R을 바깥 기준인 (N-1)*2 + (M-1)*2 로 했으나 틀려서 생각해보니 내부 회전은 더 작은 수여야 됌
//전부를 아우를 수 있는 식을 만들자

int N, M, R;
int Array[301][301];

void input()
{
	cin >> N >> M >> R;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> Array[i][j];
}

//기존에는 Array2에 복사하는 방식으로 했으나 이러면 memcpy로 인한 시간초과 발생. 그냥 원본에 해버리자
void Rotate(int idx)
{
	int temp = Array[idx][idx];
	//윗 부분
	for (int i = idx; i < M - 1 - idx; i++)
		Array[idx][i] = Array[idx][i + 1];

	//오른쪽 부분
	for (int i = idx; i < N - 1 - idx; i++)
		Array[i][M - 1 - idx] = Array[i + 1][M - 1 - idx];

	//아랫 부분
	for (int i = M - 1 - idx; i > idx; i--)
		Array[N - 1 - idx][i] = Array[N - 1 - idx][i - 1];

	//왼쪽 부분
	for (int i = N - 1 - idx; i > idx; i--)
		Array[i][idx] = Array[i - 1][idx];
	Array[idx + 1][idx] = temp;
}

void solve()
{
	int cnt = min(N, M) / 2;
	for (int k = 0; k < cnt; k++)
	{
		int MOD = (2 * ((N - 1 - 2 * k) + (M - 1 - 2 * k)));
		int r = R % MOD;

		for (int i = 0; i < r; i++)
		{
			Rotate(k);
		//	memcpy(Array, Array2, sizeof(Array2)); <- 시간초과의 주범 !! 카피하는 방식을 없애자
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << Array[i][j] << " ";
		cout << "\n";
	}
}

int main()
{
	input();
	solve();
	return 0;
}
