#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;
    int frq[20]{};
    while(n--) {
        int x; cin >> x;
        for (int bt = 0; bt < 20; bt++) {
            if (x>>bt&1) frq[bt]++;
        }
    }
    ll ans = 0;
    while(true) {
        int cur = 0;
        for (int bt = 0; bt < 20; bt++) {
            if (frq[bt]) cur|=1<<bt, frq[bt]--;
        }
        if (cur == 0) break;
        ans+=1LL*cur*cur;
    }
    cout << ans << '\n';
    return 0;
}
