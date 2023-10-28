#include <bits/stdc++.h>
using namespace std;
const int N = 10004;
bool nodes_v[N], edges_v[N];
vector<pair<int, int>> g[N];

void dfs(int u, vector<int> &nodes) {
    nodes_v[u] = true;
    for (auto [v, i] : g[u])
        if (not nodes_v[v])
            dfs(v, nodes);
    nodes.push_back(u);
}

void euler(int u, int id, vector<int> &es) {
    while (not g[u].empty()) {
        auto [v, i] = g[u].back();
        g[u].pop_back();
        if (edges_v[i])
            continue;
        edges_v[i] = true;
        euler(v, i, es);
    }
    if (~id) es.push_back(id + 1);
}

void ep() {
    cout << "-1\n";
    exit(0);
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int m, n = 0; cin >> m;
    for (int u, v, i = 0; i < m; ++i) {
        cin >> u >> v;
        n = max(n, u);
        n = max(n, v);
        g[u].emplace_back(v, i);
        g[v].emplace_back(u, i);
    }
    if (m < 2) ep();
    vector<vector<int>> comps;
    for (int i = 1; i <= n; ++i) {
        if (g[i].empty() or nodes_v[i])
            continue;
        comps.emplace_back();
        dfs(i, comps.back());
    }
    if ((int) comps.size() > 2)
        ep();
    if ((int) comps.size() == 2) {
        vector<vector<int>> ans;
        for (const auto &comp : comps) {
            int s = comp[0], cnt = 0;
            for (int node : comp)
                if (g[node].size() & 1) {
                    s = node; ++cnt;
                }
            if (cnt > 2) ep();
            ans.emplace_back();
            euler(s, -1, ans.back());
        }
        if ((int) ans[0].size() + (int) ans[1].size() != m)
            ep();
        for (const auto &nodes : ans) {
            cout << nodes.size() << '\n';
            for (int node : nodes)
                cout << node << ' ';
            cout << '\n';
        }
        return 0;
    }
    vector<int> odds;
    for (int node : comps[0])
        if (g[node].size() & 1)
            odds.push_back(node);
    vector<int> ans;
    if (odds.size() == 0)
        euler(comps[0][0], -1, ans);
    else if (odds.size() == 2)
        euler(odds[0], -1, ans);
    else if (odds.size() == 4) {
        int u = odds.back(); odds.pop_back();
        int v = odds.back(); odds.pop_back();
        g[u].emplace_back(v, m + 1);
        g[v].emplace_back(u, m + 1);
        euler(odds[0], -1, ans);
        if (ans.size() != m + 1) ep();
        int p = (int) (find(ans.begin(), ans.end(), m + 2) - ans.begin());
        cout << p << '\n';
        for (int i = 0; i < p; ++i)
            cout << ans[i] << ' ';
        cout << '\n';
        ++p;
        cout << (int) ans.size() - p << '\n';
        for (; p < (int) ans.size(); ++p)
            cout << ans[p] << ' ';
        cout << '\n';
        return 0;
    }
    if (ans.size() != m)
        ep();
    cout << "1\n" << ans[0] << '\n' << (int) ans.size() - 1 << '\n';
    for (int i = 1; i < (int) ans.size(); ++i)
        cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}