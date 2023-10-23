#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector <int> a(n), t(n);
    for (auto &i : a) cin >> i;
    for (auto &i : t) cin >> i;
    int sm = 0;
    vector <int> pref(n, 0);
    for (int i = 0; i < n; i++) {
        if (t[i]) sm+=a[i];
        else pref[i] = a[i];
        if (i) pref[i]+=pref[i-1];
    }
    int mx = -2e9;
    for (int i = 0; i+k-1 < n; i++) {
        mx = max(pref[i+k-1]-(i ? pref[i-1] : 0), mx);
    }
    cout << sm+mx << '\n';
    return 0;
}
