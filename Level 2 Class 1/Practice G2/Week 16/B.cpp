#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector <int> pos(n+1);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            pos[x] = i;
        }
        int mx = 0;
        long long ans = m;
        for (int i = 0; i < m; i++) {
            int x; cin >> x;
            int p = pos[x];
            if (p > mx) {
                mx = p;
                ans+=2*(p-i);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
