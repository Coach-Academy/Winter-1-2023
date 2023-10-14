#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1003, M = 1e9;
int n, dist[N][N];
vector<pair<int, int>> g[N];

void dij(int src) {
    for (int i = 0; i <= n; ++i)
        dist[src][i] = M;
    priority_queue<pair<int, int>> pq;
    pq.emplace(dist[src][src] = 0, src);
    while (not pq.empty()) {
        auto [c, u] = pq.top(); pq.pop();
        c *= -1;
        if (dist[src][u] < c)
            continue;
        for (auto [v, w] : g[u])
            if (c + w < dist[src][v])
                pq.emplace(-(dist[src][v] = c + w), v);
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int m, k, ans = 0;
    cin >> n >> m >> k;
    vector<pair<int, int>> es(m);
    for (auto &[u, v] : es) {
        int w; cin >> u >> v >> w;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u, w);
    }
    for (int i = 1; i <= n; ++i)
        dij(i);
    vector<pair<int, int>> routes(k);
    for (auto &[u, v] : routes) {
        cin >> u >> v;
        ans += dist[u][v];
    }
    for (auto [e_u, e_v] : es) {
        int cur = 0;
        for (auto [r_u, r_v] : routes) {
            int tmp = dist[r_u][r_v];
            tmp = min(tmp, dist[r_u][e_u] + dist[e_v][r_v]);
            tmp = min(tmp, dist[r_u][e_v] + dist[e_u][r_v]);
            cur += tmp;
        }
        ans = min(ans, cur);
    }
    cout << ans << '\n';
    return 0;
}