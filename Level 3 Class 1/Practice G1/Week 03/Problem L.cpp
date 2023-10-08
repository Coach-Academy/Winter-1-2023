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

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int n, m, k, mn = 2e9;
        cin >> n >> m >> k;
        vector<pair<int, pair<int, int>>> es;
        for (int u, v, w, i = 0; i < m; ++i) {
            cin >> u >> v >> w;
            es.push_back({w, {u, v}});
            mn = min(mn, abs(w - k));
        }
        dsu.init(n + 1);
        sort(es.begin(), es.end());
        int i = 0;
        for (; i < m and es[i].first <= k; ++i)
            dsu.connect(es[i].second.first, es[i].second.second);
        ll ans = 0;
        bool small = true;
        for (; i < m; ++i)
            if (dsu.connect(es[i].second.first, es[i].second.second)) {
                ans += es[i].first - k;
                small = false;
            }
        if (small) cout << mn << '\n';
        else cout << ans << '\n';
    }
    return 0;
}