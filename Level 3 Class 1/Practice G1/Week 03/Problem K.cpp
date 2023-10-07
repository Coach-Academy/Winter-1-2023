#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct {
    vector<int> pr, sz;
    void init(int n) {
        pr = vector<int>(n);
        iota(pr.begin(), pr.end(), 0);
        sz = vector<int>(n, 1);
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

const int MOD = 1e9;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    dsu.init(n + 1);
    vector<pair<int, pair<int, int>>> es;
    for (int u, v, w, i = 0; i < m; ++i) {
        cin >> u >> v >> w;
        es.push_back({w, {u, v}});
    }
    sort(es.begin(), es.end(), greater<>());
    vector<ll> suf(m + 1);
    for (int i = m - 1; i >= 0; --i) {
        suf[i] = suf[i + 1] + es[i].first;
    }
    int ans = 0;
    for (int i = 0; i < m; ++i) {
        auto [u, v] = es[i].second;
        if (dsu.parent(u) == dsu.parent(v))
            continue;
        int sz_u = dsu.sz[dsu.parent(u)];
        int sz_v = dsu.sz[dsu.parent(v)];
        dsu.connect(u, v);
        int pairs_cnt = 1ll * sz_u * sz_v % MOD;
        int value = 1ll * pairs_cnt * suf[i] % MOD;
        ans = (ans + value) % MOD;
    }
    cout << ans << '\n';
    return 0;
}