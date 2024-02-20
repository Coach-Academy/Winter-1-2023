#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        string s, c; cin >> s >> c;
        int cost[26];
        for (auto &i : cost) i = 1e5;
        for (int i = 0; i < n; i++) {
            cost[s[i]-'a'] = min(cost[s[i]-'a'], c[i]-'0');
        }
        int ans = 0;
        string p; cin >> p;
        for (auto &i : p) ans+=cost[i-'a'];
        cout << (ans >= 1e5 ? -1 : ans) << '\n';
    }
    return 0;
}
