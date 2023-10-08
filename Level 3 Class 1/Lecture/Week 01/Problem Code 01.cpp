// Is it a tree
// https://vjudge.net/problem/SPOJ-PT07Y
#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

vector<int> g[N];
bool visited[N];

void dfs(int u) {
    visited[u] = true;
    for (int v : g[u])
        if (not visited[v])
            dfs(v);
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int u, v, i = 0; i < m; ++i) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    if (n - 1 != m)
        return cout << "NO\n", 0;
    dfs(1);
    if (accumulate(visited + 1, visited + n + 1, 0) == n)
        cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
