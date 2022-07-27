#include <iostream>
#include <queue>
using namespace std;

int dx[] = { 0,0,-1,1 };
int dy[] = { 1,-1,0,0 };
char Array[11][11];
int visit[11][11];

struct point {
	int x;
	int y;
	int cnt;
};
queue<point> q;

int main() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> Array[i][j];
			if (Array[i][j] == 'L') {
				q.push({ j, i, 0 });
				visit[i][j] = true;
			}
		}
	}

	while (!q.empty()) {
		int X = q.front().x;
		int Y = q.front().y;
		int step = q.front().cnt;
		q.pop();

		if (Array[Y][X] == 'B') {
			cout << step - 1;
			return 0;
		}

		for (int i = 0; i < 4; i++) {
			int nx = X + dx[i];
			int ny = Y + dy[i];

			if (nx > -1 && nx < 10 && ny > -1 && ny < 10) {
				if (visit[ny][nx] == false && Array[ny][nx] != 'R') {
					visit[ny][nx] = true;
					q.push({ nx, ny, step + 1 });
				}
			}
		}
	}

	return 0;
}