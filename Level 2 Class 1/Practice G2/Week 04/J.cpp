#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector <vector <int>> pos(n+1);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            pos[x].push_back(i);
        }
        int ans = 2e9;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < pos[i].size(); j++) {
                ans = min(ans, pos[i][j] - pos[i][j - 1]+1);
            }
        }
        if (ans > n) ans = -1;
        cout << ans << '\n';
    }
    return 0;
}
