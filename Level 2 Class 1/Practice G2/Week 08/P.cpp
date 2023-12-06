#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int t; cin >> t;
    while(t--) {
        ll x; cin >> x;
        bool gr = false;
        ll ans = 0;
        for (int bt = 40; ~bt; bt--) {
            if (x>>bt&1) gr = true;
            else if (gr) ans+=(1LL<<bt);
        }
        cout << ans << '\n';
    }
    return 0;
}
