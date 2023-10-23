#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <long long> v(n);
    for (auto &i : v) cin >> i;
    auto u = v;
    sort(u.begin(), u.end());
    for (int i = 1; i < n; i++) v[i]+=v[i-1], u[i]+=u[i-1];
    int q; cin >> q;
    while(q--) {
        int t, l, r; cin >> t >> l >> r; l--, r--;
        if (t == 1) cout << v[r]-(l ? v[l-1] : 0) << '\n';
        if (t == 2) cout << u[r]-(l ? u[l-1] : 0) << '\n';
    }
    return 0;
}
