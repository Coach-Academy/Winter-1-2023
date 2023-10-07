#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

bool current[N], desired[N];
vector<int> g[N], ans;

void dfs(int u, int p, int cur_flip, int other_flip) {
    bool value = current[u] xor cur_flip;
    if (value != desired[u]) {
        ans.push_back(u);
        cur_flip xor_eq true;
    }
    for (int v : g[u])
        if (v != p)
            dfs(v, u, other_flip, cur_flip);
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n; cin >> n;
    for (int u, v, i = 1; i < n; ++i) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (int i = 1; i <= n; ++i)
        cin >> current[i];
    for (int i = 1; i <= n; ++i)
        cin >> desired[i];
    dfs(1, 0, 0, 0);
    cout << ans.size() << '\n';
    for (int node : ans)
        cout << node << '\n';
    return 0;
}