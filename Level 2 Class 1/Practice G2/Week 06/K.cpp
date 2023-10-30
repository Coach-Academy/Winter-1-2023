#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector <int> p(n);
        for (auto &i : p) cin >> i;
        ll ans = 0;
        ll sm = p[0];
        for (int i = 1; i < n; i++) {
            ans = max(ans, (100LL*p[i]+k-1)/k-sm);
            sm+=p[i];
        }
        cout << ans << '\n';
    }
    return 0;
}
