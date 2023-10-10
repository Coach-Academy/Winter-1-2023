// Highways
// https://vjudge.net/problem/SPOJ-HIGHWAYS
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5, M = 2e9;
vector<pair<int, int>> g[N];

int n, dist[N];

void dij(int src) {
    for (int i = 1; i <= n; ++i)
        dist[i] = M;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.emplace(0, src);
    dist[src] = 0;
    while (not pq.empty()) {
        auto [c, u] = pq.top(); pq.pop();
        if (dist[u] < c)
            continue;
        for (auto [v, w] : g[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.emplace(dist[v], v);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int m, s, e;
        cin >> n >> m >> s >> e;
        for (int u, v, w, i = 0; i < m; ++i) {
            cin >> u >> v >> w;
            g[u].emplace_back(v, w);
            g[v].emplace_back(u, w);
        }
        dij(s);
        if (dist[e] < M)
            cout << dist[e] << '\n';
        else cout << "NONE\n";
        for (int i = 1; i <= n; ++i)
            g[i].clear();
    }
    return 0;
}
