#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll pw = 1;
        ll ans = 0;
        for (int bt = 0; pw*2 <= n; bt++) {
            if (n>>bt&1^1) ans+=pw;
            pw*=2;
        }
        cout << ans << '\n';
    }
    return 0;
}
