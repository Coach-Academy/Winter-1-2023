#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 6;

// Tri-state visited => (0 => unvisited, 1 => stack, 2 => visited and out of stack)
int state[N], in_deg[N];
bool visited[N];
vector<int> g[N];

bool is_cyclic(int u) {
    ++state[u];
    for (int v : g[u])
        if (state[v] == 1 or (state[v] == 0 and is_cyclic(v)))
            return true;
    ++state[u];
    return false;
}

void dfs(int u) {
    visited[u] = true;
    for (int v : g[u])
        if (not visited[v])
            dfs(v);
    cout << u << '\n';
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
            ++in_deg[u];
            g[v].push_back(u);
        }
        bool is_cyclic_state = false;
        for (int i = 1; i <= n; ++i)
            if (state[i] == 0 and is_cyclic(i)) {
                is_cyclic_state = true;
                break;
            }
        if (is_cyclic_state)
            cout << "IMPOSSIBLE\n";
        else {
            for (int i = 1; i <= n; ++i)
                if (not visited[i] and in_deg[i] == 0)
                    dfs(i);
        }
        for (int i = 1; i <= n; ++i) {
            g[i].clear();
            state[i] = in_deg[i] = 0;
            visited[i] = false;
        }
    }
    return 0;
}