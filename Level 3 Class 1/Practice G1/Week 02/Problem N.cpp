#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int n;
bool visited[N];
vector<pair<int, int>> g[N];

int main() {
    cin >> n;
    for (int u, v, s, i = 1; i < n; ++i) {
        cin >> u >> v >> s;
        g[u].emplace_back(v, s);
        g[v].emplace_back(u, s);
    }
    queue<pair<int, int>> q;
    q.emplace(1, -1);
    visited[1] = true;
    set<int> st;
    while (not q.empty()) {
        auto [u, node] = q.front(); q.pop();
        for (auto [v, s] : g[u]) {
            if (visited[v])
                continue;
            visited[v] = true;
            if (s == 2) {
                st.erase(node);
                st.insert(v);
                q.emplace(v, v);
            } else {
                q.emplace(v, node);
            }
        }
    }
    cout << st.size() << '\n';
    for (int x : st)
        cout << x << ' ';
    return 0;
}