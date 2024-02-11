// H - Trucks
#include <bits/stdc++.h>
using namespace std;

const int N = 2e4 + 4, P = 15;

int n, depth[N], up[P][N], val[P][N];
vector<pair<int, int>> g[N];

int operation(int v1, int v2) {
    return min(v1, v2);
}

void dfs(int u, int p) {
    for (int p = 1; p < P; ++p) {
        up[p][u] = up[p - 1][up[p - 1][u]];
        val[p][u] = operation(val[p - 1][u], val[p - 1][up[p - 1][u]]);
    }
    for (auto [v, w] : g[u]) {
        if (v == p)
            continue;
        up[0][v] = u;
        val[0][v] = w;
        depth[v] = depth[u] + 1;
        dfs(v, u);
    }
}

pair<int, int> raise(int x, int k) {
    int ans = INT_MAX;
    for (int p = 0; p < P; ++p) {
        if ((k >> p) & 1) {
            ans = operation(ans, val[p][x]);
            x = up[p][x];
        }
    }
    return {x, ans};
}

pair<int, int> LCA(int u, int v) {
    if (depth[u] < depth[v])
        swap(u, v);
    int ans;
    tie(u, ans) = raise(u, depth[u] - depth[v]);
    if (u == v)
        return {u, ans};
    for (int p = P - 1; p >= 0; --p) {
        if (up[p][u] == up[p][v])
            continue;
        ans = operation(ans, val[p][u]);
        ans = operation(ans, val[p][v]);
        u = up[p][u];
        v = up[p][v];
    }
    ans = operation(ans, val[0][u]);
    ans = operation(ans, val[0][v]);
    return {up[0][u], ans};
}

struct {
    int pr[N], sz[N];
    void init() {
        for (int i = 0; i <= n; ++i) {
            pr[i] = i;
            sz[i] = 1;
        }
    }
    int parent(int x) {
        if (x == pr[x])
            return x;
        return pr[x] = parent(pr[x]);
    }
    bool connect(int u, int v) {
        u = parent(u);
        v = parent(v);
        if (u == v)
            return false;
        if (sz[u] < sz[v])
            swap(u, v);
        sz[u] += sz[v];
        pr[v] = u;
        return true;
    }
} dsu;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int m, s;
    while (cin >> n >> m >> s) {
        dsu.init();
        vector<tuple<int, int, int>> es(m);
        for (auto &[w, u, v] : es)
            cin >> u >> v >> w;
        sort(es.begin(), es.end(), greater<tuple<int, int, int>>());
        for (auto [w, u, v] : es) {
            if (not dsu.connect(u, v))
                continue;
            g[u].emplace_back(v, w);
            g[v].emplace_back(u, w);
        }
        dfs(1, 0);
        for (int u, v; s--; ) {
            cin >> u >> v;
            cout << LCA(u, v).second << '\n';
        }
        for (int i = 0; i <= n; ++i) {
            g[i].clear();
        }
    }
    return 0;
}