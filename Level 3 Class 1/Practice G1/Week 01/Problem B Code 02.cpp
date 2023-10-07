#include <bits/stdc++.h>
using namespace std;

const int N = 2e3 + 3;

vector<int> g[N];
int color[N];

bool dfs(int u, int e_c) {
    color[u] = e_c;
    for (int v : g[u])
        if (color[v] == e_c or (color[v] == 0 and dfs(v, e_c == 1 ? 2 : 1)))
            return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int TC; cin >> TC;
    for (int tc = 1; tc <= TC; ++tc) {
        int n, m;
        cin >> n >> m;
        for (int u, v; m--; ) {
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        cout << "Scenario #" << tc << ":\n";
        bool suspicious = false;
        for (int i = 1; i <= n; ++i)
            suspicious or_eq (color[i] == 0 and dfs(i, 1));
        if (suspicious)
            cout << "Suspicious bugs found!\n";
        else cout << "No suspicious bugs found!\n";
        for (int i = 1; i <= n; ++i) {
            g[i].clear();
            color[i] = 0;
        }
    }
    return 0;
}