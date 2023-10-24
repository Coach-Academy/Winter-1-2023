// Mail Delivery
// https://cses.fi/problemset/task/1691/
#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e5 + 5;
int n;
bool visited[2 * N];
vector<pair<int, int>> g[N];
vector<int> ans;

// This works for both directed and undirected.
// This also works for both Euler circuit and Euler graph
void euler_circuit(int u) {
    while (not g[u].empty()) {
        auto [v, i] = g[u].back();
        g[u].pop_back();
        if (visited[i])
            continue;
        visited[i] = true;
        euler_circuit(v);
    }
    ans.push_back(u);
}
 
int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int m; cin >> n >> m;
    for (int u, v, i = 0; i < m; ++i) {
        cin >> u >> v;
        g[u].emplace_back(v, i);
        g[v].emplace_back(u, i);
    }
    for (int i = 1; i <= n; ++i)
        if ((int) g[i].size() & 1)
            return cout << "IMPOSSIBLE\n", 0;
    euler_circuit(1);
    if ((int) ans.size() != m + 1)
        return cout << "IMPOSSIBLE\n", 0;
    for (int node : ans)
        cout << node << ' ';
    return 0;
}