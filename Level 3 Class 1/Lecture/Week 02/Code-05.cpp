#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> g[N];
bool visited[N];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    for (int level = 0; not q.empty(); ++level) {
        for (int sz = (int) q.size(); sz; --sz) {
            int u = q.front();
            q.pop();
            cout << u << ' ' << level << '\n';
            for (int v : g[u]) {
                if (not visited[v]) {
                    q.push(v);
                    visited[v] = true;
                }
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