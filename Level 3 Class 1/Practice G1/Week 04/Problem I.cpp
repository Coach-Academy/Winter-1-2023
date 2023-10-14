#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 5;
const ll M = 2e18;

int n;
ll dist[N];
bool train_used[N];
vector<tuple<int, int, bool>> g[N];

void dij(int src) {
    for (int i = 0; i <= n; ++i)
        dist[i] = M;
    priority_queue<pair<ll, int>> pq;
    pq.emplace(dist[src] = 0, src);
    while (not pq.empty()) {
        auto [c, u] = pq.top(); pq.pop();
        c *= -1;
        if (dist[u] < c)
            continue;
        for (auto [v, w, is_train] : g[u]) {
            if (c + w < dist[v]) {
                train_used[v] = is_train;
                pq.emplace(-(dist[v] = c + w), v);
            } else if (c + w == dist[v] and not is_train) {
                train_used[v] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int m, k, ans = 0;
    cin >> n >> m >> k;
    for (int u, v, w, i = 0; i < m; ++i) {
        cin >> u >> v >> w;
        g[u].emplace_back(v, w, false);
        g[v].emplace_back(u, w, false);
    }
    for (int s, w, i = 0; i < k; ++i) {
        cin >> s >> w;
        g[1].emplace_back(s, w, true);
        g[s].emplace_back(1, w, true);
    }
    dij(1);
    k -= accumulate(train_used, train_used + n + 1, 0);
    cout << k << '\n';
    return 0;
}