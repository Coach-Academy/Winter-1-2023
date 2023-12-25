#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll sumDig(ll n) {
    ll res = 0;
    while(n) {
        res+=n%10;
        n/=10;
    }
    return res;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector <int> frq(m, 0);
        while(n--) {
            int x; cin >> x;
            frq[x%m]++;
        }
        int ans = 0;
        if (frq[0]) ans++;
        if (m%2 == 0 && frq[m/2]) ans++;
        for (int md = 1; md < (m+1)/2; md++) {
            int mate = m-md;
            auto mn = min(frq[md], frq[mate]);
            auto mx = max(frq[md], frq[mate]);
            if (!mn) ans+=mx;
            else ans+=max(0, mx-mn-1)+1;
        }
        cout << ans << '\n';
    }
    return 0;
}
