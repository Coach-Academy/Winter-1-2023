#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n, r, avg; cin >> n >> r >> avg;
    vector <pair<int, int>> ex(n);
    ll ans = 0, sm = 0;
    for (auto &[b, a] : ex) cin >> a >> b, sm+=a;
    sort(ex.begin(), ex.end());
    for (auto &[b, a] : ex) {
        int inc = max(0LL, min((ll)r-a, 1LL*avg*n-sm));
        sm+=inc, ans+=1LL*inc*b;
    }
    cout << ans << '\n';
    return 0;
}
