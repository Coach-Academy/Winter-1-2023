#include <bits/stdc++.h>
using namespace std;

const int N = 1003, M = 1e9;
int n;
vector<tuple<int, int, int>> es;
// O(n * m)
void BellmanFord(int src, vector<int> &dist) {
    for (int i = 1; i < n; ++i)
        for (auto [u, v, w] : es)
            if (dist[u] < M and dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int m; cin >> n >> m;
    es.resize(m);
    for (auto &[u, v, w] : es)
        cin >> u >> v >> w;
    vector<int> d1(n + 1, M), d2;
    d1[1] = 0;
    BellmanFord(1, d1);
    d2 = d1;
    BellmanFord(1, d2);
    cout << "**************\n";
    for (int i = 1; i <= n; ++i)
        if (d2[i] < d1[i])
            cout << i << ' ';
    return 0;
}