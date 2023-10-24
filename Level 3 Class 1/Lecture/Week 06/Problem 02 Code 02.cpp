// Teleporters Path
// https://cses.fi/problemset/task/1693/
#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e5 + 5;
int n, in_deg[N], out_deg[N];
vector<int> g[N], ans;
 
// This also works for both Euler circuit and Euler path
void euler_path(int u) {
    while (not g[u].empty()) {
        int v = g[u].back();
        g[u].pop_back();
        euler_path(v);
    }
    ans.push_back(u);
}
 
int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int m; cin >> n >> m;
    for (int u, v, i = 0; i < m; ++i) {
        cin >> u >> v;
        ++in_deg[v];
        ++out_deg[u];
        g[u].emplace_back(v);
    }
    for (int i = 2; i < n; ++i)
        if (in_deg[i] != out_deg[i])
            return cout << "IMPOSSIBLE\n", 0;
    if (in_deg[1] + 1 != out_deg[1] or in_deg[n] - 1 != out_deg[n])
        return cout << "IMPOSSIBLE\n", 0;
    euler_path(1);
    if ((int) ans.size() != m + 1)
        return cout << "IMPOSSIBLE\n", 0;
    reverse(ans.begin(), ans.end());
    for (int node : ans)
        cout << node << ' ';
    return 0;
}