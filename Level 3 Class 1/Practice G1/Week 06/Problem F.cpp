#include <bits/stdc++.h>
using namespace std;
int n, in_deg[26], out_deg[26];
// word index
bool visited[1003];
vector<int> g[26];
vector<string> words;

void euler(int u, int index, vector<string> &ans) {
    while (not g[u].empty()) {
        int i = g[u].back();
        g[u].pop_back();
        if (visited[i])
            continue;
        visited[i] = true;
        euler(words[i].back() - 'a', i, ans);
    }
    if (~index)
        ans.push_back(words[index]);
}

void test_case() {
    cin >> n;
    words.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
        int u = words[i][0] - 'a';
        int v = words[i].back() - 'a';
        // u -> v
        ++in_deg[v];
        ++out_deg[u];
        g[u].push_back(i);
    }
    int s = -1;
    for (int i = 0; i < 26; ++i) {
        if (in_deg[i] + 1 == out_deg[i]) {
            if (~s) return cout << "***\n", void();
            s = i;
        } else if (in_deg[i] != out_deg[i] + 1 and in_deg[i] != out_deg[i])
            return cout << "***\n", void();
        sort(g[i].begin(), g[i].end(), [](int i1, int i2) {
            return words[i2] < words[i1];
        });
    }
    if (s == -1)
        for (s = 0; out_deg[s] == 0; ++s);
    vector<string> ans;
    euler(s, -1, ans);
    if (ans.size() != n)
        return cout << "***\n", void();
    reverse(ans.begin(), ans.end());
    cout << ans[0];
    for (int i = 1; i < (int) ans.size(); ++i)
        cout << '.' << ans[i];
    cout << '\n';   
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        test_case();
        for (int i = 0; i < n; ++i)
            visited[i] = false;
        for (int i = 0; i < 26; ++i) {
            in_deg[i] = out_deg[i] = 0;
            g[i].clear();
        }
    }
    return 0;
}