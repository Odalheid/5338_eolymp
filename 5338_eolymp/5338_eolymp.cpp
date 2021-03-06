#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int vertices;
	cin >> vertices;
	vector<vector<int>>graph(vertices);
	for (int j = 0; j < vertices; ++j) {
		vector<int> tmp(vertices);
		for (int i = 0; i < vertices; ++i) cin >> tmp[i];
		graph[j] = tmp;
	}
	int source, destination;
	cin >> source >> destination;
	--source, --destination;
	vector<int> dist(vertices, -1);
	dist[source] = 0;
	queue<int> q;
	q.push(source);
	while (q.size() > 0) {
		int v = q.front();
		for (int j = 0; j < vertices; ++j) {
			if (graph[v][j] && dist[j] == -1) {
				dist[j] = dist[v] + 1;
				if (j == destination)break;
				else q.push(j);
			}
		}
		q.pop();
	}
	cout << dist[destination];
    return 0;
}

