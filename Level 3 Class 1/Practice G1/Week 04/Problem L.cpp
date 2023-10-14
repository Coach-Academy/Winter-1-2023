#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5, M = 1e9 + 10000;

int n, dist[N];
vector<pair<int, int>> g[N];

void dij(int src) {
    for (int i = 0; i <= n; ++i)
        dist[i] = M;
    priority_queue<pair<int, int>> pq;
    pq.emplace(dist[src] = 0, src);
    while (not pq.empty()) {
        auto [c, u] = pq.top(); pq.pop();
        c *= -1;
        if (dist[u] < c)
            continue;
        for (auto [v, w] : g[u]) {
            if (c + w < dist[v])
                pq.emplace(-(dist[v] = c + w), v);
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int m, s, l, ans = 0;
    cin >> n >> m >> s;
    vector<tuple<int, int, int>> es(m);
    for (auto &[w, u, v] : es) {
        cin >> u >> v >> w;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u, w);
    }
    cin >> l;
    dij(s);
    for (int i = 1; i <= n; ++i)
        ans += (dist[i] == l);
    for (auto [w, u, v] : es) {
        if (dist[u] < l and l < dist[u] + w) {
            int rem = w - (l - dist[u]);
            if (dist[v] + rem >= l) {
                ++ans;
            }
            if (dist[v] + rem == l)
                continue;
        }
        if (dist[v] < l and l < dist[v] + w) {
            int rem = w - (l - dist[v]);
            if (dist[u] + rem >= l) {
                ++ans;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}