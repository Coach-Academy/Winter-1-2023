// F - Nlogonian Tickets
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5, P = 17, IDEN = 0;

int n, depth[N], up[P][N], val[P][N];
vector<pair<int, int>> g[N];

int operation(int v1, int v2) {
    return max(v1, v2);
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
    int ans = IDEN;
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

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    while (cin >> n) {
        if (n == 0)
            break;
        for (int u, v, t, i = 1; i < n; ++i) {
            cin >> u >> v >> t;
            g[u].emplace_back(v, t);
            g[v].emplace_back(u, t);
        }
        dfs(1, 0);
        int q; cin >> q;
        for (int u, v; q--; ) {
            cin >> u >> v;
            cout << LCA(u, v).second << '\n';
        }
        for (int i = 0; i <= n; ++i)
            g[i].clear();
    }
    return 0;
}