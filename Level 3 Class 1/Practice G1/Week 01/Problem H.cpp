#include <bits/stdc++.h>
using namespace std;

const int N = 102;

bool visited[N];
vector<int> g[N];

void dfs(int u) {
    visited[u] = true;
    for (int v : g[u])
        if (not visited[v])
            dfs(v);
    cout << u << ' ';
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    while (true) {
        int n, m;
        cin >> n >> m;
        if (n == 0 and m == 0)
            break;
        for (int u, v; m--; ) {
            cin >> u >> v;
            g[v].push_back(u);
        }
        for (int i = 1; i <= n; ++i)
            if (not visited[i]) dfs(i);
        cout << '\n';
        for (int i = 1; i <= n; ++i) {
            visited[i] = false;
            g[i].clear();
        }
    }
    return 0;
}