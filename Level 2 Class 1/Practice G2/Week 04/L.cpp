#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    vector <int> a(n);
    ll sm = 0;
    for (auto &i : a) cin >> i, sm+=i;
    set <pair<ll, pair<int, int>>> segs;
    segs.insert({sm, {0, n-1}});
    while(k--) {
        auto it = --segs.end();
        auto curSm = it->first;
        auto [l, r] = it->second;
        segs.erase(it);
        cout << curSm << ' ';
        if (r > l) {
            segs.insert({curSm-a[l], {l+1, r}});
            segs.insert({curSm-a[r], {l, r-1}});
        }
    }
    cout << '\n';
    return 0;
}
