// https://vjudge.net/problem/UVA-558
#include <bits/stdc++.h>
using namespace std;

const int N = 1003, M = 1e9;
int n, dist[N];
vector<tuple<int, int, int>> es;
// O(n * m)
bool BellmanFord(int src) {
    for (int i = 0; i < n; ++i)
        dist[i] = M;
    bool negative_cycle = false;
    dist[src] = 0;
    for (int i = 0; i < n; ++i) {
        for (auto [u, v, w] : es) {
            if (dist[u] < M and dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                negative_cycle = (i + 1 == n);
            }
        }
    }
    return negative_cycle;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int m; cin >> n >> m;
        es.resize(m);
        for (auto &[u, v, w] : es)
            cin >> u >> v >> w;
        cout << (BellmanFord(0) ? "possible\n" : "not possible\n");
    }
    return 0;
}