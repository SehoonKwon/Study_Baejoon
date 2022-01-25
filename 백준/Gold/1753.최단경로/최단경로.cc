#include<iostream>
#include<vector>
#include<queue>
using namespace std;

//게시판 틀린곳 찾아주기 아마 컴패어인듯

int V, E, K;
int u, v, w;
typedef struct _info {
	int end;
	int weight;
}info;
typedef struct _heap {
	int weight;
	int vertex;
}heap;
struct compare {
	bool operator()(heap& first, heap& second) {
		return first.weight > second.weight;
	}
};
vector<info> graph[20001];
int dist[20001];
void Dijkstra(void) {
	priority_queue<heap, vector<heap>, compare> minheap;
	minheap.push({ 0, K });
	while (!minheap.empty()) {
		int now_cost = minheap.top().weight;
		int now_vertex = minheap.top().vertex;
		minheap.pop();
		if (dist[now_vertex] < now_cost) {
			continue;
		}
		for (int i = 0; i < graph[now_vertex].size(); i++) {
			int next_cost = graph[now_vertex][i].weight;
			int next_vertex = graph[now_vertex][i].end;
			if (dist[next_vertex] > now_cost + next_cost) {
				dist[next_vertex] = now_cost + next_cost;
				minheap.push({ dist[next_vertex], next_vertex });
			}
		}
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> V >> E;
	cin >> K;
	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		graph[u].push_back({ v, w });
	}
	for (int i = 1; i <= V; i++) {
		if (i == K) {
			dist[i] = 0;
		}
		else {
			dist[i] = 1e9;
		}
	}
	Dijkstra();
	for (int i = 1; i <= V; i++) {
		if (dist[i] == 1e9) {
			cout << "INF\n";
		}
		else {
			cout << dist[i] << "\n";
		}
	}
	return 0;
}