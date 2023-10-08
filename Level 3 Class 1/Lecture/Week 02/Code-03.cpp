#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> g[N];
int dist[N];

void bfs(int src) {
    memset(dist, 0x3F, sizeof(dist));
    queue<int> q;
    q.push(src);
    dist[src] = 0;
    while (not q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << ' ' << dist[u] << '\n';
        for (int v : g[u]) {
            if (dist[u] + 1 < dist[v]) {
                q.push(v);
                dist[v] = dist[u] + 1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for (int u, v, i = 0; i < m; ++i) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout << "*********************\n";
    bfs(1);
    return 0;
}