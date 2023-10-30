#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    int ans = 0, sm = 0;
    for (int l = 0, r = 0; l < n; l++) {
        r = max(l, r);
        while(r < n && sm+a[r] <= k) sm+=a[r++];
        ans = max(ans, r-l);
        sm-=a[l];
        sm = max(sm, 0);
    }
    cout << ans << '\n';
    return 0;
}
