// E - Misha, Grisha and Underground
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5, P = 17;

int n, depth[N], up[P][N];
vector<int> g[N];

void dfs(int u) {
    for (int p = 1; p < P; ++p)
        up[p][u] = up[p - 1][up[p - 1][u]];
    for (int v : g[u]) {
        up[0][v] = u;
        depth[v] = depth[u] + 1;
        dfs(v);
    }
}

int raise(int x, int k) {
    for (int p = 0; p < P; ++p)
        if ((k >> p) & 1)
            x = up[p][x];
    return x;
}

int LCA(int u, int v) {
    if (depth[u] < depth[v])
        swap(u, v);
    u = raise(u, depth[u] - depth[v]);
    if (u == v)
        return u;
    for (int p = P - 1; p >= 0; --p) {
        if (up[p][u] == up[p][v])
            continue;
        u = up[p][u];
        v = up[p][v];
    }
    return up[0][u];
}

int solve(int d, int u, int v) {
    int l1 = LCA(u, d);
    int l2 = LCA(v, d);
    if (depth[l1] < depth[l2])
        swap(l1, l2);
    int ans = depth[d] - depth[l1] + 1;
    if (l1 == l2)
        ans += depth[LCA(u, v)] - depth[l1];
    return ans;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int q; cin >> n >> q;
    for (int p, i = 2; i <= n; ++i) {
        cin >> p;
        g[p].push_back(i);
    }
    dfs(1);
    for (int a, b, c; q--; ) {
        cin >> a >> b >> c;
        int ans = 0;
        ans = max(ans, solve(a, b, c));
        ans = max(ans, solve(b, a, c));
        ans = max(ans, solve(c, a, b));
        cout << ans << '\n';
    }
    return 0;
}