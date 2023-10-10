// Buy a Ticket
// https://vjudge.net/problem/CodeForces-938D
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 5;
ll M = 2e18;
vector<pair<int, ll>> g[N];
int n, pr[N];
ll dist[N];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int m;
    cin >> n >> m;
    for (int u, v, i = 0; i < m; ++i) {
        ll w; cin >> u >> v >> w;
        w *= 2;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u, w);
    }
    priority_queue<pair<ll, int>> pq;
    for (int i = 1; i <= n; ++i) {
        cin >> dist[i];
        pq.emplace(-dist[i], i);
    }
    while (not pq.empty()) {
        auto [c, u] = pq.top(); pq.pop();
        c *= -1;
        if (dist[u] < c)
            continue;
        for (auto [v, w] : g[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.emplace(-dist[v], v);
            }
        }
    }
    for (int i = 1; i <= n; ++i)
        cout << dist[i] << ' ';
    return 0;
}
