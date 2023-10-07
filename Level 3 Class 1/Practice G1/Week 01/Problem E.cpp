#include <bits/stdc++.h>
using namespace std;

const int N = 5e3 + 3;

vector<int> g[N];
bool visited[N];
int dfs(int u) {
    int cnt = 1;
    visited[u] = true;
    for (int v : g[u])
        if (not visited[v])
            cnt += dfs(v);
    return cnt;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    while (true) {
        int c, r;
        cin >> c >> r;
        if (c == 0 and r == 0)
            break;
        vector<string> vs(c);
        for (string &s : vs)
            cin >> s;
        sort(vs.begin(), vs.end());
        for (string s1, s2; r--; ) {
            cin >> s1 >> s2;
            int i = (int) (lower_bound(vs.begin(), vs.end(), s1) - vs.begin());
            int j = (int) (lower_bound(vs.begin(), vs.end(), s2) - vs.begin());
            g[i].push_back(j);
            g[j].push_back(i);
        }
        int ans = 0;
        for (int i = 0; i < c; ++i)
            if (not visited[i])
                ans = max(ans, dfs(i));
        cout << ans << '\n';
        for (int i = 0; i < c; ++i) {
            g[i].clear();
            visited[i] = false;
        }
    }
    return 0;
}