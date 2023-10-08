// List with splice is used
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct {
    vector<int> pr, sz;
    vector<list<int>> ls;
    void init(int n) {
        pr = vector<int>(n);
        iota(pr.begin(), pr.end(), 0);
        sz = vector<int>(n, 1);
        ls = vector<list<int>>(n);
        for (int i = 0; i < n; ++i)
            ls[i] = {i};
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
        ls[u].splice(ls[u].end(), ls[v]);
        sz[u] += sz[v];
        pr[v] = u;
        return true;
    }
} dsu;
//
int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n; cin >> n;
    dsu.init(n + 1);
    for (int u, v, i = 1; i < n; ++i) {
        cin >> u >> v;
        dsu.connect(u, v);
    }
    auto &ls = dsu.ls[dsu.parent(1)];
    for (int x : ls)
        cout << x << ' ';
    return 0;
}