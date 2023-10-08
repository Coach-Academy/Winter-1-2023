#include <bits/stdc++.h>
using namespace std;

const int N = 1003;

int nxt[N], d[N];
bool in_deg[N];

int main() {
    int n, p;
    cin >> n >> p;
    for (int u, v, t, i = 0; i < p; ++i) {
        cin >> u >> v >> t;
        d[u] = t;
        nxt[u] = v;
        in_deg[v] = true;
    }
    vector<tuple<int, int, int>> ans;
    for (int i = 1; i <= n; ++i) {
        if (in_deg[i] or not nxt[i])
            continue;
        int j = i, m = 1e9;
        while (nxt[j]) {
            m = min(m, d[j]);
            j = nxt[j];
        }
        ans.emplace_back(i, j, m);
    }
    cout << ans.size() << '\n';
    for (auto [s, e, d] : ans)
        cout << s << ' ' << e << ' ' << d << '\n';
    return 0;
}