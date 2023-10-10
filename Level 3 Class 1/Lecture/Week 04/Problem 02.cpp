// Dijkstra?
// https://vjudge.net/problem/CodeForces-20C
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 5;
ll M = 2e18;
vector<pair<int, int>> g[N];
int n, pr[N];
ll dist[N];
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
                pr[v] = u;
                dist[v] = dist[u] + w;
                pq.emplace(dist[v], v);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int m;
    cin >> n >> m;
    for (int u, v, w, i = 0; i < m; ++i) {
        cin >> u >> v >> w;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u, w);
    }
    dij(1);
    if (dist[n] == M)
        return cout << "-1\n", 0;
    stack<int> s;
    int current = n;
    do {
        s.push(current);
        current = pr[current];
    } while (current > 0);
    for (; not s.empty(); s.pop())
        cout << s.top() << ' ';
    return 0;
}
