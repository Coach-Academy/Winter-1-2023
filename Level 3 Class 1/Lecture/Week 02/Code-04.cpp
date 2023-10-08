#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> g[N];
bool visited[N];

void bfs(int src) {
    queue<pair<int, int>> q;
    q.emplace(src, 0);
    while (not q.empty()) {
        auto [u, d] = q.front();
        q.pop();
        cout << u << ' ' << d << '\n';
        for (int v : g[u]) {
            if (not visited[v]) {
                q.emplace(v, d + 1);
                visited[v] = true;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for (int u, v, i = 0; i < m; ++i) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout << "*********************\n";
    bfs(1);
    return 0;
}