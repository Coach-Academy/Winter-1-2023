#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int t; cin >> t;
    while(t--) {
        ll l, r; cin >> l >> r;
        ll ans = 0;
        for (int bt = 62; ~bt; bt--) {
            if ((r>>bt&1) == (l>>bt&1)) {
                ans|=r&(1LL<<bt);
            }
            else {
                bool good = true;
                for (int nxt = bt-1; ~nxt; nxt--) {
                    ans|=(1LL<<nxt);
                    good&=r>>nxt&1;
                }
                if (good) ans|=1LL<<bt;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
