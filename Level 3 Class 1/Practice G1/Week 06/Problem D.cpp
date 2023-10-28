#include <bits/stdc++.h>
using namespace std;

const int N = 2e3 + 3;
bool visited[N];
vector<tuple<int, int, int>> g[N];
vector<int> ans;

void euler(int u, int number) {
    while (not g[u].empty()) {
        int w, v, i;
        tie(w, v, i) = g[u].back(); g[u].pop_back();
        if (visited[i])
            continue;
        visited[i] = true;
        euler(v, w);
    }
    if (number)
        ans.push_back(number);
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    while (true) {
        int x, y, z, m = 0, start = 0, n = 0;
        for (; ; ++m) {
            cin >> x >> y;
            if (x == 0 and y == 0)
                break;
            if (start == 0)
                start = min(x, y);
            n = max(n, x);
            n = max(n, y);
            cin >> z;
            g[x].emplace_back(z, y, m);
            g[y].emplace_back(z, x, m);
        }
        if (m == 0)
            break;
        bool valid = true;
        for (int i = 1; i <= n; ++i) {
            if (g[i].size() & 1) {
                valid = false; break;
            }
            sort(g[i].begin(), g[i].end(), greater<tuple<int, int, int>>());
        }
        if (valid)
            euler(start, 0);
        if (ans.size() != m)
            cout << "Round trip does not exist.\n\n";
        else {
            reverse(ans.begin(), ans.end());
            cout << ans[0];
            for (int i = 1; i < (int) ans.size(); ++i)
                cout << ' ' << ans[i];
            cout << "\n\n";
        }
        ans.clear();
        for (int i = 0; i < m; ++i)
            visited[i] = false;
        for (int i = 0; i <= n; ++i)
            g[i].clear();
    }
    return 0;
}